#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
    // Add a constructor here:
    Song (std::string new_title, std::string new_artist) {
    title = new_title;
    artist = new_artist;
    }

    std::string get_title() {
        return title;
    }

    std::string get_artist() {
        return artist;
    }
};




