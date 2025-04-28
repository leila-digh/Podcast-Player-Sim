#ifndef PODCAST_PLAYER_H
#define PODCAST_PLAYER_H

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

#include "defs.h"
#include "Episode.h"

using namespace std;

class PodcastPlayer{
    public:
        virtual void play(const Episode& m, ostream& ost) = 0;
        // virtual void print(ostream& ost)=0;

        // friend ostream& operator<<(ostream& ost, Episode& s);
    private:
};

class AudioPlayer: virtual public PodcastPlayer{
     public:
        void play(const Episode& m, ostream& ost) override;
        // void print(ostream& ost) override;
    private:
};

class VideoPlayer: virtual public AudioPlayer{
 public:
        void play(const Episode& m, ostream& ost) override;
        // void print(ostream& ost) override;
    private:
};

#endif