#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <string>
using namespace std;

class Environment {
private:
    string vegetationType;
    string windDirection;
    int fireSpreadRate;
    int temperature;
    int humidity;

public:
    void setup();
    void display() const;

    string getWindDirection() const;
    int getFireSpreadRate() const;
};

#endif
