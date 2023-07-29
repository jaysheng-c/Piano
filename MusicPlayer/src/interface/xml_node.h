/**
  ********************************************************************************
  * @file           : xml_node.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/28
  ********************************************************************************
  */

#ifndef PIANO_XML_NODE_H
#define PIANO_XML_NODE_H

#include <unordered_map>
#include <vector>

#include "reflector/reflector.h"

class XmlNode : public ReflectorObject {
public:
    ~XmlNode() override;

    inline std::string Name() const;
    inline std::string Content() const;
    inline XmlNode *Child(int index) const;
    inline XmlNode *Child(const std::string& name) const;
    template<class Type>
    Type Prop(const std::string& key, const Type &defualt) const;

    inline void SetName(const std::string& value);
    inline void SetContent(const std::string& value);
    inline bool SetProp(const std::string& key, const std::string& value);
    inline bool SetChild(XmlNode* child);

protected:
    inline std::string Prop(const std::string& key, const std::string& defualt = "") const;
    inline bool JudgeIn(const std::string& value) const;

    std::string m_name;
    std::string m_content;
    std::unordered_map<std::string,std::string> m_props;
    std::vector<XmlNode*> m_children;
};

#endif //PIANO_XML_NODE_H
