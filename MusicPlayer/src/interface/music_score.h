/**
  ********************************************************************************
  * @file           : music_score.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/20
  ********************************************************************************
  */
//

#ifndef PIANO_MUSIC_SCORE_H
#define PIANO_MUSIC_SCORE_H

#include <string>
#include <list>
#include <vector>

#include "serialize.h"
#include "reflector/reflector.h"

class Note : public ReflectorObject {
public:
    inline int RollCall() const { return m_rollcall; }
    inline int Octive() const { return m_octive; }
    inline int MusicalNote() const { return m_musicalNote; }
    inline int Type() const { return m_type; }

    inline void SetRollCall(int val) { m_rollcall = val; }
    inline void SetOctive(int val) { m_octive = val; }
    inline void SetMusicalNote(int val) { m_musicalNote = val; }
    inline void SetType(int val) { m_type = val; }
private:
    int m_rollcall;     // 唱名
    int m_octive;       // 八度
    int m_musicalNote;  // 音符
    int m_type;         // 类型（如：连音）
};

class Clap : public ReflectorObject {
public:
    inline size_t LeftNoteSize() const { return m_leftNotes.size(); }
    inline size_t RightNoteSize() const { return m_rightNotes.size(); }
    inline Note *LeftNote(int index) const {
        if (index > LeftNoteSize()) {
            return nullptr;
        }
        return m_leftNotes[index];
    }
    inline Note *RightNote(int index) const {
        if (index > RightNoteSize()) {
            return nullptr;
        }
        return m_rightNotes[index];
    }

    inline void SetLeftNote(Note *note) { m_leftNotes.emplace_back(note); }
    inline void SetRightNote(Note *note) { m_rightNotes.emplace_back(note); }
private:
    std::vector<Note*> m_leftNotes;    // 左手音符
    std::vector<Note*> m_rightNotes;   // 右手音符
};

class Sub : public ReflectorObject {
public:
    inline int Number() const { return m_number; }
    inline bool Repeat() const { return m_repeat; }

    inline void SetNumber(int val) { m_number = val; }
    inline void SetRepeat(bool val) { m_repeat = val; }

    inline size_t ClapSize() const { return m_claps.size(); }
    inline Clap *GetClap(int index) const {
        if (index > ClapSize()) {
            return nullptr;
        }
        return m_claps[index];
    }
    inline void SetClap(Clap *clap) { m_claps.emplace_back(clap); }
private:
    int m_number;
    bool m_repeat;
    std::vector<Clap*> m_claps;
};

// 乐谱
//class MusicScore : public SerializeWork {
class MusicScore : public ReflectorObject {
public:
    inline std::string Name() const { return m_name; }
    inline std::string Key() const { return m_key; }
    inline int Beat() const { return m_beat; }
    inline float Rate() const { return m_rate; }

    inline void SetName(const std::string &val) { m_name = val; }
    inline void SetKey(const std::string &val) { m_key = val; }
    inline void SetBeat(int val) { m_beat = val; }
    inline void SetRate(float val) { m_rate = val; }

    inline size_t SubSize() const { return m_subs.size(); }
    inline Sub *GetSub(int index) const {
        if (index > SubSize()) {
            return nullptr;
        }
        return m_subs[index];
    }
    inline void SetClap(Sub *clap) { m_subs.emplace_back(clap); }
private:
    std::string m_name;             // 乐谱名
    std::string m_key;              // 主key
    int m_beat;                     // 节拍
    float m_rate;                   // 速率

    std::vector<Sub*> m_subs;
};


#endif //PIANO_MUSIC_SCORE_H
