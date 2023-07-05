/**
  ********************************************************************************
  * @file           : music.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/2
  ********************************************************************************
  */
//

#include "music.h"

std::string Music::ToString(Music::Pitch pitch)
{
    switch(pitch) {
#define XX(name) \
    case Pitch::name: \
        return #name; \
        break;

        XX(A0);XX(A0s);XX(B0);
        XX(C1);XX(C1s);XX(D1);XX(D1s);XX(E1);XX(F1);XX(F1s);XX(G1);XX(G1s);XX(A1);XX(A1s);XX(B1);
        XX(C2);XX(C2s);XX(D2);XX(D2s);XX(E2);XX(F2);XX(F2s);XX(G2);XX(G2s);XX(A2);XX(A2s);XX(B2);
        XX(C3);XX(C3s);XX(D3);XX(D3s);XX(E3);XX(F3);XX(F3s);XX(G3);XX(G3s);XX(A3);XX(A3s);XX(B3);
        XX(C4);XX(C4s);XX(D4);XX(D4s);XX(E4);XX(F4);XX(F4s);XX(G4);XX(G4s);XX(A4);XX(A4s);XX(B4);
        XX(C5);XX(C5s);XX(D5);XX(D5s);XX(E5);XX(F5);XX(F5s);XX(G5);XX(G5s);XX(A5);XX(A5s);XX(B5);
        XX(C6);XX(C6s);XX(D6);XX(D6s);XX(E6);XX(F6);XX(F6s);XX(G6);XX(G6s);XX(A6);XX(A6s);XX(B6);
        XX(C7);XX(C7s);XX(D7);XX(D7s);XX(E7);XX(F7);XX(F7s);XX(G7);XX(G7s);XX(A7);XX(A7s);XX(B7);
        XX(C8);
#undef XX
        default:
            break;
    }
    return "UNKNOW";
}

Music::Pitch Music::FromString(const std::string &str)
{
#define XX(pitch, v) \
    if(str == #v) { \
        return Pitch::pitch; \
    }
    XX(A0,A0);XX(A0s,A0s);XX(B0,B0);
    XX(C1,C1);XX(C1s,C1s);XX(D1,D1);XX(D1s,D1s);XX(E1,E1);XX(F1,F1);XX(F1s,F1s);XX(G1,G1);XX(G1s,G1s);XX(A1,A1);XX(A1s,A1s);XX(B1,B1);
    XX(C2,C2);XX(C2s,C2s);XX(D2,D2);XX(D2s,D2s);XX(E2,E2);XX(F2,F2);XX(F2s,F2s);XX(G2,G2);XX(G2s,G2s);XX(A2,A2);XX(A2s,A2s);XX(B2,B2);
    XX(C3,C3);XX(C3s,C3s);XX(D3,D3);XX(D3s,D3s);XX(E3,E3);XX(F3,F3);XX(F3s,F3s);XX(G3,G3);XX(G3s,G3s);XX(A3,A3);XX(A3s,A3s);XX(B3,B3);
    XX(C4,C4);XX(C4s,C4s);XX(D4,D4);XX(D4s,D4s);XX(E4,E4);XX(F4,F4);XX(F4s,F4s);XX(G4,G4);XX(G4s,G4s);XX(A4,A4);XX(A4s,A4s);XX(B4,B4);
    XX(C5,C5);XX(C5s,C5s);XX(D5,D5);XX(D5s,D5s);XX(E5,E5);XX(F5,F5);XX(F5s,F5s);XX(G5,G5);XX(G5s,G5s);XX(A5,A5);XX(A5s,A5s);XX(B5,B5);
    XX(C6,C6);XX(C6s,C6s);XX(D6,D6);XX(D6s,D6s);XX(E6,E6);XX(F6,F6);XX(F6s,F6s);XX(G6,G6);XX(G6s,G6s);XX(A6,A6);XX(A6s,A6s);XX(B6,B6);
    XX(C7,C7);XX(C7s,C7s);XX(D7,D7);XX(D7s,D7s);XX(E7,E7);XX(F7,F7);XX(F7s,F7s);XX(G7,G7);XX(G7s,G7s);XX(A7,A7);XX(A7s,A7s);XX(B7,B7);
    XX(C8,C8);

    XX(A0,a0);XX(A0s,a0s);XX(B0,b0);
    XX(C1,c1);XX(C1s,c1s);XX(D1,d1);XX(D1s,d1s);XX(E1,e1);XX(F1,f1);XX(F1s,f1s);XX(G1,g1);XX(G1s,g1s);XX(A1,a1);XX(A1s,a1s);XX(B1,b1);
    XX(C2,c2);XX(C2s,c2s);XX(D2,d2);XX(D2s,d2s);XX(E2,e2);XX(F2,f2);XX(F2s,f2s);XX(G2,g2);XX(G2s,g2s);XX(A2,a2);XX(A2s,a2s);XX(B2,b2);
    XX(C3,c3);XX(C3s,c3s);XX(D3,d3);XX(D3s,d3s);XX(E3,e3);XX(F3,f3);XX(F3s,f3s);XX(G3,g3);XX(G3s,g3s);XX(A3,a3);XX(A3s,a3s);XX(B3,b3);
    XX(C4,c4);XX(C4s,c4s);XX(D4,d4);XX(D4s,d4s);XX(E4,e4);XX(F4,f4);XX(F4s,f4s);XX(G4,g4);XX(G4s,g4s);XX(A4,a4);XX(A4s,a4s);XX(B4,b4);
    XX(C5,c5);XX(C5s,c5s);XX(D5,d5);XX(D5s,d5s);XX(E5,e5);XX(F5,f5);XX(F5s,f5s);XX(G5,g5);XX(G5s,g5s);XX(A5,a5);XX(A5s,a5s);XX(B5,b5);
    XX(C6,c6);XX(C6s,c6s);XX(D6,d6);XX(D6s,d6s);XX(E6,e6);XX(F6,f6);XX(F6s,f6s);XX(G6,g6);XX(G6s,g6s);XX(A6,a6);XX(A6s,a6s);XX(B6,b6);
    XX(C7,c7);XX(C7s,c7s);XX(D7,d7);XX(D7s,d7s);XX(E7,e7);XX(F7,f7);XX(F7s,f7s);XX(G7,g7);XX(G7s,g7s);XX(A7,a7);XX(A7s,a7s);XX(B7,b7);
    XX(C8,c8);
    return Pitch::Rest;
#undef XX
}

