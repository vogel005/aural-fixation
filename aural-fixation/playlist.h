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
    //test
    std::vector<AudioTrack>::iterator trackListIterator;
private:
    std::vector<AudioTrack> trackList;
    int lengthInSeconds;
};

#endif // PLAYLIST_H
