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


#include "libxml/xmlreader.h"
#include "libxml/xpath.h"

#include "reader.h"

class XmlReader : public Reader<xmlNode> {
public:
    explicit XmlReader();
    ~XmlReader() override;

    int Open(const std::string& file) override { return OpenXmlDoc(file); }
    void Close() override { CloseXml(); }
    xmlNode* Root() const override { return GetXmlRoot(); }
    std::string Content(xmlNode* node) const override { return GetNodeContent(node); }
    std::string Prop(xmlNode* node, const std::string& name) const override { return GetNodeProp(node, name); }

    xmlNodePtr FindNode(const std::string& xpath);

protected:
    int OpenXmlDoc(const std::string& file, const std::string& encoding = "utf-8", int option = XML_PARSE_NOBLANKS);
    void CloseXml();
    xmlNodePtr GetXmlRoot() const;
    static std::string GetNodeProp(xmlNodePtr node, const std::string& name);
    static std::string GetNodeContent(xmlNodePtr node);
    xmlXPathObjectPtr GetXmlXPathObjectPtr(const std::string &xpath);
    static int Error();
private:
    xmlDocPtr m_xmlDoc;

};

#endif //PIANO_XML_READER_H
