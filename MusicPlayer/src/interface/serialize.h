/**
  ********************************************************************************
  * @file           : serialize.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */
//

#ifndef PIANO_SERIALIZE_H
#define PIANO_SERIALIZE_H

#include <string>

class SerializeWork {
public:
    explicit SerializeWork() = default;
    virtual ~SerializeWork() = default;

    virtual std::string Serialize() = 0;
};

class Serialize {
public:
    explicit Serialize(SerializeWork *work);
    virtual ~Serialize() = default;

    std::string StartSerialize();

private:
    SerializeWork *m_serialize;
};

#endif //PIANO_SERIALIZE_H
