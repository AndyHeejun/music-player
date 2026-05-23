#include <iostream>
#include <cassert>

#include "../include/Song.h"
#include "../include/MusicLibrary.h"



void test_add_song_normal();
void test_add_song_empty();
void test_library_boundary();

void test_remove_song_normal();
void test_remove_song_not_found();
void test_remove_song_boundary();

void test_find_song();


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

    test_remove_song_normal();
    test_remove_song_not_found();
    test_remove_song_boundary();

    test_find_song();


    std::cout << "All tests passed.\n";

    return 0;
}

void test_remove_song_normal() {

    std::cout << "Remove song normal... ";

    MusicLibrary library;

    Song song("Yesterday", "The Beatles", 125);

    library.addSong(song);

    bool removed = library.removeSong("Yesterday");

    assert(removed == true);

    assert(library.getSongCount() == 0);

    std::cout << "PASSED\n";
}


void test_remove_song_not_found() {

    std::cout << "Remove song not found... ";

    MusicLibrary library;

    bool removed = library.removeSong("Fake Song");

    assert(removed == false);

    assert(library.getSongCount() == 0);

    std::cout << "PASSED\n";
}

void test_remove_song_boundary() {

    std::cout << "Remove song boundary... ";

    MusicLibrary library;

    library.addSong(Song("A", "Artist1", 100));
    library.addSong(Song("B", "Artist2", 200));

    bool removed = library.removeSong("A");

    assert(removed == true);

    assert(library.getSongCount() == 1);

    std::cout << "PASSED\n";
}

void test_find_song() {

    std::cout << "Find song... ";

    MusicLibrary library;

    Song song("Yesterday", "The Beatles", 125);

    library.addSong(song);

    Song found = library.findSong("Yesterday");

    assert(found.getTitle() == "Yesterday");

    std::cout << "PASSED\n";
}