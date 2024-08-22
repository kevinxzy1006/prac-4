#include "StoreShelf.h"
#include <iostream>

// Default constructor
StoreShelf::StoreShelf() : width(0), current_width(0), num_music_boxes(0), music_boxes(nullptr)
{
}

// Constructor with specified width
StoreShelf::StoreShelf(int width) : width(w), current_width(0), num_music_boxes(0), music_boxes(nullptr) {}

// Returns the width of the shelf
int StoreShelf::get_width()
{
    return width;
}

// Returns the number of music boxes on the shelf
int StoreShelf::get_num_music_boxes()
{
    return num_music_boxes;
}

// Returns a dynamic array of the music boxes on the shelf
MusicBox *StoreShelf::get_contents()
{
    return music_boxes;
}

// Adds a music box to the shelf
bool StoreShelf::add_music_box(MusicBox musicbox)
{
    if (current_width + musicbox.get_width() > width)
    {
        return false;
    }

    // Add music box to the shelf
    MusicBox *new_music_boxes = new MusicBox[num_music_boxes + 1];
    for (int i = 0; i < num_music_boxes; i++)
    {
        new_music_boxes[i] = music_boxes[i];
    }
    new_music_boxes[num_music_boxes] = musicbox;

    // Update the shelf's attributes
    delete[] music_boxes;
    music_boxes = new_music_boxes;
    current_width += musicbox.get_width();
    num_music_boxes++;

    return true;
}

// Destructor
StoreShelf::~StoreShelf()
{
    delete[] music_boxes;
}
