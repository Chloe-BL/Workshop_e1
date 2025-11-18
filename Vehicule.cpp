#include "Vehicule.h"

Vehicule:: Vehicule(){
        max_speed = 240;
        mileage = 0;
    }

int Vehicule::getmax_speed(){
        return this -> max_speed;
    }

void Vehicule::setmax_speed(int max){
        max = max_speed;
        if (max_speed < 200) {
            max_speed = 240;
        }
    }

int Vehicule::getmileage(){
        return this -> mileage;
    }

void Vehicule::setmileage(int mile){
        mile = mileage;
        if (mileage < 0){
            mileage = 0;
        }
    }

