#include <string>
#include <iostream>

class Song {
  
  std::string title;
  std::string artist;

public:
    Song (std::string new_title, std::string new_artist) 
        : title(new_title), artist(new_artist) {}
    // Add a destructor here:
    ~Song() {
    std::cout << "Goodbye " << title;
  };
  
    std::string get_title() {
        return title;
    }

    
    std::string get_artist() {
        return artist;
    }
};








