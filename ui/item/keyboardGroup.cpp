/**
  ********************************************************************************
  * @file           : keyboardGroup.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/6
  ********************************************************************************
  */
//

// You may need to build the project (run Qt uic code generator) to get "ui_KeyBoardGroup.h" resolved

#include "keyboardGroup.h"
#include "ui_KeyBoardGroup.h"

#include <QDebug>

#include "music.h"

KeyBoardGroup::KeyBoardGroup(QWidget *parent) :
        QWidget(parent), ui(new Ui::KeyBoardGroup)
{
    ui->setupUi(this);
    this->setMinimumSize(20 * 88, 90);
    InitKeyBoard();
}

KeyBoardGroup::~KeyBoardGroup()
{
    delete ui;
}

void KeyBoardGroup::InitKeyBoard()
{
    QPoint point(0, 0);
    QSize whiteKeySize(20, 90);
    QSize blackKeySize(14, 45);

    // 初始化左侧按键
    QString name = QString::fromStdString(Music::ToString(Music::Pitch::A0));
    auto keyBoard = new PianoKey(name, Music::Pitch::A0, static_cast<QWidget *>(this));
    keyBoard->setFixedSize(whiteKeySize);
    keyBoard->lower();
    keyBoard->setStyleSheet("border: 1px solid;"
                            "border-color: black;"
                            "background-color: white;");
    (void) connect(keyBoard, &PianoKey::keyName, this, &KeyBoardGroup::SlotSendName);
    (void) connect(keyBoard, &PianoKey::keyClick, this, &KeyBoardGroup::SlotKeyBoardPress);
    keyBoard->move(point);
    point.setX(point.x() + whiteKeySize.width());
    m_keys.insert(name, keyBoard);

    name = QString::fromStdString(Music::ToString(Music::Pitch::A0s));
    keyBoard = new PianoKey(name, Music::Pitch::A0s, static_cast<QWidget *>(this), PianoKey::TYPE::BLACK);
    keyBoard->raise();
    keyBoard->setFixedSize(blackKeySize);
    keyBoard->setStyleSheet("border: 1px solid;"
                            "border-color: black;"
                            "background-color: black;");
    (void) connect(keyBoard, &PianoKey::keyName, this, &KeyBoardGroup::SlotSendName);
    (void) connect(keyBoard, &PianoKey::keyClick, this, &KeyBoardGroup::SlotKeyBoardPress);
    keyBoard->move(point.x() - blackKeySize.width() / 2, point.y());
    m_keys.insert(name, keyBoard);

    name = QString::fromStdString(Music::ToString(Music::Pitch::B0));
    keyBoard = new PianoKey(name, Music::Pitch::B0, static_cast<QWidget *>(this));
    keyBoard->setFixedSize(whiteKeySize);
    keyBoard->lower();
    keyBoard->setStyleSheet("border: 1px solid;"
                            "border-color: black;"
                            "background-color: white;");
    (void) connect(keyBoard, &PianoKey::keyName, this, &KeyBoardGroup::SlotSendName);
    (void) connect(keyBoard, &PianoKey::keyClick, this, &KeyBoardGroup::SlotKeyBoardPress);
    keyBoard->move(point);
    point.setX(point.x() + whiteKeySize.width());
    m_keys.insert(name, keyBoard);

    // 初始化大字一组 到 小字四组
    constexpr int GROUPS = 7;
    for (int i = 1; i <= GROUPS; ++i) {
        point = InitGroupKey(point, i);
        qDebug() << "";
    }

    // 初始化右侧按键
    name = QString::fromStdString(Music::ToString(Music::Pitch::C8));
    keyBoard = new PianoKey(name, Music::Pitch::C8, static_cast<QWidget *>(this));
    keyBoard->setFixedSize(whiteKeySize);
    keyBoard->lower();
    keyBoard->setStyleSheet("border: 1px solid;"
                            "border-color: black;"
                            "background-color: white;");
    (void) connect(keyBoard, &PianoKey::keyName, this, &KeyBoardGroup::SlotSendName);
    (void) connect(keyBoard, &PianoKey::keyClick, this, &KeyBoardGroup::SlotKeyBoardPress);
    keyBoard->move(point);
    m_keys.insert(name, keyBoard);
}

QPoint KeyBoardGroup::InitGroupKey(const QPoint &point, int index)
{
    if (index <= 0 || index >= 8) {
        return point;
    }

    QSize whiteKeySize(20, 90);
    QSize blackKeySize(14, 45);
    QPoint whiteP = point;
    QPoint blackP = QPoint(point.x() + whiteKeySize.width() - blackKeySize.width() / 2, point.y());
    constexpr int COUNT = 12;
    for (int i = 0; i < COUNT; ++i) {
        int basePitch = Music::Pitch::C1 + i;
        QString name = QString::fromStdString(Music::ToString(static_cast<Music::Pitch>(basePitch + COUNT * (index - 1))));
        auto keyBoard = new PianoKey(name, basePitch + COUNT * (index - 1), static_cast<QWidget *>(this));
        (void) connect(keyBoard, &PianoKey::keyName, this, &KeyBoardGroup::SlotSendName);
        (void) connect(keyBoard, &PianoKey::keyClick, this, &KeyBoardGroup::SlotKeyBoardPress);

        if ((basePitch % Music::Pitch::C1s == 0) || (basePitch % Music::Pitch::D1s == 0) ||
            (basePitch % Music::Pitch::F1s == 0) || (basePitch % Music::Pitch::G1s == 0) ||
            (basePitch % Music::Pitch::A1s == 0)) {
            // 初始化黑键位置
            keyBoard->SetKeyType(PianoKey::TYPE::BLACK);
            keyBoard->setFixedSize(blackKeySize);
            keyBoard->setStyleSheet("border: 1px solid;"
                                    "border-color: black;"
                                    "background-color: black;");
            keyBoard->move(blackP);
            keyBoard->raise();
            if (basePitch % Music::Pitch::D1s == 0) {
                blackP.setX(blackP.x() + 2 * whiteKeySize.width());
            } else {
                blackP.setX(blackP.x() + whiteKeySize.width());
            }
        } else {
            // 初始化白键位置
            keyBoard->setFixedSize(whiteKeySize);
            keyBoard->setStyleSheet("border: 1px solid;"
                                    "border-color: black;"
                                    "background-color: white;");
            keyBoard->move(whiteP);
            keyBoard->lower();
            whiteP.setX(whiteP.x() + whiteKeySize.width());
        }
        m_keys.insert(name, keyBoard);
    }
    return whiteP;
}

void KeyBoardGroup::SlotSendName(QString name)
{
    qDebug() << __FUNCTION__ << name;
}


void KeyBoardGroup::SlotKeyBoardPress(int pitch)
{
    qDebug() << __FUNCTION__ << pitch;
}
