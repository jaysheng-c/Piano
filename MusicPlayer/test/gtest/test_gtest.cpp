//
// Created by Yoshino on 2021/12/5.
//

#include <fstream>

#include "gtest/gtest.h"
#include "interface/xml_writer.h"
#include "interface/xml_reader.h"
#include "interface/music_score.h"

TEST(GTest, hello)
{
    printf("This is a gtest test.\n");
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
    std::string content = XmlReader::GetNodeContent(node);
    std::cout << node->name << " " << content << std::endl;
    node = node->next;
    std::string value = XmlReader::GetNodeProp(node, "rollcall");
    std::cout << node->name << " rollcall=" << value << std::endl;
    xmlReader.CloseXml();
}

TEST(GTest, XmlReaderXpath)
{
    printf("XmlReader.\n");
    std::string fileName = "RomanticPhone2.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    XmlReader xmlReader;
    auto ret = xmlReader.OpenXmlDoc(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    auto node = xmlReader.FindNode("//name");
    std::cout << XmlReader::GetNodeContent(node) << std::endl;
}

TEST(GTest, MusicScore)
{
    printf("MusicScore.\n");
    std::string fileName = "RomanticPhone2.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    MusicScoreManager manager;

    auto ret = manager.OpenXmlDoc(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    ret = manager.Paser();
    ASSERT_TRUE(ret == 0) << ret;
}
