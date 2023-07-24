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

#include <iostream>
#include "interface/music.h"

REFLECT(Note)
REFLECT(Combo)
REFLECT(Clap)
REFLECT(Sub)
REFLECT(MusicScore)

Combo::~Combo()
{
    for (auto& m_objectFactorie : m_notes) {
        delete m_objectFactorie;
    }
    m_notes.clear();
}

Clap::~Clap()
{
    for (auto& m_objectFactorie : m_combos) {
        delete m_objectFactorie;
    }
    m_combos.clear();
}

Sub::~Sub()
{
    for (auto& m_objectFactorie : m_claps) {
        delete m_objectFactorie;
    }
    m_claps.clear();
}

MusicScore::~MusicScore()
{
    for (auto& m_objectFactorie : m_subs) {
        delete m_objectFactorie;
    }
    m_subs.clear();
}

MusicScoreManager::~MusicScoreManager()
{
    delete m_musicScore;
}

int MusicScoreManager::Paser()
{
    return PaserMusicScore();
}

int MusicScoreManager::PaserMusicScore()
{
    m_errCode = 0;
    m_musicScore = GetNewInstance<MusicScore>("MusicScore");
    if (m_musicScore == nullptr) {
        std::cerr << "PaserMusicScore can not get class[MusicScore]" << std::endl;
        return -1;
    }

    m_musicScore->SetName(GetNodeContent(FindNode("//name")));
    m_musicScore->SetKey(GetNodeContent(FindNode("//key")));
    m_musicScore->SetBeat(std::stoi(GetNodeContent(FindNode("//beat"))));
    m_musicScore->SetRate(std::stof(GetNodeContent(FindNode("//rate"))));

    printf("<music>\n"
           "    <name>%s</name>\n"
           "    <key>%s</key>\n"
           "    <beat>%d</beat>\n"
           "    <rate>%f</rate>\n",
           m_musicScore->Name().c_str(), m_musicScore->Key().c_str(), m_musicScore->Beat(), m_musicScore->Rate());

    auto result = GetXmlXPathObjectPtr("//Sub");
    if (result == nullptr || xmlXPathNodeSetIsEmpty(result->nodesetval)) {
        std::cerr << "can not find xml element subNode \"Sub\"" << std::endl;
        return -1;
    }
    for (int index = 0; index < result->nodesetval->nodeNr; ++index) {
        auto subNode = result->nodesetval->nodeTab[index];
        auto sub = PaserSub(subNode);
        if (sub == nullptr) {
            m_errCode = -1;
            break;
        }
        m_musicScore->SetSub(sub);
    }
    printf("</music>");
    return m_errCode;
}


Sub *MusicScoreManager::PaserSub(xmlNodePtr subNode)
{
    auto sub = GetNewInstance<Sub>(std::string(reinterpret_cast<const char*>(subNode->name)));
    if (sub == nullptr) {
        std::cerr << "PaserSub can not get class[" << subNode->name << "]" << std::endl;
        m_errCode = -1;
        return nullptr;
    }
    sub->SetNumber(std::stoi(GetNodeProp(subNode, "number")));
    if (GetNodeProp(subNode, "repeat") == "true") {
        sub->SetRepeat(true);
    } else {
        sub->SetRepeat(false);
    }
    printf("    <%s number=%d>\n", subNode->name, sub->Number());
    auto clapNode = subNode->children;
    while (clapNode != nullptr) {
        auto clap = PaserClap(clapNode);
        if (clap == nullptr) {
            m_errCode = -1;
            break;
        }
        sub->SetClap(clap);
        clapNode = clapNode->next;
    }
    printf("    </%s>\n", subNode->name);
    return sub;
}

Clap *MusicScoreManager::PaserClap(xmlNodePtr clapNode)
{
    auto clap = GetNewInstance<Clap>(std::string(reinterpret_cast<const char*>(clapNode->name)));
    if (clap == nullptr) {
        std::cerr << "PaserClap can not get class[" << clapNode->name << "]" << std::endl;
        m_errCode = -1;
        return nullptr;
    }
    printf("        <%s>\n", clapNode->name);
    auto comboNode = clapNode->children;
    while (comboNode != nullptr) {
        auto combo = PaserCombo(comboNode);
        if (combo == nullptr) {
            m_errCode = -1;
            break;
        }
        clap->SetCombo(combo);
        comboNode = comboNode->next;
    }
    printf("        </%s>\n", clapNode->name);
    return clap;
}

Combo *MusicScoreManager::PaserCombo(xmlNodePtr comboNode)
{
    auto combo = GetNewInstance<Combo>(std::string(reinterpret_cast<const char*>(comboNode->name)));
    if (combo == nullptr) {
        std::cerr << "PaserCombo can not get class[" << comboNode->name << "]" << std::endl;
        m_errCode = -1;
        return nullptr;
    }
    printf("            <%s>\n", comboNode->name);
    auto noteNode = comboNode->children;
    while (noteNode != nullptr) {
        auto note = PaserNote(noteNode);
        if (note == nullptr) {
            m_errCode = -1;
            break;
        }
        combo->SetNote(note);
        noteNode = noteNode->next;
    }
    printf("            </%s>\n", comboNode->name);
    return combo;
}

Note *MusicScoreManager::PaserNote(xmlNodePtr noteNode)
{
    auto note = GetNewInstance<Note>(std::string(reinterpret_cast<const char*>(noteNode->name)));
    if (note == nullptr) {
        std::cerr << "PaserNote can not get class[" << noteNode->name << "]" << std::endl;
        m_errCode = -1;
        return nullptr;
    }
    std::string val = GetNodeProp(noteNode, "rollcall");
    note->SetRollCall(Music::RollCall::FromString(GetNodeProp(noteNode, "rollcall")));
    note->SetOctive(std::stoi(GetNodeProp(noteNode, "octive")));
    note->SetMusicalNote(Music::MusicalNote::FromString(GetNodeProp(noteNode, "note")));
    note->SetType(Music::NoteType::FromString(GetNodeProp(noteNode, "type")));

    printf("                <%s channel=%s rollCall=%s octive=%d note=%s type=%s/>\n",
           noteNode->name,
           GetNodeProp(noteNode, "channel").c_str(),
           Music::RollCall::ToString(note->RollCall()).c_str(),
           note->Octive(),
           Music::MusicalNote::ToString(note->MusicalNote()).c_str(),
           Music::NoteType::ToString(note->Type()).c_str());
    return note;
}
