/**
  ********************************************************************************
  * @file           : RomanticPhone.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/5
  ********************************************************************************
  */
//

#ifndef MUSICPLAYER_ROMANTICPHONE_H
#define MUSICPLAYER_ROMANTICPHONE_H


#include <list>
#include "music.h"

Music::Tone g_phoneKey = Music::Tone::As;

float g_phoneRate = (float)(96) / (float)(60);

std::list<Music::Note> g_phoneHeader = {
        // 1
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        // 2
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        // 3
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 4
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),

        // 5
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        // 6
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        // 7
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        // 8 上
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE, -1),
};

std::list<Music::Note> g_phoneBodyHeader = {
        // 8 下
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
};

std::list<Music::Note> g_phoneBody = {
        // 9
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 10
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 11
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),

        // 12
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),

        // 13
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 14
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 15
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),

        // 16
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),

        // 17
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),

        // 18
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 19
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::SIXTEENTH_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::QUARTER_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 20
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),

        // 21
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),

        // 22
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        // 23
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::SIXTEENTH_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 24
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),

        // 25
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 26
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),


        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +2),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +2),

        // 27
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 28
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 29
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 30
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -2),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 31
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 32
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),

        // 33
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 34
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),

        // 35
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 36
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::SIXTEENTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::SIXTEENTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 37
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 38
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 39
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 40
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::QUARTER_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::QUARTER_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::QUARTER_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),

        // 41
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::QUARTER_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 42
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::QUARTER_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 43
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::QUARTER_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, +1),

        // 44
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +1),

        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
};

std::list<Music::Note> g_phoneTail = {
        // 45
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, +2),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::RE, Music::RATE::EIGHTH_NOTE, +2),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        // 46
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -2),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),

        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::MI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),

        // 47
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 48
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::LA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::XI, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),

        Music::Note(g_phoneKey, Music::RollCall::SOLs, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::FA, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),

        // 49
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_START),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, +1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::SOL, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::DO, Music::RATE::EIGHTH_NOTE, -1),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::COMBO_NOTE_STOP),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),
        Music::Note(g_phoneKey, Music::RollCall::STOP, Music::RATE::QUARTER_NOTE),
};


#endif //MUSICPLAYER_ROMANTICPHONE_H
