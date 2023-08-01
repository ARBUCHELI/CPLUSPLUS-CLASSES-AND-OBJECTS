#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
    void add_title(std::string new_title) {
        title = new_title;
    }

    std::string get_title() {
        return title;
    }

    void add_artist(std::string new_artist) {
        artist = new_artist;
    }

    std::string get_artist() {
        return artist;
    }
};


