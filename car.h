#include "vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class CCar:public CVehicle{
public:
    string engine;
    void set_values(int x, string y, string z){
        numWheels = x;
        color = y;
        engine = z;
    }
};
