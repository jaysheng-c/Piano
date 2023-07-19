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

#include "interface/player.h"

#include <windows.h>
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

    int sleep = Music::MusicalNote::MUSICALNOTE::QUARTER_NOTE;
    int voice = 0x0;
    int volume = 0x7f;
    static int combo = Music::MusicalNote::MUSICALNOTE::COMBO_NOTE_STOP;
    for (auto note : m_notes) {
        switch (note) {
            case Music::MusicalNote::MUSICALNOTE::WHOLE_NOTE:
            case Music::MusicalNote::MUSICALNOTE::HALF_NOTE:
            case Music::MusicalNote::MUSICALNOTE::QUARTER_NOTE:
            case Music::MusicalNote::MUSICALNOTE::EIGHTH_NOTE:
            case Music::MusicalNote::MUSICALNOTE::SIXTEENTH_NOTE:
            case Music::MusicalNote::MUSICALNOTE::THIRTY_SECOND_NOTE:
                sleep = static_cast<float>(note) / m_rate;
                continue;
            case Music::MusicalNote::MUSICALNOTE::COMBO_NOTE_START:
            case Music::MusicalNote::MUSICALNOTE::COMBO_NOTE_STOP:
                combo = note;
                continue;
            default:
                break;
        }
        voice = (volume << 16) + (note << 8) + 0x92;
        midiOutShortMsg(handle, voice);
        if (combo == Music::MusicalNote::MUSICALNOTE::COMBO_NOTE_STOP) {
            Sleep(sleep);
        }

    }

    midiOutClose(handle);
}

void Player::Play(int pitch)
{
    HMIDIOUT handle;
    midiOutOpen(&handle, 0, 0, 0, CALLBACK_NULL);
    midiOutShortMsg(handle, 34<<8 | 0xC0);
    int volume = 0x7f;
    int voice = (volume << 16) + (pitch << 8) + 0x92;
    midiOutShortMsg(handle, voice);
    Sleep(1000);
    midiOutClose(handle);
}
