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
#include "interface/xml_writer.h"
#include "interface/xml_reader.h"

REFLECT(Note)
REFLECT(Combo)
REFLECT(Clap)
REFLECT(Sub)
REFLECT(MusicScore)


void *Note::Serialize() const
{
    auto node = XmlWriter::CreateNode("note");
    std::list<XmlWriter::Property> props = {
            XmlWriter::Property("channel", Note::GetClassPtr()->GetField("channel").Get<std::string>(this)),
            XmlWriter::Property("rollcall", Music::RollCall::ToString(Note::GetClassPtr()->GetField("rollcall").Get<int>(this))),
            XmlWriter::Property("octive", std::to_string(Note::GetClassPtr()->GetField("octive").Get<int>(this))),
            XmlWriter::Property("musicalNote", Music::MusicalNote::ToString(Note::GetClassPtr()->GetField("musicalNote").Get<int>(this))),
            XmlWriter::Property("type", Music::NoteType::ToString(Note::GetClassPtr()->GetField("type").Get<int>(this)))
    };
    XmlWriter::SetNodePop(node, props);
    return node;
}

void Note::Deserialize(void *source)
{
    auto node = static_cast<xmlNodePtr>(source);
    std::string value = XmlReader::GetNodeProp(node, "channel");
    Note::GetClassPtr()->GetField("channel").Set(this, value);
    value = XmlReader::GetNodeProp(node, "rollcall");
    Note::GetClassPtr()->GetField("rollcall").Set(this, Music::RollCall::FromString(value));
    value = XmlReader::GetNodeProp(node, "octive");
    Note::GetClassPtr()->GetField("octive").Set(this, std::stoi(value));
    value = XmlReader::GetNodeProp(node, "musicalNote");
    Note::GetClassPtr()->GetField("musicalNote").Set(this, Music::MusicalNote::FromString(value));
    value = XmlReader::GetNodeProp(node, "type");
    Note::GetClassPtr()->GetField("type").Set(this, Music::NoteType::FromString(value));
}

Combo::~Combo()
{
    for (auto& m_objectFactorie : m_notes) {
        delete m_objectFactorie;
    }
    m_notes.clear();
}

void *Combo::Serialize() const
{
    auto noteNode = XmlWriter::CreateNode("Combo");
    auto notes = Combo::GetClassPtr()->GetField("notes").Get<std::vector<Note*>>(this);
    for (auto note : notes) {
        XmlWriter::AppandChild(noteNode, static_cast<xmlNodePtr>(note->Serialize()));
    }
    return noteNode;
}

void Combo::Deserialize(void *source)
{
    auto comboNode = static_cast<xmlNodePtr>(source);
    auto notes = Combo::GetClassPtr()->GetField("notes").Get<std::vector<Note*>>(this);
    auto noteNode = comboNode->children;
    while (noteNode != nullptr) {
        auto note = GetNewInstance<Note>(std::string(reinterpret_cast<const char*>(noteNode->name)));
        note->Deserialize(noteNode);
        notes.emplace_back(note);
        noteNode = noteNode->next;
    }
    Combo::GetClassPtr()->GetField("notes").Set(this, notes);

}

Clap::~Clap()
{
    for (auto& m_objectFactorie : m_combos) {
        delete m_objectFactorie;
    }
    m_combos.clear();
}

void *Clap::Serialize() const
{
    auto clapNode = XmlWriter::CreateNode("Clap");

    auto combos = Clap::GetClassPtr()->GetField("combos").Get<std::vector<Combo*>>(this);
    for (auto combo : combos) {
        XmlWriter::AppandChild(clapNode, static_cast<xmlNodePtr>(combo->Serialize()));
    }
    return clapNode;
}

void Clap::Deserialize(void *source)
{
    auto clapNode = static_cast<xmlNodePtr>(source);
    auto notes = Clap::GetClassPtr()->GetField("combos").Get<std::vector<Combo*>>(this);
    auto noteNode = clapNode->children;
    while (noteNode != nullptr) {
        auto combo = GetNewInstance<Combo>(std::string(reinterpret_cast<const char*>(noteNode->name)));
        combo->Deserialize(noteNode);
        notes.emplace_back(combo);
        noteNode = noteNode->next;
    }
    Clap::GetClassPtr()->GetField("combos").Set(this, notes);
}

Sub::~Sub()
{
    for (auto& m_objectFactorie : m_claps) {
        delete m_objectFactorie;
    }
    m_claps.clear();
}

void *Sub::Serialize() const
{
    auto subNode = XmlWriter::CreateNode("Sub");
    std::list<XmlWriter::Property> props = {
            XmlWriter::Property("number", std::to_string(Sub::GetClassPtr()->GetField("number").Get<int>(this))),
            XmlWriter::Property("repeat", Sub::GetClassPtr()->GetField("number").Get<bool>(this) ? "true" : "false")
    };
    XmlWriter::SetNodePop(subNode, props);

    auto claps = Sub::GetClassPtr()->GetField("claps").Get<std::vector<Clap*>>(this);
    for (auto clap : claps) {
        XmlWriter::AppandChild(subNode, static_cast<xmlNodePtr>(clap->Serialize()));
    }
    return subNode;
}

