/**
  ********************************************************************************
  * @file           : music_score.cpp
  * @author         : Yoshino
  * @brief          : None
  * @attention      : None
  * @date           : 2023/7/20
  ********************************************************************************
  */
//

#include "interface/music_score.h"

REFLECT(Note)
REFLECT(Clap)
REFLECT(Sub)
REFLECT(MusicScore)


//MusicScore::MusicScore(const std::string &file) : SerializeWork(file)
//{
//}
//
//void MusicScore::Serialize()
//{
//    XmlWriter xmlWriter;
//    xmlWriter.CreateXmlDoc();
//    xmlWriter.SaveXmlDoc(m_file);
//}
//
//void MusicScore::Deserialize()
//{
//    XmlReader xmlReader;
//    xmlReader.OpenXmlDoc(m_file);
//
//    m_name = xmlReader.GetNodeContent(xmlReader.FindNode("//name"));
//    m_key = xmlReader.GetNodeContent(xmlReader.FindNode("//key"));
//    m_beat = std::stoi(xmlReader.GetNodeContent(xmlReader.FindNode("//beat")));
//    m_rate = std::stof(xmlReader.GetNodeContent(xmlReader.FindNode("//rate")));
//
//    printf("m_name=%s, m_key=%s, m_beat=%d, m_rate=%f \n", m_name.c_str(), m_key.c_str(), m_beat, m_rate);
//
////    auto result = xmlReader.GetNodeSet("//left");
////    if (result != nullptr) {
////        auto nodeSet = result->nodesetval;
////        for (int index = 0; index < nodeSet->nodeNr; ++index) {
////            m_leftNotes.emplace_back(Music::RollCall::FromString(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "rollcall")),
////                                       std::stoi(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "octive")),
////                                       Music::MusicalNote::FromString(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "note")),
////                                       1);
////        }
////    }
////    xmlXPathFreeObject(result);
////
////    result = xmlReader.GetNodeSet("//right");
////    if (result != nullptr) {
////        auto nodeSet = result->nodesetval;
////        for (int index = 0; index < nodeSet->nodeNr; ++index) {
////            m_rightNotes.emplace_back(Music::RollCall::FromString(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "rollcall")),
////                                     std::stoi(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "octive")),
////                                     Music::MusicalNote::FromString(xmlReader.GetNodeProp(nodeSet->nodeTab[index], "note")),
////                                     1);
////        }
////    }
////    xmlXPathFreeObject(result);
////
////    for (auto note : m_leftNotes) {
////        note.Print();
////    }
////    printf("\n");
////    for (auto note : m_rightNotes) {
////        note.Print();
////    }
//
//    (void)xmlReader.CloseXml();
//}