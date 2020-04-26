#include "Horoscopes.h"
#include "Fortune.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void options();
void menu();

void menu(Horoscopes h) {
  Fortune reading = Fortune(h);
  options();
  int choice;
  cin >> choice; //user's input

  while (choice != 8) {
    switch(choice) {
      case 1:{
        cout << "Romance Reading:" << endl;
        reading.Romance();
        }break;
      case 2:{
        string anotherSign;
        cout << "Compatibility With Another Sign Reading:" << endl;
        cout << "Enter another sign that you want to see compatibility with:" << endl;
        cin >> anotherSign;
        reading.CompatabilityWithSigns(anotherSign);
        }break;
      case 3:{
        cout << "Finance Reading:" << endl;
        reading.Finance();
        }break;
      case 4:{
        cout << "Personality Reading:" << endl;
        reading.Personality();
        }break;
      case 5:{
        cout << "Quarantine Lifestyle Reading:" << endl;
        reading.QuarantineLifestyle();
        }break;
      case 6:{
        cout << "Mood Reading:" << endl;
        reading.Mood();
        }break;
      case 7:{
        cout << "Luck Reading:" << endl;
        reading.Luck();
        }break;
    }
    options();
    cin >> choice; //another choice
  }
}

void options() {
  cout << "1. Romance" << endl;
  cout << "2. Compatibility With Another Sign" << endl;
  cout << "3. Finance" << endl;
  cout << "4. Personality" << endl;
  cout << "5. Quarantine Lifestyle" << endl;
  cout << "6. Mood" << endl;
  cout << "7. Luck" << endl;
  cout << "8. Quit" << endl;
}

int main() {
  string month;
  int day;
  Horoscopes myHoroscope;

  cout << "Hi! Let's hear your horoscope!" << endl;
  cout << "Please enter your birth month: ";
  cin >> month;
  cout << "Now enter your day of birth: ";
  cin >> day;

  myHoroscope = Horoscopes(month, day);
  myHoroscope.printHoroscopes();
  menu(myHoroscope);
  return 0;
}

