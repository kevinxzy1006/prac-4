#include "MusicBox.h"

// Default constructor
MusicBox::MusicBox() : songname(""), width(0) {}

// Constructor with song and width
MusicBox::MusicBox(std::string songname, int width) : songname(songname), width(width) {}

std::string MusicBox::get_song()
{
    return songname;
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
