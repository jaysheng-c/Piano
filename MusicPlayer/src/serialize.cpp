/**
  ********************************************************************************
  * @file           : serialize.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */

#include "interface/serialize.h"

Serialize::Serialize(SerializeWork *work) : m_serialize(work)
{

}

std::string Serialize::StartSerialize()
{
    return m_serialize->Serialize();
}
