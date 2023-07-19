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

#include "serialize.h"

// 乐谱
class MusicScore : SerializeWork {
public:
    class Note {
    public:
        explicit Note(int rollcall, int octive, int musicalNote, int type) :
                m_rollcall(rollcall), m_octive(octive), m_musicalNote(musicalNote), m_type(type) {}

        int m_rollcall;     // 唱名
        int m_octive;       // 八度
        int m_musicalNote;  // 音符
        int m_type;         // 类型（如：连音）
        void Print() {
            printf("rollcall=%d, octive=%d, musicalNote=%d, type=%d\n", m_rollcall, m_octive, m_musicalNote, m_type);
        }
    };

    explicit MusicScore(const std::string &file);
    virtual ~MusicScore() = default;

    void Serialize() override;
    void Deserialize() override;

private:
    std::string m_file;
    std::string m_name;             // 乐谱名
    std::string m_key;              // 主key
    int m_beat;                     // 节拍
    float m_rate;                   // 速率

    std::list<Note> m_leftNotes;    // 左手谱
    std::list<Note> m_rightNotes;   // 右手谱
};


#endif //PIANO_MUSIC_SCORE_H