void Sub::Deserialize(void *source)
{
    auto subNode = static_cast<xmlNodePtr>(source);
    Sub::GetClassPtr()->GetField("number").Set(this, std::stoi(XmlReader::GetNodeProp(subNode, "number")));
    if (XmlReader::GetNodeProp(subNode, "repeat") == "true") {
        Sub::GetClassPtr()->GetField("repeat").Set(this, true);
    } else {
        Sub::GetClassPtr()->GetField("repeat").Set(this, false);
    }
    auto claps = Sub::GetClassPtr()->GetField("claps").Get<std::vector<Clap*>>(this);
    auto clapNode = subNode->children;
    while (clapNode != nullptr) {
        auto clap = GetNewInstance<Clap>(std::string(reinterpret_cast<const char*>(clapNode->name)));
        clap->Deserialize(clapNode);
        claps.emplace_back(clap);
        clapNode = clapNode->next;
    }
    Sub::GetClassPtr()->GetField("claps").Set(this, claps);
}

MusicScore::~MusicScore()
{
    for (auto& m_objectFactorie : m_subs) {
        delete m_objectFactorie;
    }
    m_subs.clear();
}

void *MusicScore::Serialize() const
{
    auto musicNode = XmlWriter::CreateNode("music");
    XmlWriter::AppandChild(musicNode, XmlWriter::CreateNode("name", MusicScore::GetClassPtr()->GetField("name").Get<std::string>(this)));
    XmlWriter::AppandChild(musicNode, XmlWriter::CreateNode("key", MusicScore::GetClassPtr()->GetField("key").Get<std::string>(this)));
    XmlWriter::AppandChild(musicNode, XmlWriter::CreateNode("beat", MusicScore::GetClassPtr()->GetField("beat").Get<int>(this)));
    XmlWriter::AppandChild(musicNode, XmlWriter::CreateNode("rate", MusicScore::GetClassPtr()->GetField("rate").Get<float>(this)));
    auto subs = MusicScore::GetClassPtr()->GetField("subs").Get<std::vector<Sub*>>(this);
    for (auto sub : subs) {
        XmlWriter::AppandChild(musicNode, static_cast<xmlNodePtr>(sub->Serialize()));
    }
    return musicNode;
}

void MusicScore::Deserialize(void *source)
{
    auto node = static_cast<xmlNodePtr>(source);
    auto subs = MusicScore::GetClassPtr()->GetField("subs").Get<std::vector<Sub*>>(this);
    while (node != nullptr) {
        std::string key = std::string(reinterpret_cast<const char*>(node->name));
        if (key == "Sub") {
            auto sub = GetNewInstance<Sub>(key);
            sub->Deserialize(node);
            subs.emplace_back(sub);
        } else if (key == "beat") {
            MusicScore::GetClassPtr()->GetField(key).Set(this, std::stoi(XmlReader::GetNodeContent(node)));
        } else if (key == "rate") {
            MusicScore::GetClassPtr()->GetField(key).Set(this, std::stof(XmlReader::GetNodeContent(node)));
        } else {
            MusicScore::GetClassPtr()->GetField(key).Set(this, XmlReader::GetNodeContent(node));
        }
        node = node->next;
    }
    MusicScore::GetClassPtr()->GetField("subs").Set(this, subs);
}

MusicScoreManager::~MusicScoreManager()
{
    delete m_musicScore;
}

int MusicScoreManager::Paser(const std::string &file)
{
    return PaserMusicScore(file);
}

int MusicScoreManager::PaserMusicScore(const std::string &file)
{
    m_errCode = 0;
    XmlReader reader;

    if(reader.Open(file)) {
        std::cerr << "Unknow where to parse the data from, please load the source data file" << std::endl;
        return -1;
    }
    m_musicScore = GetNewInstance<MusicScore>("MusicScore");
    if (m_musicScore == nullptr) {
        std::cerr << "PaserMusicScore can not get class[MusicScore]" << std::endl;
        return -1;
    }

    m_musicScore->Deserialize(reader.Root()->children);
    return m_errCode;
}

int MusicScoreManager::Serialize(const std::string &fileName, const std::string &dircotry, MusicScore *musicScore)
{
    if (musicScore == nullptr) {
        return -1;
    }
    XmlWriter writer;
    writer.SetFileDictory(dircotry);
    int ret = writer.CreateXmlDoc();
    auto root = static_cast<xmlNodePtr>(musicScore->Serialize());
    writer.SetRoot(root);
    ret |= writer.SaveXmlDoc(fileName);
    return ret;
}
