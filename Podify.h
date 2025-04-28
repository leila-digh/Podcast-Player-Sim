
#ifndef PODIFY_H
#define PODIFY_H

#include <string>
#include <iostream>
#include <iomanip>

#include "defs.h"
#include "Podcast.h"
#include "Search.h"

using namespace std;

class Podify{
    public:
        Podify();
        ~Podify();

        bool addPodcast(Podcast*);
        bool addEpisode(Episode*, const string& podcastTitle);

        const Array<Podcast*>&  getPodcasts() const; //array
        Podcast* getPodcast(int index) const;
        Podcast* getPodcast(string& title) const;
        void getEpisodes(Search&, Array<Episode*>&) const;

        void print(ostream&) const;
        friend ostream& operator<<(ostream&, const Podcast& p);


    private:
        Array<Podcast*> podcastArray;
};
#endif