#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "audiotrack.h"
#include <list>

class Playlist
{
public:
    Playlist();
    void addTrack();
    void removeTrack();
    iterator<list> trackListIterator;
private:
    list<AudioTrack> trackList;
    int lengthInSeconds;
};

#endif // PLAYLIST_H
