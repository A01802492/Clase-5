#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>
using namespace std;

class Passenger {
private:
    string name;
    string phone;

public:
    Passenger();
    void setName();
    void setPhone();
    
    string getPhone();
    string getName();
    virtual ~Passenger();
};

#endif