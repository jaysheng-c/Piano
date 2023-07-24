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
    CloseXml();
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

void XmlReader::CloseXml()
{
    if (m_xmlDoc != nullptr) {
        xmlFreeDoc(m_xmlDoc);
        xmlCleanupParser();
        xmlMemoryDump();
        m_xmlDoc = nullptr;
    }
}

xmlNodePtr XmlReader::GetXmlRoot()
{
    if (m_xmlDoc == nullptr) {
        // TODO: 不存在doc指针
        return nullptr;
    }
    return xmlDocGetRootElement(m_xmlDoc);
}

std::string XmlReader::GetNodeProp(xmlNodePtr node, const std::string &name)
{
    xmlChar* xmlValue = xmlGetProp(node, BAD_CAST(name.c_str()));
    if (xmlValue == nullptr) {
        return "";
    }
    return reinterpret_cast<char*>(xmlValue);

}

std::string XmlReader::GetNodeContent(xmlNodePtr node)
{
    xmlChar *xmlContent = xmlNodeGetContent(node);
    if (xmlContent == nullptr) {
        return "";
    }
    return reinterpret_cast<char*>(xmlContent);
}

xmlNodePtr XmlReader::FindNode(const std::string &xpath)
{
    auto result = GetXmlXPathObjectPtr(xpath);
    if (result == nullptr) {
        return nullptr;
    }
    if (xmlXPathNodeSetIsEmpty(result->nodesetval)) {
        xmlXPathFreeObject(result);
        printf("nodeset is empty\n");
        return nullptr;
    }
    auto nodeSet = result->nodesetval;
    auto node = nodeSet->nodeTab[0];
    xmlXPathFreeObject(result);
    return node;
}

xmlXPathObjectPtr XmlReader::GetXmlXPathObjectPtr(const std::string &xpath)
{
    if (m_xmlDoc == nullptr) {
        return nullptr;
    }
    xmlXPathContextPtr context;
    xmlXPathObjectPtr result;
    context = xmlXPathNewContext(m_xmlDoc);
    if (context == nullptr) {
        Error();
        return nullptr;
    }
    result = xmlXPathEvalExpression(reinterpret_cast<const xmlChar*>(xpath.c_str()), context);
    xmlXPathFreeContext(context);
    return result;
}
