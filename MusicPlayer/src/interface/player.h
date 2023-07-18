/**
  ********************************************************************************
  * @file           : player.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/3
  ********************************************************************************
  */
//

#ifndef MUSICPLAYER_PLAYER_H
#define MUSICPLAYER_PLAYER_H

#include "music.h"
#include "../../../../../../QtCreator/Tools/mingw1120_64/lib/gcc/x86_64-w64-mingw32/11.2.0/include/c++/list"

class Player {
public:

    explicit Player(Music::NoteLists notes);
    explicit Player() = default;
    virtual ~Player();

    void SetRate(const float rate) { m_rate = rate; }
    virtual void Play();
    virtual void Play(int pitch);

protected:
private:
    Music::NoteLists m_notes;
    float m_rate = 1.4;
};


#endif //MUSICPLAYER_PLAYER_H
