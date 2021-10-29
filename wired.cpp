#include <iostream>
#include <cstring>
#include "headphones.cpp"

class Wired: public Headphones{
    int wire_length;
    public:
    Wired(char * n, float p, int l): Headphones(n,p){
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

void Wired::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nWire length:  "<<wire_length;

}