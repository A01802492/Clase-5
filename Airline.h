#ifndef AIRLINE_H
#define AIRLINE_H
#include <string>
#include "Flight.h"
using namespace std;

class Airline {
private:
    string boardingCity;
    string shortName;
    float incomes;
    Flight flights[]; 

public:
    Airline();
    void setBoardingCity();
    void setShortName();
    void setIncomes();
    void setFlights(Flight flights[], int size);

    string getBoardingCity();
    string getShortName();
    float getIncomes();
    Flight* getFlights();

    void updateAirline();
    void scheduleFlights();
    float currentIncome();
    void closeOperations();
    virtual ~Airline();

};

#endif