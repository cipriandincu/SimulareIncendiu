#include "Simulation.h"
#include <iostream>
using namespace std;

Simulation::Simulation(int forestSize) : forest(forestSize) {}

void Simulation::run() {
    environment.setup();
    environment.display();

    cout << "\nPadurea initiala:\n";
    forest.display();

    for (int step = 0; step < 5; ++step) {
        cout << "\nPasul " << step + 1 << ":\n";
        forest.propagateFire(environment);
        forest.display();
    }
}
