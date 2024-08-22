#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h"

class StoreShelf
{
private:
    int width;
    int current_width;
    int num_music_boxes;
    MusicBox *music_boxes;
    void resize_array(); // Function to resize the dynamic array

public:
    StoreShelf();                             // Default constructor
    StoreShelf(int width);                    // Constructor with specified width
    int get_width();                          // Returns the width of the shelf
    int get_num_music_boxes();                // Returns the number of music boxes
    MusicBox *get_contents();                 // Returns a dynamic array of music boxes
    bool add_music_box(MusicBox musicbox); // Adds a music box to the shelf

    ~StoreShelf(); // Destructor
};

#endif // STORESHELF_H
