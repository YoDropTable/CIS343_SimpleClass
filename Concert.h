#ifndef CONCERT_H
#define CONCERT_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class Concert{

public:
        Concert();
        Concert(std::string pName,std::vector<std::string> pFreinds, int pDesire, std::tm pTime );
        Concert( const Concert& copy_from);
        Concert& operator=(const Concert& copy_from);
        bool operator<(const Concert& compre_to);
        friend std::ostream& operator<< (std::ostream& os, const Concert& pCon);
private:
        // Who will be performing?
        std::string concertName;

        // A list of the people you want
        // to take with you.  May be empty
        // or arbitrarily full.
        std::vector<std::string> friends;

        // A value from 1-10 concerning how
        // badly you want to see this show.
        int desire;

        // The date of the show
        // See http://en.cppreference.com/w/cpp/chrono/c/tm
        std::tm date;
};

#endif