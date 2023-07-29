//
// Created by Yoshino on 2021/12/5.
//

#include <fstream>
#include <string>
#include <unordered_map>

#include "gtest/gtest.h"
#include "interface/xml_writer.h"
#include "interface/xml_reader.h"
#include "interface/music_score.h"


#define GET_SET(type, name) \
public:                                                     \
    inline type name() { return m_##name; }                 \
    inline void set_##name(type val) { m_##name = val; }    \
private:                                                    \
    type m_##name;



TEST(GTest, hello)
{
    printf("This is a gtest test.\n");
    class Test {
        GET_SET(int, number)
    };
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
    auto node = XmlWriter::CreateNode("key");
    ASSERT_TRUE(node != nullptr);
    XmlWriter::AppandChild(root, node);
    XmlWriter::SetNodeText(node, "As");
    node = XmlWriter::CreateNode("note");
    ASSERT_TRUE(node != nullptr);
    std::list<XmlWriter::Property> props{
        XmlWriter::Property("rollcall", "DO")
    };
    XmlWriter::SetNodePop(node, props);
    XmlWriter::AppandChild(root, node);

    ret = xmlWriter.SaveXmlDoc(fileName);
    ASSERT_TRUE(ret == 0) << ret;
}

TEST(GTest, XmlReader)
{
    printf("XmlReader.\n");
    std::string fileName = "XmlWriter.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    XmlReader xmlReader;
    auto ret = xmlReader.Open(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    auto root = xmlReader.Root();
    ASSERT_TRUE(root != nullptr);
    auto node = root->children;
    ASSERT_TRUE(node != nullptr);
    std::string content = xmlReader.Content(node);
    std::cout << node->name << " " << content << std::endl;
    node = node->next;
    std::string value = xmlReader.Prop(node, "rollcall");
    std::cout << node->name << " rollcall=" << value << std::endl;
    xmlReader.Close();
}

TEST(GTest, XmlReaderXpath)
{
    printf("XmlReader.\n");
    std::string fileName = "RomanticPhone2.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    XmlReader xmlReader;
    auto ret = xmlReader.Open(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    auto node = xmlReader.FindNode("//name");
    std::cout << xmlReader.Content(node) << std::endl;
}

TEST(GTest, MusicScore)
{
    printf("MusicScore.\n");
    std::string fileName = "RomanticPhone2.xml";
    std::string dir = "E:/IDE/_ProgramFile/QtProject/Piano/";
    MusicScoreManager manager;

    auto ret = manager.Open(dir + fileName);
    ASSERT_TRUE(ret == 0) << ret;
    ret = manager.Paser();
    ASSERT_TRUE(ret == 0) << ret;
}

template <typename T, typename... Types>
void Print(const T& fisrtArg, const Types&... args) {
    std::cout << fisrtArg << std::endl;
    printf(args...);
}

class TestClass {
    FIELD_CLASS_REGISTER(TestClass)
        PUBLIC_FILED_RIGISTER(int, number, TestClass)
        PUBLIC_FILED_RIGISTER(std::string, name, TestClass)
        PUBLIC_FILED_RIGISTER(std::string, content, TestClass)
        PUBLIC_FILED_RIGISTER(std::vector<TestClass*>, children, TestClass)

public:
    TestClass() = default;
    ~TestClass() {
        for (auto& child : m_children) {
            delete child;
        }
        m_children.clear();
    }
    void Print() const {
        std::cout << "name: " << m_name << ", content: " << m_content << std::endl;
        for (auto& child : m_children) {
            std::cout << "  ";
            child->Print();
        }
    }
};

TEST(GTest, ReflectorClassMember) {
    TestClass testClass;
    auto reflectFieldClass = TestClass::GetClassPtr();
    auto fields = reflectFieldClass->GetFields();
    for (const auto& field : fields) {
        std::cout << field.first << " " << field.second.m_offset << std::endl;
    }
    std::cout << sizeof(TestClass) << " " << &testClass.m_name << " " <<  &testClass.m_content << std::endl;

    auto number = reflectFieldClass->GetField("number");
    number.Set(&testClass, 1);
    auto name = reflectFieldClass->GetField("name");
    name.Set(&testClass, std::string("name"));
    auto content = reflectFieldClass->GetField("content");
    content.Set(&testClass, std::string("test_content"));

    auto children = reflectFieldClass->GetField("children");
    auto vec = children.Get<std::vector<TestClass*>>(&testClass);
    constexpr int conut = 5;
    for (int index = 0; index < conut; ++index) {
        auto child = new TestClass;
        auto str_name = "name_" + std::to_string(index);
        auto str_content = "test_content_" + std::to_string(index);
        TestClass::GetClassPtr()->GetField("name").Set(child, str_name);
        TestClass::GetClassPtr()->GetField("content").Set(child, str_content);
        vec.emplace_back(child);
    }
    children.Set(&testClass, vec);

    testClass.Print();

}