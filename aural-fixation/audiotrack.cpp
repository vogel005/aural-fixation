#include "audiotrack.h"

AudioTrack::AudioTrack()
{

}

bool AudioTrack::Equals(AudioTrack &otherTrack)
{
    if(this->TrackName == otherTrack.TrackName)
        return true;
    return false;
}
