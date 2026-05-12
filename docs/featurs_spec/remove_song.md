# Remove Song — Spec

## Problem statement
A user can remove a song from the music library by title.

## Types involved
- MusicLibrary
- Song

## Public interface
- bool MusicLibrary::removeSong(const std::string& title);

## Inputs and outputs
- Input: song title
- Output: success or failure message

## Edge cases
- Song title does not exist
- Empty title
- Removing from empty library
- Multiple songs in library

## Three tests
- Remove existing song
- Remove non-existing song
- Remove first song from multiple songs

## Design decisions
I used a simple vector loop with erase() because the project already stores songs in a std::vector and this approach matches the current coding style.