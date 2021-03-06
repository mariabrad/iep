#pragma once
#include <iostream>
#include <cstring>
#include "headphones.hpp"


class Wired: public Headphones{
    public:
    Wired(std::string n, float p,float s, float freq, float in, int l);
    ~ Wired();
    Wired(const Wired&); 
    Wired& operator=(const Wired&); 

    void show() override;
    void show(int c);
    void addToCatalogue(Catalogue* c);
    int getWireLength();
    void setWireLength(const float&  w);
    private:
        int wire_length;    
};
