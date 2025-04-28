#ifndef SEARCH_H
#define SEARCH_H

#include <string>
#include <iostream>
#include <iomanip>

#include "defs.h"
#include "Episode.h"
using namespace std;

class Search{
    public:
        virtual bool matches(const Episode*)=0;
        virtual void print(ostream& ost)=0;

        friend ostream& operator<<(ostream& ost, Search& s);
    private:


};

class H_Search: virtual public Search{
    public:
        H_Search(const string &h);
        bool matches(const Episode*) override;
        void print(ostream& ost) override;

        string getHost() const;

    private:
        string host;
};

class C_Search: virtual public Search{
    public:
        C_Search(const string &c);
        bool matches(const Episode*) override;
        void print(ostream& ost) override;
        string getCategory() const;

    private:
        string category;
};

class HorC_Search: public H_Search, public C_Search{
    public:
        HorC_Search(const string &h, const string &c);
        bool matches(const Episode*) override;
        void print(ostream& ost) override;

    private:
        string category;
};

#endif