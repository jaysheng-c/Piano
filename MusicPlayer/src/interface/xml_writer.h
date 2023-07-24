/**
  ********************************************************************************
  * @file           : xml_writer.h
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/19
  ********************************************************************************
  */
//

#ifndef PIANO_XML_WRITER_H
#define PIANO_XML_WRITER_H

#include <string>
#include <utility>
#include <list>

#include "libxml/xmlwriter.h"

class XmlWriter {
public:
    class Property {
    public:
        std::string m_name;
        std::string m_value;
        Property(std::string name, std::string value) : m_name(std::move(name)), m_value(std::move(value)) {}
    };
    explicit XmlWriter();
    virtual ~XmlWriter() = default;

    int CreateXmlDoc(const std::string& version = "1.0");
    int SaveXmlDoc(const std::string& fileName, const std::string &encoding = "utf-8");
    int SetFileDictory(const std::string& dir);
    xmlNodePtr CreateRoot(const std::string& name);
    static xmlNodePtr CreateNode(const std::string& name);
    static void AppandChild(xmlNodePtr parent, xmlNodePtr cur);
    static int SetNodePop(xmlNodePtr node, const std::list<Property>& props);
    static int SetNodePop(xmlNodePtr node, const std::string& name, const std::string& value);
    static int SetNodeText(xmlNodePtr node, const std::string& text);

protected:
    static int Error();
    
private:
    xmlDocPtr m_xmlDoc;
    std::string m_fileDir;
};

#endif //PIANO_XML_WRITER_H
