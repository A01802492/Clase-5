#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Passenger.h"
using namespace std;

class Flight {
private:
    string date;
    string hour;
    float price;
    string airplaneModel;
    string fromTo;
    float distance;
    string crew;
    float fuel;
    Passenger seats[];

public:
    Flight();
    string getDate();
    string getHour();
    float getPrice();
    string getAirplaneModel();
    string getFromTo();
    float getDistance();
    string getCrew();
    float getFuel();
    Passenger* getSeats();

    void setDate();
    void setHour();
    void setPrice();
    void setAirplaneModel();
    void setFromTo();
    void setDistance();
    void setCrew();
    void setFuel();
    void setSeats(Passenger seats[], int size);

    float calculateFuel();
    virtual ~Flight();
};

#endif