/**
  ********************************************************************************
  * @file           : piano.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

// You may need to build the project (run Qt uic code generator) to get "ui_Piano.h" resolved

#include "piano.h"
#include "ui_Piano.h"

#include <QDebug>

#include "item/pianokey.h"
//#include "../MusicPlayer/player.h"
//#include "../MusicPlayer/music.h"
//#include "../MusicPlayer/RomanticPhone.h"


Piano::Piano(QWidget *parent) :
        QWidget(parent), ui(new Ui::Piano)
{
    ui->setupUi(this);

    this->InitKeyBoard();
}

Piano::~Piano()
{
    delete ui;
}

void Piano::InitKeyBoard()
{
    constexpr int WHITE_KEY_COUNT = 52;
    constexpr int BLACK_KEY_COUNT = 36;

    QSize keySize(20, 90);

    this->setFixedWidth(WHITE_KEY_COUNT * keySize.width());
    m_keyBoard = new KeyBoardGroup(static_cast<QWidget*>(this));
    m_keyBoard->setStyleSheet("border: 1px solid;"
                              "border-color: black;");

    m_keyBoard->move(0,0);
}

void Piano::slotKeyBoardPress(int pitch)
{
    qDebug() << __FUNCTION__ << pitch;

}
