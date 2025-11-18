#pragma once 
#include "Vehicule.h"

class Bus : public Vehicule {
private:
    int seat_capacity;

public:
    Bus();
    int getseating_capacity();
    void setseat_capacity(int capacity);
    void get_info();
};