/**
  ********************************************************************************
  * @file           : reader.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/28
  ********************************************************************************
  */

#ifndef PIANO_READER_H
#define PIANO_READER_H

#include <string>

template<class Node>
class Reader {
public:
    virtual ~Reader() = default;

    virtual int Open(const std::string& file) = 0;
    virtual void Close() = 0;
    virtual Node* Root() const  = 0;
    virtual std::string Content(Node* node) const = 0;
    virtual std::string Prop(Node* node, const std::string& name) const = 0;

};

#endif //PIANO_READER_H
