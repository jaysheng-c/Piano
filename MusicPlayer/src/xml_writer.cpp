/**
  ********************************************************************************
  * @file           : xml_writer.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */
#include "interface/xml_writer.h"

int XmlWriter::Error()
{
    xmlGetLastError();
    xmlResetLastError();
    return 0;
}

XmlWriter::XmlWriter() : m_xmlDoc(nullptr)
{
}

int XmlWriter::CreateXmlDoc(const std::string &version)
{
    if (m_xmlDoc != nullptr) {
        // TODO: 存在未保存的xml文件
        return -1;
    }
    m_xmlDoc = xmlNewDoc(reinterpret_cast<const xmlChar*>(version.c_str()));
    if (m_xmlDoc == nullptr) {
        // TODO: 创建失败
        return Error();
    }
    return 0;
}

int XmlWriter::SaveXmlDoc(const std::string &fileName, const std::string &encoding)
{
    std::string name = fileName;
    if (m_xmlDoc == nullptr) {
        // TODO: 不存在doc指针
        return -1;
    }
    if (name.empty()) {
        name = "default.xml";
    }
    std::string file = m_fileDir + "/" + name;
    int errorCode = xmlSaveFormatFileEnc(file.c_str(), m_xmlDoc, encoding.c_str(), 1);
    if (errorCode != 0) {
        // TODO:
        return Error();
    }
    xmlFreeDoc(m_xmlDoc);
    m_xmlDoc = nullptr;
    xmlMemoryDump();
    return errorCode;
}

int XmlWriter::SetFileDictory(const std::string &dir)
{
    if (m_fileDir != dir && !dir.empty()) {
        m_fileDir = dir;
    }
    return 0;
}

xmlNodePtr XmlWriter::CreateRoot(const std::string &name)
{
    if (m_xmlDoc == nullptr) {
        // TODO: 不存在doc指针
        return nullptr;
    }
    auto node = CreateNode(name);
    if (node == nullptr) {
        // TODO:
        Error();
        return nullptr;
    }
    (void)xmlDocSetRootElement(m_xmlDoc, node);
    return node;
}

xmlNodePtr XmlWriter::CreateNode(const std::string &name)
{
    return xmlNewNode(nullptr, reinterpret_cast<const xmlChar*>(name.c_str()));
}

void XmlWriter::AppandChild(xmlNodePtr parent, xmlNodePtr cur)
{
    (void)xmlAddChild(parent, cur);
}

int XmlWriter::SetNodePop(xmlNodePtr node, const std::list<Property>& props)
{
    int ret = 0;
    for (auto &prop : props) {
        ret |= SetNodePop(node, prop.m_name, prop.m_value);
    }
    return ret;
}

int XmlWriter::SetNodePop(xmlNodePtr node, const std::string &name, const std::string &value)
{
    if (node == nullptr) {
        return -1;
    }
    (void)xmlSetProp(node, reinterpret_cast<const xmlChar*>(name.c_str()),
                     reinterpret_cast<const xmlChar*>(value.c_str()));
    return 0;
}

int XmlWriter::SetNodeText(xmlNodePtr node, const std::string &text)
{
    if (node == nullptr) {
        return -1;
    }
    if (text.empty()) {
        return -2;
    }
    auto textNode = xmlNewText(reinterpret_cast<const xmlChar*>(text.c_str()));
    if (textNode == nullptr) {
        Error();
        return -3;
    }
    AppandChild(node, textNode);
    return 0;
}

