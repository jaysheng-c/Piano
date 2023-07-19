/**
  ********************************************************************************
  * @file           : piano.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

#ifndef PIANO_PIANO_H
#define PIANO_PIANO_H

#include <QWidget>
#include <QVector>

#include "keyboardGroup.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Piano; }
QT_END_NAMESPACE

class Piano : public QWidget {
Q_OBJECT

public:
    explicit Piano(QWidget *parent = nullptr);
    ~Piano() override;

    void InitKeyBoard();
protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::Piano *ui;
//    KeyBoardGroup *m_keyBoard;

public slots:
    void slotKeyBoardPress(int pitch);
};



#endif //PIANO_PIANO_H
