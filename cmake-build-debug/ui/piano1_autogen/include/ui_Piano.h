/********************************************************************************
** Form generated from reading UI file 'piano.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIANO_H
#define UI_PIANO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "pianokey.h"

QT_BEGIN_NAMESPACE

class Ui_Piano
{
public:
    PianoKey *frame;

    void setupUi(QWidget *Piano)
    {
        if (Piano->objectName().isEmpty())
            Piano->setObjectName("Piano");
        Piano->resize(1040, 90);
        Piano->setMinimumSize(QSize(1040, 90));
        frame = new PianoKey(Piano);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 20, 90));
        frame->setMinimumSize(QSize(20, 90));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(Piano);

        QMetaObject::connectSlotsByName(Piano);
    } // setupUi

    void retranslateUi(QWidget *Piano)
    {
        Piano->setWindowTitle(QCoreApplication::translate("Piano", "Piano", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Piano: public Ui_Piano {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIANO_H
