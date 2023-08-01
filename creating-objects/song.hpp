#include <string>

// add the Song class here:
class Song {
  
  std::string title;

public:
    void add_title(std::string new_title) {
        title = new_title;
    }

    std::string get_title() {
        return title;
    } 
};