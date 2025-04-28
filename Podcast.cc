#include "Podcast.h"

Podcast::Podcast(const string& title, const string& host): title(title), host(host){

}

Podcast::~Podcast(){
    episodeArray.clear();
}

bool Podcast::equals(const string& title){
    if(title == this->title){
        return true;
    }
    return false;
}

Episode* Podcast::get(int index) const{
    if( index < 0 || index > episodeArray.getSize()){
        exit(1);
    }
    
    return episodeArray[index];
}

int Podcast::getSize() const{
    return episodeArray.getSize();
}

void Podcast::print(ostream& ost) const{
    ost<< left << setw(20) << "Podcast:" 
       << setw(30) << title << endl;
       
    ost<< left << setw(20) << "Hosted by:" 
       << setw(30) << host << endl;
}

void Podcast::printWithEpisodes(ostream& ost) const{
    print(ost);
    for (int i = 0; i < episodeArray.getSize(); i ++){  //using the overloaded operator from episode
        ost << *(episodeArray[i]) << endl;  
    }  
}

bool Podcast::add(Episode* e){
    if(e == nullptr || episodeArray.getSize() >= MAX_ARR){
        return false;
    }
    episodeArray += e;
    return true;
}

ostream& operator<<(ostream& ost, const Podcast& p){
    p.print(ost);
    return ost;
}



