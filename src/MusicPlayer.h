#ifndef MUSIC_LIBRARY_H
#define MUSIC_LIBRARY_H

#include "Song.h"
#include <vector>

class MusicLibrary {

private:
    std::vector<Song> songs;

public:

    void addSong(const Song& song);
    
    void displaySongs() const;

    Song findSong(const std::string& title) const;

    void playSong(const std::string& title) const;

    void createPlaylist();

    void saveToFile(const std::string& filename) const;

    int getSongCount() const;
};

#endif