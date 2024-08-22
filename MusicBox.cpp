#include "MusicBox.h"

// Default constructor
MusicBox::MusicBox() : song_name(""), width(0) {}

// Constructor with song and width
MusicBox::MusicBox(std::string songname, int width) : song_name(songname), width(width) {}

std::string MusicBox::get_song()
{
    return song_name;
}

int MusicBox::get_width()
{
    return width;
}

// Destructor
MusicBox::~MusicBox()
{
    // No dynamic memory to free, so the default destructor is sufficient
}
