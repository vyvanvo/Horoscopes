#ifndef HOROSCOPE_H
#define HOROSCOPE_H

#include <string>
#include <iostream>
using namespace std;

class Horoscopes {
    private:
        string month;
        int day;
        string starSign;
    public:
        Horoscopes();
        Horoscopes(const string &, int ); 
        void setMonth(int );
        void setMonth(const string &);
        void setDay(int );
        string getMonth() const;
        int getDay() const;
        string getStarSign() const;
        void printHoroscopes() const;
};
#endif