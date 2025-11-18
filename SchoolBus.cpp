#include "SchoolBus.h"
#include <iostream>

SchoolBus::SchoolBus(std::string sn){
    school_name = sn;
}

std::string SchoolBus::getSchoolName(){
    return this -> school_name;
}

void SchoolBus::setSchoolName(std::string sn){
    school_name = sn;
}

int SchoolBus::countbigbus(SchoolBus tabBus[], int size){
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (tabBus[i].Bus::getseating_capacity() >= 40 &&
            tabBus[i].Vehicule::getmileage() < 200000) {
            count++;
        }
    }

    return count;
}
