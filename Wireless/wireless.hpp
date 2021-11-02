#pragma once
#include <iostream>
#include <cstring>
#include "headphones.hpp"


class Wireless: public Headphones{
    public:
    Wireless(char * n, float p,float s, float freq, float in, int r);
    ~ Wireless();
    Wireless(const Wireless&);
    Wireless& operator=(const Wireless&); 
    Wireless(Wireless&&) = delete; 
    Wireless& operator=(Wireless&&) = delete;
    void show() override;
    int getRange();
    void setRange(const float&  w);
    private:
        int range;

};

