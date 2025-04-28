#include "Search.h"

ostream& operator<<(ostream& ost, Search& s){
    s.print(ost);
    return ost;
}

//H_Search
H_Search::H_Search(const string &h) : host(h){

}

bool H_Search::matches(const Episode* e) {
    if(e->getHost() == host){
        return true;
    }
    return false;
}

void H_Search::print(ostream& ost) {
    ost<<"Matching episode with Host: "<< host <<endl;
}

string H_Search::getHost() const{
    return host;
}


//C_Search
C_Search::C_Search(const string &c) : category(c){

}

bool C_Search::matches(const Episode* e) {
    if(e->getCategory() == category){
        return true;
    }
    return false;
}

void C_Search::print(ostream& ost) {
    ost<<"Matching episode with Category: "<< category <<endl;
}

string C_Search::getCategory() const{
    return category;
}


//HorC_Search
HorC_Search::HorC_Search(const string &h, const string &c) : H_Search(h), C_Search(c){

}

bool HorC_Search::matches(const Episode* e) {
    if(H_Search::matches(e)|| C_Search::matches(e)){
        return true;
    }
    return false;
}

void HorC_Search::print(ostream& ost) {
    ost<<"Matching episode with given Host: "<< H_Search::getHost() << " or Category:"<< C_Search::getCategory() <<endl;
}