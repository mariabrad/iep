#pragma once
#include <iostream>
#include <cstring>
#include "headphones.hpp"


class Mixed: public Headphones{
    public:
    Mixed(char * n, float p,float s, float freq, float in, int nr);
    ~ Mixed();

    void show() override;

    private:
        int nr_color;
        Mixed(const Mixed&);
        Mixed& operator=(const Mixed&); 
};

