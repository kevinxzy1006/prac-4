#include "MusicBox.h"
#include <iostream>

int main() {
    // Test default constructor
    MusicBox box1;
    std::cout << "Default MusicBox song: " << box1.get_song() << std::endl;
    std::cout << "Default MusicBox width: " << box1.get_width() << " cm" << std::endl;

    // Test parameterized constructor
    MusicBox box2("Fur Elise", 15);
    std::cout << "Custom MusicBox song: " << box2.get_song() << std::endl;
    std::cout << "Custom MusicBox width: " << box2.get_width() << " cm" << std::endl;

    return 0;
}
