#include "PodcastPlayer.h"

// ostream& operator<<(ostream& ost, Episode& m){
//     m.print(ost);
//     return ost;
// }

//AudioPlayer

void AudioPlayer::play(const Episode& m, ostream& ost){
    string audioFile = m.getAudio();
    ost << "Audio: " << audioFile << endl;
}


//VideoPlayer

void VideoPlayer::play(const Episode& m, ostream& ost){
    AudioPlayer::play(m, ost);
    string videoFile = m.getVideoFile();

   ifstream infile(videoFile);
   string videoFileData;
    if(!infile) {
        cerr << "Error: could not open file" << endl;
        exit(1);
    }
    while(!infile.eof()){
        if(getline(infile, videoFileData)){
            ost << "Video: " << videoFileData << endl;
        }
    }
    
    infile.close();

}
