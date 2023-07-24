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

#include <string>
#include <list>
#include <sstream>

class Music {
public:
    using NoteLists = std::list<int>;

    class Note {
    public:
        int m_mainKey;
        int m_rollCall;
        int m_rate;
        int m_octave;
        Note(int mainKey, int rollCall, int rate = MusicalNote::QUARTER_NOTE, int octave = 0) :
            m_mainKey(mainKey), m_rollCall(rollCall), m_rate(rate), m_octave(octave) {}
    };

    // 音名
    class Pitch {
    public:
        enum PITCH {
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
        static std::string ToString(int pitch);
        static int FromString(const std::string &str);
    };

    // 唱名
    class RollCall {
    public:
        enum ROLLCALL {
            ZERO = -2, STOP = -1, DO = 0, DOs = 1, RE = 2, REs = 3, MI = 4, FA = 5, FAs = 6, SOL = 7, SOLs = 8, LA = 9, LAs = 10, XI = 11
        };
        static std::string ToString(int rollcall);
        static int FromString(const std::string &str);
    };

    // 音符
    class MusicalNote {
    public:
        enum MUSICALNOTE {
            WHOLE_NOTE = 4000,                              // 全音符
            HALF_NOTE = WHOLE_NOTE * 1 / 2,                 // 二分音符
            QUARTER_NOTE = WHOLE_NOTE * 1 / 4,              // 四分音符
            EIGHTH_NOTE = WHOLE_NOTE * 1 / 8,               // 八分音符
            SIXTEENTH_NOTE = WHOLE_NOTE * 1 / 16,           // 十六分音符
            THIRTY_SECOND_NOTE = WHOLE_NOTE * 1 / 32,       // 三十二分音符
            POINT_WHOLE_NOTE = WHOLE_NOTE * 3 / 2,          // 付点全音符
            POINT_HALF_NOTE = HALF_NOTE * 3 / 2,            // 付点二分音符
            POINT_QUARTER_NOTE = QUARTER_NOTE * 3 / 2,      // 付点四分音符
            POINT_EIGHTH_NOTE = EIGHTH_NOTE * 3 / 2,        // 付点八分音符
            POINT_SIXTEENTH_NOTE = SIXTEENTH_NOTE * 3 / 2,  // 付点十六分音符
            COMBO_NOTE_START = -1,
            COMBO_NOTE_STOP = -2,
        };
        static std::string ToString(int note);
        static int FromString(const std::string &str);
    };

    class NoteType {
    public:
        enum TYPE {
            LIAISON,        // 连音
            UN_LIAISON,     // 不连音
        };
        static std::string ToString(int note);
        static int FromString(const std::string &str);
    };

    // 主key
    class Key {
    public:
        enum KEY {
            C = 0, Cs, D, Ds, E, F, Fs, G, Gs, A, As, B
        };
        static std::string ToString(int key);
        static int FromString(const std::string &str);
    };
};

class ScaleCalculation {
public:
    explicit ScaleCalculation(Music::Key::KEY tone);

    Music::Pitch::PITCH FromRollCall(Music::RollCall::ROLLCALL rollCall, int Octave = 0/*key*/);
    Music::Pitch::PITCH FromRollCall(const Music::Note &note);
    std::string Error();
    void UpateKey(int key);
    void DownKey(int key);
    void SetMainKey(Music::Key::KEY tone);

    void TransToNoteLists(const std::list<Music::Note> &source, Music::NoteLists &dest);

private:
    Music::Key::KEY m_mainKey;
    int m_octaveKey = 12;

    std::string m_err;
};


#endif //MUSICPLAYER_MUSIC_H
