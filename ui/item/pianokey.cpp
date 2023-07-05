/**
  ********************************************************************************
  * @file           : pianokey.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

#include "pianokey.h"
#include <QDebug>

PianoKey::PianoKey(QWidget *parent) : QFrame(parent), m_name("unknown"), m_pitch(0), m_type(TYPE::WHITE)
{
    this->setStyleSheet(GetStyleSheet());
}

PianoKey::PianoKey(const QString &name, int pitch, QWidget *parent, TYPE type) : QFrame(parent),
                                                                                 m_name(name), m_pitch(pitch),
                                                                                 m_type(type)
{
    this->setStyleSheet(GetStyleSheet());
}

PianoKey::~PianoKey()
{

}

void PianoKey::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
}

void PianoKey::resizeEvent(QResizeEvent *event)
{
    this->update();
    QWidget::resizeEvent(event);
}

bool PianoKey::event(QEvent *event)
{
    if (event->type() == QEvent::Type::Enter) {
        emit this->keyName(m_name);
        this->setStyleSheet(GetStyleSheet(event->type()));
    } else if (event->type() == QEvent::Type::Leave) {
        this->setStyleSheet(GetStyleSheet(event->type()));
    }
    if (event->type() == QEvent::Type::MouseButtonPress) {
        emit this->keyClick(m_pitch);
    }
    return QFrame::event(event);
}

void PianoKey::SetPitch(int pitch)
{
    m_pitch = pitch;
}

void PianoKey::SetName(const QString &name)
{
    m_name = name;
}

void PianoKey::SetKeyType(TYPE type)
{
    m_type = type;
}

QString PianoKey::GetStyleSheet(QEvent::Type type)
{
    QString sheet = {"border: 1px solid;"
                     "border-color: black;"};

    if (m_type == TYPE::BLACK) {
        if (type == QEvent::Type::Enter) {
            return sheet + QString("background: yellow;");
        }
        return sheet + QString("background: black;");
    }
    if (type == QEvent::Type::Enter) {
        return sheet +  QString("background: yellow;");
    }
    return sheet + QString("background: white;");
}
