#ifndef SIMULATION_H
#define SIMULATION_H

#include "Environment.h"
#include "Forest.h"

class Simulation {
private:
    Environment environment;
    Forest forest;

public:
    Simulation(int forestSize);
    void run();
};

#endif
