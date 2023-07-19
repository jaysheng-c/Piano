/**
  ********************************************************************************
  * @file           : xml_reader.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */

#include "interface/xml_reader.h"


int XmlReader::Error()
{
    xmlGetLastError();
    xmlResetLastError();
    return 0;
}

XmlReader::XmlReader() : m_xmlDoc(nullptr)
{

}

XmlReader::~XmlReader()
{
    (void)CloseXml();
}

int XmlReader::OpenXmlDoc(const std::string &file, const std::string& encoding, int option)
{
    (void)CloseXml();
    m_xmlDoc = xmlReadFile(file.c_str(), encoding.c_str(), option);
    if (m_xmlDoc == nullptr) {
        // TODO:
        Error();
        return -1;
    }
    return 0;
}

int XmlReader::CloseXml()
{
    if (m_xmlDoc == nullptr) {
        return 0;
    }
    xmlFreeDoc(m_xmlDoc);
    xmlCleanupParser();
    xmlMemoryDump();
    m_xmlDoc = nullptr;
    return 0;
}

xmlNodePtr XmlReader::GetXmlRoot()
{
    if (m_xmlDoc == nullptr) {
        // TODO: 不存在doc指针
        return nullptr;
    }
    return xmlDocGetRootElement(m_xmlDoc);
}

std::string XmlReader::GetNodeProp(const xmlNodePtr node, const std::string &name)
{
    xmlChar* xmlValue = xmlGetProp(node, BAD_CAST(name.c_str()));
    if (xmlValue == nullptr) {
        return "";
    }
    return std::string((char*)(xmlValue));

}

std::string XmlReader::GetNodeContent(const xmlNodePtr node)
{
    xmlChar *xmlContent = xmlNodeGetContent(node);
    if (xmlContent == nullptr) {
        return "";
    }
    return std::string((char*)(xmlContent));
}

