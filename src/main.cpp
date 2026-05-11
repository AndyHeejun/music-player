#include "../include/MusicLibrary.h"
#include <iostream>

int main() {
    MusicLibrary library;

    int choice = 0;

    while (choice != 6) {
        std::cout << "\n=== Music Player ===\n";
        std::cout << "1. Add Song\n";
        std::cout << "2. Play Song\n";
        std::cout << "3. Display All Songs\n";
        std::cout << "4. Search Songs\n";
        std::cout << "5. Playlist Management\n";
        std::cout << "6. Exit\n";

        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title;
            std::string artist;
            int duration;

            std::cin.ignore();

            std::cout << "Enter song title: ";
            std::getline(std::cin, title);

            std::cout << "Enter artist: ";
            std::getline(std::cin, artist);

            std::cout << "Enter duration (seconds): ";
            std::cin >> duration;

            Song song(title, artist, duration);

            library.addSong(song);
        }

        else if (choice == 2) {
            std::cout << "TODO: Play Song\n";
        }

        else if (choice == 3) {
            library.displaySongs();
        }

        else if (choice == 4) {
            std::cout << "TODO: Search Songs\n";
        }

        else if (choice == 5) {
            std::cout << "TODO: Playlist Management\n";
        }
    }

    return 0;
}