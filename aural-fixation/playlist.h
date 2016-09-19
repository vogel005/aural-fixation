#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "audiotrack.h"
#include <list>

class Playlist
{
public:
    Playlist();
    void addTrack(AudioTrack);
    void removeTrack(AudioTrack);
    std::list<AudioTrack>::iterator trackListIterator;
private:
    std::list<AudioTrack> trackList;
    int lengthInSeconds;
};

#endif // PLAYLIST_H
