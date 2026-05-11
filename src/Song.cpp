#include "../include/Song.h"

Song::Song() : title(""), artist(""), duration(0) {
    // TODO: default constructor
}

Song::Song(const std::string& title,
           const std::string& artist,
           int duration)
    : title(title), artist(artist), duration(duration) {
}

std::string Song::getTitle() const {
    return title;
}

std::string Song::getArtist() const {
    return artist;
}

int Song::getDuration() const {
    return duration;
}