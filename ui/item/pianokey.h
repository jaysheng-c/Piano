/**
  ********************************************************************************
  * @file           : pianokey.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

#ifndef PIANO_PIANOKEY_H
#define PIANO_PIANOKEY_H

#include <QFrame>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QFocusEvent>
#include <QEvent>

#include "global.h"

class JAYSHENG_LIBRARY_EXPORT PianoKey : public QFrame {
    Q_OBJECT
public:
    enum TYPE {
        WHITE,
        BLACK
    };
    explicit PianoKey(QWidget *parent = nullptr);
    explicit PianoKey(const QString &name, int pitch, QWidget *parent = nullptr, TYPE type = TYPE::WHITE);
    ~PianoKey() override;

    void SetPitch(int pitch);
    void SetName(const QString &name);
    void SetKeyType(TYPE type);

    QString GetName() const { return m_name; }
protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    bool event(QEvent *event) override;

    QString GetStyleSheet(QEvent::Type type = QEvent::Type::Leave);
private:
    int m_pitch;
    QString m_name;
    TYPE m_type;
signals:
    void keyClick(int);
    void keyName(QString);
};


#endif //PIANO_PIANOKEY_H
