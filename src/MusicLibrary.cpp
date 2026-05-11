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
    // TODO: Implement later

    (void)title;
    return Song();
}

void MusicLibrary::playSong(const std::string& title) const {
    // TODO: Implement later

    (void)title;
    std::cout << "[MusicLibrary::playSong] not yet implemented\n";
}

void MusicLibrary::createPlaylist() {
    // TODO: Implement later

    std::cout << "[MusicLibrary::createPlaylist] not yet implemented\n";
}

void MusicLibrary::saveToFile(const std::string& filename) const {
    // TODO: Implement later

    (void)filename;
}

int MusicLibrary::getSongCount() const {
    return songs.size();
}