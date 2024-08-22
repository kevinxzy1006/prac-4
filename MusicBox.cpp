#include <iostream>
#include "MusicBox.h"

// constructor
MusicBox::MusicBox() : songname(""), width(0) {}
MusicBox::MusicBox(std::string songname, int width) : songname(songname), width(width) {}

// Getter
std::string MusicBox::get_song()
{
    return songname;
}
int MusicBox::get_width()
{
    return width;
}