ScaleCalculation::ScaleCalculation(Music::Tone tone) : m_mainKey(tone), m_octaveKey(12)
{

}

Music::Pitch ScaleCalculation::FromRollCall(Music::RollCall rollCall, int Octave)
{
    if (rollCall == Music::RollCall::STOP) {
        return Music::Pitch::Rest;
    }
    int mainCKey = static_cast<int>(Music::Pitch::C4) + static_cast<int>(m_mainKey);
    auto pitch = static_cast<Music::Pitch>(mainCKey + rollCall + Octave * m_octaveKey);
    if (pitch < Music::Pitch::A0 || pitch > Music::Pitch::C8) {
        m_err = std::string("out of range. range:[A0,C8]");
    }
    return pitch;
}

Music::Pitch ScaleCalculation::FromRollCall(const Music::Note &note)
{
    SetMainKey(static_cast<Music::Tone>(note.m_mainKey));
    return FromRollCall(static_cast<Music::RollCall>(note.m_rollCall), note.m_octave);
}

std::string ScaleCalculation::Error()
{
    std::string error = m_err;
    m_err = "";
    return error;
}

void ScaleCalculation::UpateKey(int key)
{
    m_mainKey = static_cast<Music::Tone>(m_mainKey + key);
}

void ScaleCalculation::DownKey(int key)
{
    m_mainKey = static_cast<Music::Tone>(m_mainKey - key);
}

void ScaleCalculation::SetMainKey(Music::Tone tone)
{
    if (tone != m_mainKey) {
        m_mainKey = tone;
    }
}

void ScaleCalculation::TransToNoteLists(const std::list<Music::Note> &source, Music::NoteLists &dest)
{
    int rate = 0;
    for (auto note : source) {
        if (rate != note.m_rate) {
            rate = note.m_rate;
            dest.emplace_back(rate);
        }
        dest.emplace_back(FromRollCall(note));
    }
}
