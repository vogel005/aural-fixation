#ifndef AUDIOTRACK_H
#define AUDIOTRACK_H
#include <string>

class AudioTrack
{
public:
    AudioTrack();
    std::string TrackName;
    bool Equals(AudioTrack&);
};

#endif // AUDIOTRACK_H
