#include "Bus.h"
#include <iostream>

Bus::Bus(){
        seat_capacity = 10;
    } 

int Bus::getseating_capacity() {
        return this -> seat_capacity;
    }

void Bus::setseat_capacity(int capacity) {
        capacity = seat_capacity;
        if (capacity<10 && capacity>50){
            capacity = 50;
        }
    }

void Bus::get_info(){
        std::cout << "Il s'agit d'un bus d'une capacite de "<< getseating_capacity() 
        <<" places, avec une vitesse maximale de " << Vehicule::getmax_speed() 
        <<" kmh et son kilometrage est de " << Vehicule::getmileage() << " km."<< std::endl;
    }
