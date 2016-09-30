#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include <QMediaContent>
#include "audiotrack.h"

class Playlist
{
public:
    Playlist();
    void addTrack(AudioTrack);
    void removeTrack(AudioTrack);
    std::vector<AudioTrack>::iterator trackListIterator;

private:
    std::vector<AudioTrack> trackList;
    int lengthInSeconds;
};

#endif // PLAYLIST_H
