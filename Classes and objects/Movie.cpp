#include <iostream>
#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched) // Constructor
    : name(name), rating(rating), watched(watched)  {
}

Movie::Movie(const Movie &source)   // Copy Constructor
    : Movie{source.name, source.rating, source.watched} {
}

Movie::~Movie() {   // Destructor
}

void Movie::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}
