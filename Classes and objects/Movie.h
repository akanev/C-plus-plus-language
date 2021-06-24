#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;   // the name of the movie
    std::string rating;   // the movie rating G,PG, PG-13, R
    int watched;          // the number of times you've watched the movie
public:
    // Constructor - expects all 3 movie attributes
    Movie(std::string name, std::string rating, int watched);
    
    // Copy constructor 
    Movie(const Movie &source); 
    
    // Destructor
    ~Movie();
    
    // getters and setters for private attributes
    void set_name(std::string name) {this->name = name; }
    std::string get_name() const { return name; }
    
    void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const { return rating; }
    
    void set_watched(int watched) {this->watched = watched; }
    int get_watched() const { return watched; }
    
    void increment_watched() { ++watched; }
    
    void display() const;
};

#endif 
