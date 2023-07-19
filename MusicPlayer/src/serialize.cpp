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

void Serialize::StartSerialize()
{
    m_serialize->Serialize();
}
