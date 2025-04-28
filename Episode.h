
#ifndef EPISODE_H
#define EPISODE_H

#include <string>
#include <iostream>
#include <iomanip>

#include "defs.h"
using namespace std;

class Episode{
    public:
        Episode(const string& podcastTitle, const string& host, const string& episodeTitle, const string& category, const string& audio, const string& videoFile);

        //getters
        string getPodcastTitle() const;
        string getHost() const;
        string getEpisodeTitle() const;
        string getCategory() const;
        string getAudio() const;
        string getVideoFile() const;

        //print
        void print(ostream&) const;

        //insertion operator << Overload
        friend ostream& operator<<(ostream&, const Episode& e);

    private:
        string podcastTitle;
        string host;
        string episodeTitle;
        string category;
        string audio;
        string videoFile;

};
#endif