#ifndef FORTUNE_H
#define FORTUNE_H

#include "Horoscopes.h"
#include <string>

class Fortune {
  private:
    Horoscopes sign;
    int luck;
  public:
    Fortune();
    Fortune(Horoscopes );
    void Romance();
    void CompatabilityWithSigns(const string & );
    void Finance();
    void Personality();
    void QuarantineLifestyle();
    void Mood();
    void Luck();
};    
#endif