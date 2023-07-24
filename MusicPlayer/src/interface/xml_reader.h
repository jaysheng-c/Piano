/**
  ********************************************************************************
  * @file           : xml_reader.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */
//

#ifndef PIANO_XML_READER_H
#define PIANO_XML_READER_H

#include <string>

#include "libxml/xmlreader.h"
#include "libxml/xpath.h"

class XmlReader {
public:
    explicit XmlReader();
    virtual ~XmlReader();

    int OpenXmlDoc(const std::string& file, const std::string& encoding = "utf-8", int option = XML_PARSE_NOBLANKS);
    void CloseXml();
    xmlNodePtr GetXmlRoot();
    static std::string GetNodeProp(xmlNodePtr node, const std::string& name);
    static std::string GetNodeContent(xmlNodePtr node);
    xmlNodePtr FindNode(const std::string& xpath);
    xmlXPathObjectPtr GetXmlXPathObjectPtr(const std::string &xpath);
protected:
    static int Error();
private:
    xmlDocPtr m_xmlDoc;

};

#endif //PIANO_XML_READER_H
