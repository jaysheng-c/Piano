/**
  ********************************************************************************
  * @file           : player.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/3
  ********************************************************************************
  */
//

#include "player.h"

#include <Windows.h>
#include <iostream>

#include <utility>

Player::Player(Music::NoteLists notes) : m_notes(std::move(notes))
{
}

Player::~Player()
{

}

void Player::Play()
{
    HMIDIOUT handle;
    midiOutOpen(&handle, 0, 0, 0, CALLBACK_NULL);
    midiOutShortMsg(handle, 34<<8 | 0xC0);

    int sleep = Music::RATE::QUARTER_NOTE;
    int voice = 0x0;
    int volume = 0x7f;
    static int combo = Music::RATE::COMBO_NOTE_STOP;

    for (auto note : m_notes) {
        switch (note) {
            case Music::RATE::WHOLE_NOTE:
            case Music::RATE::HALF_NOTE:
            case Music::RATE::QUARTER_NOTE:
            case Music::RATE::EIGHTH_NOTE:
            case Music::RATE::SIXTEENTH_NOTE:
            case Music::RATE::THIRTY_SECOND_NOTE:
                sleep = static_cast<float>(note) / m_rate;
                continue;
            case Music::RATE::COMBO_NOTE_START:
            case Music::RATE::COMBO_NOTE_STOP:
                combo = note;
                continue;
            default:
                break;
        }
//        if (note == Music::Pitch::Rest) {
//            std::cout << "rest: " << sleep << std::endl;
//            Sleep(sleep);
//            continue;
//        }
        voice = (volume << 16) + (note << 8) + 0x92;
        midiOutShortMsg(handle, voice);
        if (combo == Music::RATE::COMBO_NOTE_STOP) {
//            std::cout << "combo: " << sleep << std::endl;
            Sleep(sleep);
        }

    }

    midiOutClose(handle);
}
