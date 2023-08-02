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
#include <utility>

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
        std::cout << __FILE__ << ":" << __LINE__ << " " << "class [" << name << "] is exits!" << std::endl;
    }
}

ReflectorObject *Reflector::GetNewInstance(const std::string &name)
{
    auto it = m_objectFactories.find(name);
    if (it != m_objectFactories.end()) {
        auto obj = it->second;
        return obj->newInstance();
    }
    std::cout << __FILE__ << ":" << __LINE__ << " " << "class [" << name << "] is not exits!" << std::endl;
    return nullptr;
}

Reflector &Reflector::GetInstance()
{
    static Reflector reflector;
    return reflector;
}

ReflectField::ReflectField(unsigned long long int offset, std::string key) : m_offset(offset), m_key(std::move(key))
{

}

ReflectField::ReflectField(const ReflectField &field)
{
    m_offset = field.m_offset;
    m_key = field.m_key;
}

std::string ReflectField::Key() const
{
    return m_key;
}

std::map<std::string, ReflectField> ReflectFieldClass::GetFields() const
{
    return m_fields;
}

ReflectField ReflectFieldClass::GetField(const std::string &key)
{
    auto it = m_fields.find(key);
    if (it == m_fields.cend()) {
        std::cout << __FILE__ << ":" << __LINE__ << " " << key << " is not exit.\n";
    }
    return it->second;
}

void ReflectFieldClass::AddField(const ReflectField &field)
{
    m_fields.insert(std::pair<std::string, ReflectField>(field.Key(), field));
}

FieldRegister::FieldRegister(ReflectFieldClass *ptr, unsigned long long int offset, const std::string &key)
{
    ReflectField field(offset, key);
    ptr->AddField(field);
}
