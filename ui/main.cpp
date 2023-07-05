/**
  ********************************************************************************
  * @file           : main.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

#include <QApplication>

#include "piano.h"

int main(int argc, char **argv) {
    QApplication application(argc, argv);
    Piano piano;
    piano.show();
    return QApplication::exec();
}