#include "Concert.h"
#include <ctime>

//Null Constructor
Concert::Concert(){
    concertName = "Default";
    friends.reserve(10);
    desire = 0;
    //date = std::localtime(std::time(nullptr));
}

Concert::Concert(std::string pName,std::vector<std::string> pFriends, int pDesire, std::tm pTime ){
    this->concertName = pName;
    this->friends.clear();
    this->friends = pFriends;
    this->desire = pDesire;
    this->date = pTime; 
}

Concert& Concert::operator=(const Concert& copy_from){
    this->concertName = copy_from.concertName;
    this->friends.clear();
    this->friends = copy_from.friends;
    this->desire = copy_from.desire;
    this->date = copy_from.date;
    return *this;
}

bool Concert::operator<(const Concert& compare_to){
    int Year,cYear, Month,cMonth, Day,cDay, Hour,cHour, Min,cMin, Sec,cSec;
    Year = this->date.tm_year;
    cYear = compare_to.date.tm_year;
    return Year<cYear;
}

std::ostream& operator<<(std::ostream& out, const Concert& pCon){
   out << "Hello World 2.o :) " << pCon.concertName << "\n";
   return out;
}