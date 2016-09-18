#include "playlist.h"

Playlist::Playlist()
{

}

void Playlist::addTrack(AudioTrack selectedTrack)
{
    //We need to either create an AudioTrack object and use:
    this->trackList.push_back(selectedTrack);
    //or automatically create the object when the track is selected with:
    this->trackList.emplace_back(selectedTrack);
}

void Playlist::removeTrack(AudioTrack selectedTrack)
{
    for(trackListIterator = trackList.begin();
        trackListIterator != trackList.end();
        trackListIterator++)
    {
        if(this->trackListIterator->TrackName == selectedTrack.TrackName)
        {
            this->trackList.remove(selectedTrack);
        }
    }

}
