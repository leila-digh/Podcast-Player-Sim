#include "Podify.h"

Podify::Podify(){

}

Podify::~Podify(){
    podcastArray.clear();
}


bool Podify::addPodcast(Podcast* p){
    if(p == nullptr || podcastArray.getSize() >= MAX_ARR){
        return false;
    }

    podcastArray += p;
    return true;
}

bool Podify::addEpisode(Episode* e, const string& podcastTitle){
    if(e == nullptr ){
        return false;
    }
    for(int i = 0; i < podcastArray.getSize(); i ++){
        if(podcastArray[i]->equals(podcastTitle)){
            podcastArray[i]->add(e);
            return true;
        }
    }
    cerr<<"Podcast does not exist"<<endl;
    return false;
}


const Array<Podcast*>& Podify::getPodcasts() const{
    return podcastArray;
}
 //array
Podcast* Podify::getPodcast(int index) const{
    if( index < 0 || index >= podcastArray.getSize()){
        exit(1);
    }
    return podcastArray[index];
}

Podcast* Podify::getPodcast(string& title) const{
    for(int i = 0; i < podcastArray.getSize(); i ++){
        if(podcastArray[i]->equals(title)){
            return podcastArray[i];
        }
    }
    cerr<<"Podcast does not exist"<<endl;
    exit(1);
}

void Podify::getEpisodes(Search& s, Array<Episode*>& episodeArray) const{
    for(int i = 0; i < podcastArray.getSize(); i ++){
        Podcast* tempPod = podcastArray.get(i);
        for(int j = 0; j < tempPod->getSize(); j ++){
            Episode* tempEp = tempPod->get(j);
            if (s.matches(tempEp)){
                episodeArray+=tempEp;
            }
        }
    }

}

void Podify::print(ostream& ost) const{
    ost<< left << setw(20) << "Welcome to Podify" 
    << endl;
    ost<< left << setw(20) << "Number of Podcasts:" 
       << setw(30) << podcastArray.getSize() << endl;
}

ostream& operator<<(ostream& ost, const Podify& p){
    p.print(ost);
    return ost;
}
