#ifndef FOREST_H
#define FOREST_H

#include <vector>
#include <string>
using namespace std;

class Environment;

class Forest {
private:
    vector<vector<char>> forest;
    int size;

public:
    Forest(int forestSize);

    void display() const;
    void propagateFire(const Environment& env);
};

#endif
