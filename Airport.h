#ifndef AIRPORT_H
#define AIRPORT_H
#include <string>
using namespace std;
#include "Ariline.h"

class Airport {
private:
    int id;
    string city;
    string date;
    string country;
    int totalTransactions;
    float totalDailyIncomes;
    Airline airlines[];

public:
    Airport();
    void setId();
    void setCity();
    void setDate();
    void setCountry();
    void setTotalTran();
    void setTotalInc();
    void setAirlines(Airline airlines[], int size);

    int getId();
    string getCity();
    string getDate();
    string getCountry();
    int getTotalTran();
    float getTotalInc();
    Airline* getAirlines();
    
    void startOperations(string date);
    void printAllFlights();
    void printFlightsSchedule();
    void closeOperations();

    virtual ~Airport();
};

#endif
