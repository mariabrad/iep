#pragma once
#include <iostream>
#include <cstring>
#include "headphones.h"

class Wired: public Headphones{

    public:
    Wired(char* n, float p, int l);
    ~ Wired();
    Wired(const Wired&) = delete; 
    Wired& operator=(const Wired&) = delete; 
    Wired(Wired&&) = delete; 
    Wired& operator=(Wired&&) = delete;
    void show();
    int getWireLength();
    void setWireLength(const float&  w);
    private:
        int wire_length;    
};
