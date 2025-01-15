#include "Simulation.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Simularea incendiului forestier\n";
    cout << "--------------------------------------------------------------------------\n";

    const int forestSize = 15;
    Simulation simulation(forestSize);
    simulation.run();

    return 0;
}
