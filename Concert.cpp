#include "Concert.h"
#include <ctime>
#include <iomanip>

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

Concert::Concert( const Concert& copy_from){
    this->concertName = copy_from.concertName;
    this->friends.clear();
    this->friends = copy_from.friends;
    this->desire = copy_from.desire;
    this->date = copy_from.date;
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
    double seconds = 0;

    std::tm *right = new tm(compare_to.date);
    std::time_t leftCon = std::mktime(&this->date);
    std::time_t rightCon = std::mktime(right);
    ;
    
    seconds = difftime(leftCon,rightCon);
    if(seconds < 0){
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& out, const Concert& pCon){
   out <<  pCon.concertName << " Showtime:" << std::put_time(&pCon.date,"%c %Z") <<"\n";
   return out;
}