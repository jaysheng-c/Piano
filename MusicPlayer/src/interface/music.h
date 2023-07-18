/**
  ********************************************************************************
  * @file           : music.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/2
  ********************************************************************************
  */
//

#ifndef MUSICPLAYER_MUSIC_H
#define MUSICPLAYER_MUSIC_H

#include "../../../../../../QtCreator/Tools/mingw1120_64/lib/gcc/x86_64-w64-mingw32/11.2.0/include/c++/string"
#include "../../../../../../QtCreator/Tools/mingw1120_64/lib/gcc/x86_64-w64-mingw32/11.2.0/include/c++/list"

class Music {
public:
    using NoteLists = std::list<int>;

    struct Note {
        int m_mainKey;
        int m_rollCall;
        int m_rate;
        int m_octave;
        Note(int mainKey, int rollCall, int rate = RATE::QUARTER_NOTE, int octave = 0) :
            m_mainKey(mainKey), m_rollCall(rollCall), m_rate(rate), m_octave(octave) {}
    };

    // 音名
    enum Pitch {
        Rest = 0,
        A0 = 21, A0s, B0,
        C1 = 24, C1s, D1, D1s, E1, F1, F1s, G1, G1s, A1, A1s, B1,
        C2 = 36, C2s, D2, D2s, E2, F2, F2s, G2, G2s, A2, A2s, B2,
        C3 = 48, C3s, D3, D3s, E3, F3, F3s, G3, G3s, A3, A3s, B3,
        C4 = 60, C4s, D4, D4s, E4, F4, F4s, G4, G4s, A4, A4s, B4,
        C5 = 72, C5s, D5, D5s, E5, F5, F5s, G5, G5s, A5, A5s, B5,
        C6 = 84, C6s, D6, D6s, E6, F6, F6s, G6, G6s, A6, A6s, B6,
        C7 = 96, C7s, D7, D7s, E7, F7, F7s, G7, G7s, A7, A7s, B7,
        C8 = 108
    };

    // 唱名
    enum RollCall {
        STOP = -1, DO = 0, DOs = 1, RE = 2, REs = 3, MI = 4, FA = 5, FAs = 6, SOL = 7, SOLs = 8, LA = 9, LAs = 10, XI = 11
    };

    // 速率/音符
    enum RATE {
        WHOLE_NOTE = 4000,          // 全音符
        HALF_NOTE = 2000,           // 二分音符
        QUARTER_NOTE = 1000,        // 四分音符
        EIGHTH_NOTE = 500,          // 八分音符
        SIXTEENTH_NOTE = 250,       // 十六分音符
        THIRTY_SECOND_NOTE = 125,   // 三十二分音符
        COMBO_NOTE_START = -1,
        COMBO_NOTE_STOP = -2,
    };

    // 主key
    enum Tone {
        C = 0, Cs, D, Ds, E, F, Fs, G, Gs, A, As, B
    };

    static std::string ToString(Pitch pitch);
    static Pitch PitchFromString(const std::string &str);
};

class ScaleCalculation {
public:
    explicit ScaleCalculation(Music::Tone tone);

    Music::Pitch FromRollCall(Music::RollCall rollCall, int Octave = 0/*key*/);
    Music::Pitch FromRollCall(const Music::Note &note);
    std::string Error();
    void UpateKey(int key);
    void DownKey(int key);
    void SetMainKey(Music::Tone tone);

    void TransToNoteLists(const std::list<Music::Note> &source, Music::NoteLists &dest);

private:
    Music::Tone m_mainKey;
    int m_octaveKey = 12;

    std::string m_err;
};


#endif //MUSICPLAYER_MUSIC_H
