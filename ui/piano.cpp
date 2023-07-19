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

    ui->selectItemWidget->setStyleSheet("border: 1px solid;"
                                        "border-color: black;"
                                        "background-color: red;");
    ui->selectItemWidget->setFixedWidth(WHITE_KEY_COUNT * keySize.width());

    this->setFixedWidth(WHITE_KEY_COUNT * keySize.width());
    ui->keyBoardWidget->setStyleSheet("border: 1px solid;"
                              "border-color: black;");
    ui->keyBoardWidget->setFixedWidth(WHITE_KEY_COUNT * keySize.width());
}

void Piano::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key::Key_Escape:
            break;
        case Qt::Key::Key_A:
            break;
        default:
            break;

    }
    //
    QWidget::keyPressEvent(event);
}

void Piano::slotKeyBoardPress(int pitch)
{
    qDebug() << __FUNCTION__ << pitch;

}
