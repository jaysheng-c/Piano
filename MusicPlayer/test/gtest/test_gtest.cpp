//
// Created by Yoshino on 2021/12/5.
//

#include <fstream>

#include "gtest/gtest.h"
#include "../bin/RomanticPhone.h"
#include "interface/xml_writer.h"
#include "interface/xml_reader.h"

TEST(GTest, hello)
{
    printf("This is a gtest test.\n");
}

TEST(GTest, ToXml)
{
    printf("ToXml");
    std::string fileName = "RomanticPhone.xml";
    std::ofstream ofstream(fileName, std::ios::out);
    ofstream << R"(<?xml version="1.0" encoding="utf-8" ?>)";
    ofstream << "<music>";
    ofstream << "<name>" << "浪漫手机" << "</name>";
    ofstream << "<key>" << Music::Key::ToString(static_cast<int>(g_phoneKey)) << "</key>";
    ofstream << "<rate>" << 96 << "</rate>";
    ofstream << "<beats>";
    for (auto& note : g_phoneHeader) {
        ofstream << note.Serialize();
    }
    ofstream << "<note/>";
    for (auto& note : g_phoneBodyHeader) {
        ofstream << note.Serialize();
    }
    ofstream << "<note/>";
    ofstream << "<repeat>";
    for (auto& note : g_phoneBody) {
        ofstream << note.Serialize();
    }
    ofstream << "</repeat>";
    for (auto& note : g_phoneTail) {
        ofstream << note.Serialize();
    }
    ofstream << "</beats>";
    ofstream << "</music>";
}

TEST(GTest, XmlWriter)
{
    printf("XmlWriter.\n");
    std::string fileName = "XmlWriter.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano";
    XmlWriter xmlWriter;
    auto ret = xmlWriter.CreateXmlDoc();
    ASSERT_TRUE(ret == 0) << ret;
    xmlWriter.SetFileDictory(dir);
    auto root = xmlWriter.CreateRoot("music");
    ASSERT_TRUE(root != nullptr);
    auto node = xmlWriter.CreateNode("key");
    ASSERT_TRUE(node != nullptr);
    xmlWriter.AppandChild(root, node);
    xmlWriter.SetNodeText(node, "As");
    node = xmlWriter.CreateNode("note");
    ASSERT_TRUE(node != nullptr);
    std::list<XmlWriter::Property> props{
        XmlWriter::Property("rollcall", "DO")
    };
    xmlWriter.SetNodePop(node, props);
    xmlWriter.AppandChild(root, node);

    ret = xmlWriter.SaveXmlDoc(fileName);
    ASSERT_TRUE(ret == 0) << ret;
}

TEST(GTest, XmlReader)
{
    printf("XmlReader.\n");
    std::string fileName = "XmlWriter.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    XmlReader xmlReader;
    auto ret = xmlReader.OpenXmlDoc(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    auto root = xmlReader.GetXmlRoot();
    ASSERT_TRUE(root != nullptr);
    auto node = root->children;
    ASSERT_TRUE(node != nullptr);
    std::string content = xmlReader.GetNodeContent(node);
    std::cout << node->name << " " << content << std::endl;
    node = node->next;
    std::string value = xmlReader.GetNodeProp(node, "rollcall");
    std::cout << node->name << " rollcall=" << value << std::endl;
    xmlReader.CloseXml();
}