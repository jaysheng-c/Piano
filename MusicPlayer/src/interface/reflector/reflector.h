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

#ifndef REFLECTOR_H
#define REFLECTOR_H

#include "reflector_base.h"

// 获取已注册反射类实列对象
template<class T>
T *GetNewInstance(const std::string &name)
{
    return dynamic_cast<T *>(Reflector::GetInstance().GetNewInstance(name));
}

// 注册反射类宏
#define REFLECT(name) \
class ObjectFactory_##name : public ObjectFactory { \
public:                                             \
    ObjectFactory_##name() {}                       \
    virtual ~ObjectFactory_##name() = default;      \
    ReflectorObject *newInstance() override {       \
        return new name();                          \
    }                                               \
};                                                  \
class Register_##name {                             \
public:                                                                             \
    Register_##name() {                                                             \
        Reflector::GetInstance().Register(#name, new ObjectFactory_##name());       \
    }                                                                               \
};                                                                                  \
Register_##name register_##name;


#define OFFSET(obj, key) ((unsigned long long)(&((obj*)0)->key))

#define FIELD_CLASS_REGISTER(obj)                   \
public:                                             \
    static ReflectFieldClass* GetClassPtr()         \
    {                                               \
        static ReflectFieldClass _class_##obj;      \
        return &_class_##obj;                       \
    }

#define FILED_REGISTER(access, fieldType, fieldKey, obj) \
access:                                                  \
    fieldType m_##fieldKey;                              \
private:                                                 \
    class FieldRegister##fieldKey {                      \
    public:                                              \
        FieldRegister##fieldKey() {                      \
            static FieldRegister reg##fieldKey(          \
            obj::GetClassPtr(),                          \
            OFFSET(obj, m_##fieldKey),                   \
            #fieldKey);                                  \
            }                                            \
        }fieldKey##Register;

#define PRIVATE_FILED_RIGISTER(fieldType, fieldKey, obj) FILED_REGISTER(private, fieldType, fieldKey, obj)
#define PUBLIC_FILED_RIGISTER(fieldType, fieldKey, obj) FILED_REGISTER(public, fieldType, fieldKey, obj)
#define PROTECTED_FILED_RIGISTER(fieldType, fieldKey, obj) FILED_REGISTER(protected, fieldType, fieldKey, obj)

#endif // REFLECTOR_H
