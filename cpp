void Matrix::transpose(int threadCount)
{
    m_transpose.clear();
    m_transpose.resize(m_matrix[0].size(), QList<MATRIX_ELEMENT>(m_matrix.size()));

    auto pool = QThreadPool::globalInstance();
    auto maxThreadCount = QThread::idealThreadCount();

    threadCount = threadCount > maxThreadCount ? maxThreadCount : threadCount;
    auto processCount = m_matrix.size() / threadCount;
    auto restCount = m_matrix.size() % threadCount;

    QElapsedTimer timer;
    timer.start();

    for (int count = 0; count < threadCount - 1; ++count) {
        qDebug() << "start:" << count * processCount << "end:" << (count + 1) * processCount;
        pool->start([&] {
            for (auto row = count * processCount; row < (count + 1) * processCount; ++row) {
                for (int col = 0; col < m_matrix[row].size(); ++col) {
                    m_transpose[col][row] = m_matrix[row][col];
                }
            }
        });
    }
    pool->start([&] {
        qDebug() << "start:" << (threadCount - 1) * processCount << "end:" << threadCount * processCount + restCount;
        for (auto row = (threadCount - 1) * processCount; row < threadCount * processCount + restCount; ++row) {
            for (int col = 0; col < m_matrix[row].size(); ++col) {
                m_transpose[col][row] = m_matrix[row][col];
            }
        }
    });

    pool->waitForDone();
    qDebug() << QString("transpose size(%1, %2) to size(%3, %4), use time: %5ms, thread count: %6").arg(m_matrix.size())
            .arg(m_matrix[0].size()).arg(m_matrix[0].size()).arg(m_matrix.size()).arg(timer.elapsed()).arg(threadCount);
}
