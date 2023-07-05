/**
  ********************************************************************************
  * @file           : keyboardGroup.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/6
  ********************************************************************************
  */
//

#ifndef PIANO_KEYBOARDGROUP_H
#define PIANO_KEYBOARDGROUP_H

#include <QWidget>
#include <QMap>

#include "pianokey.h"


QT_BEGIN_NAMESPACE
namespace Ui { class KeyBoardGroup; }
QT_END_NAMESPACE

class KeyBoardGroup : public QWidget {
Q_OBJECT

public:
    explicit KeyBoardGroup(QWidget *parent = nullptr);
    ~KeyBoardGroup() override;

//    void SetKeyPress(int pitch);
//    void SetKeyPress(const QString &name);

protected:
    void InitKeyBoard();
    QPoint InitGroupKey(const QPoint &point, int index);

private:
    Ui::KeyBoardGroup *ui;
    QMap<QString, PianoKey*> m_keys;

private slots:
    void SlotSendName(QString name);
    void SlotKeyBoardPress(int pitch);

};


#endif //PIANO_KEYBOARDGROUP_H
