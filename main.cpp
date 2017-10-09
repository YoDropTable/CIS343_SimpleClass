#include "Concert.h"
#include <iostream>
#include <time.h>
#include <algorithm>

int main(int argc, const char * argv[]){
    Concert myConcert;
    tm myTime;

    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime (&rawtime);



    std::vector<std::string> vecBoys {"Dave","Don","Duke"};
    std::vector<std::string> vecGirls {"Sally","Sue","Ana"};
    
    Concert One("Zelda",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Two("Quebec",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Three("Henry",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Four("Gamma",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Five("Foxtrot",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Six("Echo",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Seven("Delta",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Eight("Charlie",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Nine("Bravo",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    Concert Ten("Alpha",vecGirls,6,*timeinfo);
    timeinfo->tm_hour -= 1;
    
    std::vector<Concert> vecOfConcerts;
    vecOfConcerts.push_back(One);
    vecOfConcerts.push_back(Two);
    vecOfConcerts.push_back(Three);
    vecOfConcerts.push_back(Four);
    vecOfConcerts.push_back(Five);
    vecOfConcerts.push_back(Six);
    vecOfConcerts.push_back(Seven);
    vecOfConcerts.push_back(Eight);
    vecOfConcerts.push_back(Nine);
    vecOfConcerts.push_back(Ten);

    for(Concert temp:vecOfConcerts){
        std::cout<<temp;
    }
    
    std::sort(vecOfConcerts.begin(),vecOfConcerts.end());
    
    for(Concert temp:vecOfConcerts){
        std::cout<<temp;
    }

    /* Testing

    struct {
        bool operator()(int a, int b) const
        {   
            return a < b;
        }   
    } customLess;

    Concert secondConcert("Cats",vecGirls,10, *timeinfo);
    
    bool testBool = myConcert < secondConcert;

    std::cout << myConcert;
    std::cout << secondConcert << "  -- LessThan " << testBool << "\n";


    myConcert = secondConcert;
    testBool = myConcert < secondConcert;

    std::cout<< testBool << "\n";

    myConcert.date->tm_hour += 1;

    testBool = myConcert < secondConcert;
    std::cout << myConcert;
    std::cout << secondConcert << "  --  LessThan " << testBool << "\n";
    */

    return 0;
}