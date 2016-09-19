#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include "playlist.h"

class AudioPlayer
{
public:
    AudioPlayer();
private:
    Playlist CurrentPlaylist;

    void shuffle();
    void play();
    void stop();
    void pause();
    void skip_fwd();
    void skip_back();
    void ffwd();
    void rew();
    void repeat();
};

#endif // AUDIOPLAYER_H
