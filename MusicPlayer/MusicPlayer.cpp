// MusicPlayer.cpp: 定义应用程序的入口点。
//

#include "MusicPlayer.h"

#include <list>

#include "music.h"
#include "player.h"
#include "RomanticPhone.h"

int main()
{
    std::list<Music::Note> music;

    std::cout << "Play \"Romantic Mobile\"" << std::endl;
    std::cout << "                   -- by JayChou" << std::endl;
    music.insert(music.end(), g_phoneHeader.begin(), g_phoneHeader.end());
    music.insert(music.end(), g_phoneBodyHeader.begin(), g_phoneBodyHeader.end());
    music.insert(music.end(), g_phoneBody.begin(), g_phoneBody.end());
    music.insert(music.end(), g_phoneBody.begin(), g_phoneBody.end());
    music.insert(music.end(), g_phoneTail.begin(), g_phoneTail.end());

    Music::NoteLists notes;
    ScaleCalculation key(g_phoneKey);
    key.SetMainKey(g_phoneKey);
    key.TransToNoteLists(music, notes);
    Player phonePlayer(notes);
    phonePlayer.SetRate(g_phoneRate);
    phonePlayer.Play();
    notes.clear();
    std::cout << "Finish." << std::endl;

    return 0;
}
