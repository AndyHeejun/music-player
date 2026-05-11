#include <iostream>
#include <cassert>

#include "../include/Song.h"
#include "../include/MusicLibrary.h"

void test_add_song_normal() {
    std::cout << "Normal operation... ";

    Song song("Yesterday", "The Beatles", 125);

    assert(song.getTitle() == "Yesterday");
    assert(song.getArtist() == "The Beatles");
    assert(song.getDuration() == 125);

    std::cout << "PASSED\n";
}

void test_add_song_empty() {
    std::cout << "Edge case... ";

    Song song("", "", 0);

    assert(song.getTitle() == "");
    assert(song.getArtist() == "");
    assert(song.getDuration() == 0);

    std::cout << "PASSED\n";
}

void test_library_boundary() {
    std::cout << "Boundary condition... ";

    MusicLibrary library;

    assert(library.getSongCount() == 0);

    Song song("A", "B", 1);

    library.addSong(song);

    assert(library.getSongCount() == 1);

    std::cout << "PASSED\n";
}

int main() {
    std::cout << "Running tests...\n";

    test_add_song_normal();
    test_add_song_empty();
    test_library_boundary();

    std::cout << "All tests passed.\n";

    return 0;
}