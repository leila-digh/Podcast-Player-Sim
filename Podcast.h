
#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include <iostream>
#include <iomanip>

#include "defs.h"
#include "Array.h"
#include "Episode.h"

using namespace std;

class Podcast{
    public:
        Podcast(const string& title, const string& host);
        ~Podcast();

        bool equals(const string& title);
        Episode* get(int index) const;
        int getSize() const;

        void print(ostream&) const;
        void printWithEpisodes(ostream&) const;
        bool add(Episode*);

        friend ostream& operator<<(ostream&, const Podcast& p);


    private:
        Array<Episode*> episodeArray;
        string title;
        string host;

};
#endif