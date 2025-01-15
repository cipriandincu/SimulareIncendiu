#include "Environment.h"
#include <iostream>
using namespace std;

void Environment::setup() {
    cout << "Selectati tipul de vegetatie (1 = Iarba, 2 = Padure de conifere, 3 = Padure mixta): ";
    int vegetationChoice;
    cin >> vegetationChoice;

    switch (vegetationChoice) {
    case 1:
        vegetationType = "Iarba";
        fireSpreadRate = 3;
        break;
    case 2:
        vegetationType = "Padure de conifere";
        fireSpreadRate = 5;
        break;
    case 3:
        vegetationType = "Padure mixta";
        fireSpreadRate = 4;
        break;
    default:
        vegetationType = "Iarba";
        fireSpreadRate = 3;
        break;
    }

    cout << "Selectati directia vantului (N, S, E, V): ";
    cin >> windDirection;

    cout << "Introduceti temperatura (°C): ";
    cin >> temperature;

    cout << "Introduceti umiditatea (%): ";
    cin >> humidity;
}

void Environment::display() const {
    cout << "\nComportamentul focului:\n";
    cout << "Focul se propaga mai rapid in directia vantului (" << windDirection << ").\n";
    cout << "Tipul de vegetatie (" << vegetationType << ") influenteaza intensitatea focului.\n";

    if (vegetationType == "Iarba") {
        cout << "Incendiile in iarba sunt rapide, dar mai usor de controlat.\n";
    }
    else if (vegetationType == "Padure de conifere") {
        cout << "Incendiile in padurile de conifere sunt foarte intense si periculoase.\n";
    }
    else if (vegetationType == "Padure mixta") {
        cout << "Padurile mixte au un comportament variabil al incendiilor.\n";
    }
}

string Environment::getWindDirection() const {
    return windDirection;
}

int Environment::getFireSpreadRate() const {
    return fireSpreadRate;
}
