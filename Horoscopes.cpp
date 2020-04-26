#include "Horoscopes.h"

Horoscopes::Horoscopes() {
  month = "";
  day = 0;
  starSign = "";
}
   
Horoscopes::Horoscopes(const string & m, int d) {
  if (m == "1" || m == "january" || m == "January" || m == "jan" || m == "Jan") {
    month = "January";
  }
  else if (m == "2" || m == "february" || m == "February" || m == "feb" || m == "Feb") {
    month = "February";
  }
  else if (m == "3" || m == "march" || m == "March" || m == "mar" || m == "Mar") {
    month = "March";
  }
  else if (m == "4" || m == "april" || m == "April") {
    month = "April";
  }
  else if (m == "5" || m == "may" || m == "May") {
    month = "May";
  }
  else if (m == "6" || m == "june" || m == "June") {
    month = "June";
  }
  else if (m == "7" || m == "july" || m == "July") {
    month = "July";
  }
  else if (m == "8" || m == "august" || m == "August") {
    month ="August";  
  }
  else if (m == "9" || m == "september" || m == "September" || m == "sept" || m == "Sept") {
    month = "September";
  }
  else if (m == "10" || m == "10" || m == "october" || m == "October" || m == "oct" || m == "Oct") {
    month = "October";
  }
  else if (m == "11" || m == "november" || m == "November" || m == "nov" || m == "Nov") {
    month = "November";
  }
  else if (m == "12" || m == "december" || m == "December" || m == "dec" || m == "Dec"){
    month = "December";
  }

  day = d;

   if ((month == "March" && d >= 21 && d <= 31) || (month == "April" && d >= 1 && d <= 19)) {
    starSign = "Aries";
  }
  else if ((month == "April" && d >= 20 && d <= 30) || (month == "May" && d >= 1 && d <= 20)) {
    starSign = "Taurus";
  }
  else if ((month == "May" && d >= 21 && d <= 31) || (month == "June" && d >= 1 && d <= 20)) {
    starSign = "Gemini";
  }
  else if ((month == "June" && d >= 21 && d <= 30) || (month == "July" && d >= 1 && d <= 22)) {
    starSign = "Cancer";
  }
  else if ((month == "July" && d >= 23 && d <= 31) || (month == "August" && d >= 1 && d <= 22)) {
    starSign = "Leo";
  }
  else if ((month == "August" && d >= 23 && d <= 31) || (month == "September" && d >= 1 && d <= 22)) {
    starSign = "Virgo";
  }
  else if ((month == "September" && d >= 23 && d <= 30) || (month == "October" && d >= 1 && d <= 22)) {
    starSign = "Libra";
  }
  else if ((month == "October" && d >= 23 && d <= 31) || (month == "November" && d >= 1 && d <= 21)) {
    starSign = "Scorpio";
  }
  else if ((month == "November" && d >= 22 && d <= 30) || (month == "December" && d >= 1 && d <= 21)) {
    starSign = "Sagittarius";
  }
  else if ((month == "December" && d >= 22 && d <= 31) || (month == "January" && d >= 1 && d <= 19)) {
    starSign = "Capricorn";
  }
  else if ((month == "January" && d >= 20 && d <= 31) || (month == "February" && d >= 1 && d <= 18)) {
    starSign = "Aquarius";
  }
  else if ((m == "February" && d >= 19 && d <= 29) || (month == "March" && d >= 1 && d <= 20)) {
    starSign = "Pisces";
  }
}

void Horoscopes::setMonth(const string & m) {
  month = m;
}

void Horoscopes::setDay(int d) {
  day = d;
}

string Horoscopes::getMonth() const {
  return month;
}

int Horoscopes::getDay() const {
  return day;
}

string Horoscopes::getStarSign() const{
  return starSign;
}
void Horoscopes::printHoroscopes() const{
  cout << "Birth Month: " << month << endl;
  cout << "Birth Day: " << day << endl;
  cout << "Horoscope: " << starSign << endl;
}