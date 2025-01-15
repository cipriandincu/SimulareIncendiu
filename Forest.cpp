#include "Forest.h"
#include "Environment.h"
#include <iostream>
using namespace std;

Forest::Forest(int forestSize) : size(forestSize) {
    forest.resize(size, vector<char>(size, 'Z')); // 'Z' reprezinta copaci
    forest[size / 2][size / 2] = '-';             // '-' reprezinta focul 
}

void Forest::display() const {
    for (const auto& row : forest) {
        for (char cell : row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }
}

void Forest::propagateFire(const Environment& env) {
    vector<vector<char>> newForest = forest;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (forest[i][j] == '-') {
                if (i > 0 && forest[i - 1][j] == 'Z') newForest[i - 1][j] = '-';
                if (i < size - 1 && forest[i + 1][j] == 'Z') newForest[i + 1][j] = '-';
                if (j > 0 && forest[i][j - 1] == 'Z') newForest[i][j - 1] = '-';
                if (j < size - 1 && forest[i][j + 1] == 'Z') newForest[i][j + 1] = '-';

                if (env.getWindDirection() == "N" && i > 1 && forest[i - 2][j] == 'Z') newForest[i - 2][j] = '-';
                if (env.getWindDirection() == "S" && i < size - 2 && forest[i + 2][j] == 'Z') newForest[i + 2][j] = '-';
                if (env.getWindDirection() == "E" && j < size - 2 && forest[i][j + 2] == 'Z') newForest[i][j + 2] = '-';
                if (env.getWindDirection() == "V" && j > 1 && forest[i][j - 2] == 'Z') newForest[i][j - 2] = '-';
            }
        }
    }

    forest = newForest;
}
