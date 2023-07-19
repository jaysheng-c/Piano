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
#include <list>
#include <windows.h>
#include <utility>

class Player {
public:

    explicit Player(Music::NoteLists notes);
    explicit Player();
    virtual ~Player();

    void SetRate(const float rate) { m_rate = rate; }
    virtual void Play();
    virtual void Play(int pitch);

protected:
private:
    Music::NoteLists m_notes;
    float m_rate = 1.4;
    HMIDIOUT m_handle;
};


#endif //MUSICPLAYER_PLAYER_H
