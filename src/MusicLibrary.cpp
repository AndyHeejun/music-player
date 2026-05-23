#include "../include/MusicLibrary.h"
#include <iostream>

void MusicLibrary::addSong(const Song& song) {
    songs.push_back(song);
    std::cout << "Song added successfully.\n";
}

void MusicLibrary::displaySongs() const {
    // TODO: Implement later

    std::cout << "\nSongs:\n";

    for (const auto& song : songs) {
        std::cout << song.getTitle()
                  << " - "
                  << song.getArtist()
                  << " ("
                  << song.getDuration()
                  << " sec)\n";
    }
}

Song MusicLibrary::findSong(const std::string& title) const {

    for (const auto& song : songs) {

        if (song.getTitle() == title) {
            return song;
        }
    }

    return Song();
}

void MusicLibrary::playSong(const std::string& title) const {

    Song song = findSong(title);

    if (song.getTitle() == "") {

        std::cout << "Song not found.\n";
    }

    else {

        std::cout << "Now playing: "
                  << song.getTitle()
                  << " by "
                  << song.getArtist()
                  << "\n";
    }
}

void MusicLibrary::createPlaylist() {
    // TODO: Implement later

    std::cout << "[MusicLibrary::createPlaylist] not yet implemented\n";
}

void MusicLibrary::saveToFile(const std::string& filename) const {
    // TODO: Implement later

    (void)filename;
}


bool MusicLibrary::removeSong(const std::string& title) {

    for (int i = 0; i < songs.size(); i++) {

        if (songs[i].getTitle() == title) {

            songs.erase(songs.begin() + i);

            return true;
        }
    }

    return false;
}


int MusicLibrary::getSongCount() const {
    return songs.size();
}