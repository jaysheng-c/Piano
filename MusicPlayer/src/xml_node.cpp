/**
  ********************************************************************************
  * @file           : xml_node.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/28
  ********************************************************************************
  */
#include "interface/xml_node.h"

#include <algorithm>

XmlNode::~XmlNode()
{

}

std::string XmlNode::Name() const
{
    return m_name;
}

std::string XmlNode::Content() const
{
    return m_content;
}

XmlNode *XmlNode::Child(const int index) const
{
    if(m_children.empty() || index >= m_children.size()) {
        return nullptr;
    }
    return m_children.at(index);
}

XmlNode *XmlNode::Child(const std::string& name) const
{
    auto it = std::find_if(m_children.cbegin(), m_children.cend(), [&](const XmlNode* node){
        return name == node->Name();
    });
    return it == m_children.cend() ? nullptr : (*it);
}

template<class Type>
Type XmlNode::Prop(const std::string &key, const Type &defualt) const
{
    auto value = Prop(key);
    if (value.empty()) {
        return defualt;
    }
    return static_cast<Type>(value);
}

void XmlNode::SetName(const std::string &value) { m_name = value; }

void XmlNode::SetContent(const std::string &value) { m_content = value; }

bool XmlNode::SetProp(const std::string &key, const std::string &value)
{
    if (JudgeIn(value)) {
        return false;
    }
    m_props[key] = value;
    return true;
}

std::string XmlNode::Prop(const std::string &key, const std::string &defualt) const
{
    auto it = m_props.find(key);
    if (it == m_props.end()) {
        return defualt;
    }
    return it->second;
}

bool XmlNode::JudgeIn(const std::string &value) const
{
    return value.empty();
}

bool XmlNode::SetChild(XmlNode *child)
{
    if (child == nullptr) {
        return false;
    }
    m_children.emplace_back(child);
    return true;
}
