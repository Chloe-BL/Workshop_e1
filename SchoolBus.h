#pragma once
#include "Vehicule.h"
#include "Bus.h"
#include <iostream>

class SchoolBus : public Bus{
private: 
    std::string school_name;

public:
    SchoolBus(std::string sn);
    std::string getSchoolName();
    void setSchoolName(std::string sn);
    static int countbigbus(SchoolBus tabBus[], int size);
};