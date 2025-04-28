
#include "Episode.h"

Episode::Episode(const string& podcastTitle, const string& host, const string& episodeTitle, const string& category, const string& audio, const string& videoFile)
:podcastTitle(podcastTitle), host(host), episodeTitle(episodeTitle), category(category), audio(audio), videoFile(videoFile){
}



//getters
string Episode::getPodcastTitle() const{
    return podcastTitle;
}

string Episode::getHost() const{
    return host;
}

string Episode::getEpisodeTitle() const{
    return episodeTitle;
}

string Episode::getCategory() const{
    return category;
}

string Episode::getAudio() const{
    return audio;
}

string Episode::getVideoFile() const{
    return videoFile;
}


//print
void Episode::print(ostream& ost) const{
    ost<< left << setw(20) << "Podcast Title:" 
       << setw(30) << podcastTitle << endl;
       
    ost<< left << setw(20) << "Host:" 
       << setw(30) << host << endl;
       
    ost<< left << setw(20) << "Category:" 
       << setw(30) << category << endl;
       
    ost<< left << setw(20) << "Episode Title:" 
       << setw(30) << episodeTitle << endl;
}


ostream& operator<<(ostream& ost, const Episode& e){
    e.print(ost);
    return ost;
}

