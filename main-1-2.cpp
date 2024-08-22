#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>

int main()
{
    StoreShelf shelf(100); // Create a StoreShelf with a width of 100cm

    MusicBox box1(30);
    MusicBox box2(50);
    MusicBox box3(25);

    // Test adding music boxes to the shelf
    if (shelf.add_music_box(box1))
    {
        std::cout << "Added box1 to shelf.\n";
    }
    else
    {
        std::cout << "Not enough space for box1.\n";
    }

    if (shelf.add_music_box(box2))
    {
        std::cout << "Added box2 to shelf.\n";
    }
    else
    {
        std::cout << "Not enough space for box2.\n";
    }

    if (shelf.add_music_box(box3))
    {
        std::cout << "Added box3 to shelf.\n";
    }
    else
    {
        std::cout << "Not enough space for box3.\n";
    }

    // Display the number of music boxes on the shelf
    std::cout << "Number of music boxes on the shelf: " << shelf.get_num_music_boxes() << std::endl;

    // Display the contents of the shelf
    MusicBox *contents = shelf.get_contents();
    for (int i = 0; i < shelf.get_num_music_boxes(); ++i)
    {
        std::cout << "MusicBox " << i + 1 << " width: " << contents[i].get_width() << " cm\n";
    }

    return 0;
}
