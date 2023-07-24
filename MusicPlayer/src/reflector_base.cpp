/**
  ********************************************************************************
  * @file           : reflector.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/23
  ********************************************************************************
  */
//

#include "interface/reflector/reflector_base.h"

#include <iostream>

Reflector::~Reflector()
{
    for (auto& m_objectFactorie : m_objectFactories) {
        delete m_objectFactorie.second;
    }
    m_objectFactories.clear();
}

void Reflector::Register(const std::string &name, ObjectFactory *obj)
{
    auto it = m_objectFactories.find(name);
    if (it == m_objectFactories.end()) {
        m_objectFactories[name] = obj;
    } else {
        std::cout << "class [" << name << "] is exits!" << std::endl;
    }
}

ReflectorObject *Reflector::GetNewInstance(const std::string &name)
{
    auto it = m_objectFactories.find(name);
    if (it != m_objectFactories.end()) {
        auto obj = it->second;
        return obj->newInstance();
    }
    std::cout << "class [" << name << "] is not exits!" << std::endl;
    return nullptr;
}

Reflector &Reflector::GetInstance()
{
    static Reflector reflector;
    return reflector;
}
