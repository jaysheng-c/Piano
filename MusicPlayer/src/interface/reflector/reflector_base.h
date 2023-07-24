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



#endif // REFLECTOR_BASE_H
