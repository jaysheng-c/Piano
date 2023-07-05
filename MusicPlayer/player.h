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

class Player {
public:

    explicit Player(Music::NoteLists notes);
    virtual ~Player();

    void SetRate(const float rate) { m_rate = rate; }
    virtual void Play();

protected:
private:
    Music::NoteLists m_notes;
    float m_rate = 1.4;
};


#endif //MUSICPLAYER_PLAYER_H
