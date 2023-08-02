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
#include <vector>

#include "reflector/reflector.h"
#include "xml_reader.h"

class Note : public ReflectorObject {
FIELD_CLASS_REGISTER(Note)
    PRIVATE_FILED_RIGISTER(std::string, channel, Note)
    PRIVATE_FILED_RIGISTER(int, rollcall, Note)         // 唱名
    PRIVATE_FILED_RIGISTER(int, octive, Note)           // 八度
    PRIVATE_FILED_RIGISTER(int, musicalNote, Note)      // 音符
    PRIVATE_FILED_RIGISTER(int, type, Note)             // 类型（如：连音）

public:
    void *Serialize() override;
    void Deserialize(void* source) override;
};

class Combo : public ReflectorObject {
FIELD_CLASS_REGISTER(Combo)
    PRIVATE_FILED_RIGISTER(std::vector<Note*>, notes, Combo)

public:
    ~Combo() override;
    void *Serialize() override;
    void Deserialize(void* source) override;
};

class Clap : public ReflectorObject {
FIELD_CLASS_REGISTER(Clap)
    PRIVATE_FILED_RIGISTER(std::vector<Combo*>, combos, Clap)

public:
    ~Clap() override;
    void *Serialize() override;
    void Deserialize(void* source) override;
};

class Sub : public ReflectorObject {
FIELD_CLASS_REGISTER(Sub)
    PRIVATE_FILED_RIGISTER(int, number, Sub)
    PRIVATE_FILED_RIGISTER(bool, repeat, Sub)
    PRIVATE_FILED_RIGISTER(std::vector<Clap*>, claps, Sub)

public:
    ~Sub() override;
    void *Serialize() override;
    void Deserialize(void* source) override;
};

// 乐谱
class MusicScore : public ReflectorObject {
FIELD_CLASS_REGISTER(MusicScore)
    PRIVATE_FILED_RIGISTER(std::string, name, MusicScore)   // 乐谱名
    PRIVATE_FILED_RIGISTER(std::string, key, MusicScore)    // 主key
    PRIVATE_FILED_RIGISTER(int, beat, MusicScore)           // 节拍
    PRIVATE_FILED_RIGISTER(float, rate, MusicScore)         // 速率
    PRIVATE_FILED_RIGISTER(std::vector<Sub*>, subs, MusicScore)

public:
    ~MusicScore() override;
    void *Serialize() override;
    void Deserialize(void* source) override;

};

class MusicScoreManager : public XmlReader {
public:
    ~MusicScoreManager() override;
    int Paser();
    int Serialize(const std::string &file, const MusicScore* musicScore);

protected:
    int PaserMusicScore();

private:
    MusicScore *m_musicScore;
    int m_errCode;
};


#endif //PIANO_MUSIC_SCORE_H
