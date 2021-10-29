#include <iostream>
#include <cstring>
#include "headphones.h"

class Wired: public Headphones{
    int wire_length;
    public:
    Wired(char* n, float p, int l): Headphones(n,p){
        wire_length=l;
    }
    ~ Wired() { 
        std::cout << "Destruct headphones" << std::endl; }

    Wired(const Wired&) = delete; 
    Wired& operator=(const Wired&) = delete; 
    Wired(Wired&&) = delete; 
    Wired& operator=(Wired&&) = delete;
    void show();
};

