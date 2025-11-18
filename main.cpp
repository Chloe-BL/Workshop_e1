#include "Vehicule.h"
#include "Bus.h"
#include "SchoolBus.h"
#include <iostream>

int main(){
    Bus b1;
    SchoolBus b2("Bus n°1");
    b2.setmax_speed(237);
    b2.setmileage(180000);
    b2.setseat_capacity(41);
    SchoolBus b3("Bus n°2");
    b3.setmax_speed(199);
    b2.setmileage(288222);
    b2.setseat_capacity(39);
    SchoolBus b4("Bus n°3");
    b4.setmax_speed(109);
    b4.setmileage(200709);
    b4.setseat_capacity(25);

    b1.get_info();
    
    SchoolBus tabBus[3] = {b2,b3,b4};

    int n = SchoolBus::countbigbus(tabBus, 3);

    std::cout << "Number of big bus = " << n << std::endl;

    return 0;
}
