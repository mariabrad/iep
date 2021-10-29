#pragma once

#include <iostream>
#include <cstring>
#include "headphones.h"

class Wireless: public Headphones{
    public:
    Wireless(char * n, float p, int r);
    ~ Wireless();
    Wireless(const Wireless&) = delete; 
    Wireless& operator=(const Wireless&) = delete; 
    Wireless(Wireless&&) = delete; 
    Wireless& operator=(Wireless&&) = delete;
    void show();
    int getRange();
    void setRange(const float&  w);

    private:
        int range;

};

