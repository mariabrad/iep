#pragma once
#include <iostream>
#include <cstring>
#include "headphones.h"

class Wired: public Headphones{

    public:
    Wired(std::string n, float p, int l);
    ~ Wired();
    Wired(const Wired&); 
    Wired& operator=(const Wired&) = delete; 
    Wired(Wired&&) = delete; 
    Wired& operator=(Wired&&) = delete;
    void show() override;
    void show(int c);
    int getWireLength();
    void setWireLength(const float&  w);
    private:
        int wire_length;    
};
