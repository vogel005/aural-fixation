#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "audiotrack.h"
#include <vector>

class Playlist
{
public:
    Playlist();
    void addTrack(AudioTrack);
    void removeTrack(AudioTrack);
    std::vector<AudioTrack>::iterator trackListIterator;
    //testing again
private:
    std::vector<AudioTrack> trackList;
    int lengthInSeconds;
};

#endif // PLAYLIST_H
