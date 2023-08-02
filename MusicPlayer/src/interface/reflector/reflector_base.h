/**
  ********************************************************************************
  * @file           : reflector.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/23
  ********************************************************************************
  */
//

#ifndef REFLECTOR_BASE_H
#define REFLECTOR_BASE_H

#include <string>
#include <map>

// 反射抽象类，继承该类的后支持反射
class ReflectorObject {
public:
    virtual ~ReflectorObject() {}
    virtual void *Serialize() { return nullptr; }
    virtual void Deserialize(void *source) {}
};

// 创建反射类的工厂
class ObjectFactory {
public:
    ObjectFactory() = default;
    virtual ~ObjectFactory() {}

    virtual ReflectorObject *newInstance() = 0;
};

// 反射管理类
class Reflector {
public:
    Reflector() = default;

    ~Reflector();

    void Register(const std::string &name, ObjectFactory *obj);

    ReflectorObject *GetNewInstance(const std::string &name);

    static Reflector &GetInstance();

private:
    std::map<std::string, ObjectFactory *> m_objectFactories;
};


/***
 类成员反射
 */
class ReflectField {
public:
    ReflectField(unsigned long long offset, std::string key);
    ReflectField(const ReflectField& field);

    std::string Key() const;
    template<class ValueType, class ObjectType>
    ValueType Get(ObjectType *obj) {
        return *((ValueType*)((unsigned char*)obj + m_offset));
    }
    template<class ObjectType, class ValueType>
    void Set(ObjectType *obj, const ValueType &value) {
        *((ValueType*)((unsigned char*)obj + m_offset)) = value;
    }
public:
    unsigned long long m_offset;
    std::string m_key;
};

class ReflectFieldClass {
public:
    std::map<std::string, ReflectField> GetFields() const;
    ReflectField GetField(const std::string& key);
    void AddField(const ReflectField& field);

private:
    std::map<std::string, ReflectField> m_fields;
    std::string m_key;
};

class FieldRegister {
public:
    FieldRegister(ReflectFieldClass *ptr, unsigned long long offset, const std::string& key);
};

#endif // REFLECTOR_BASE_H
