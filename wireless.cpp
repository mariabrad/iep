#include <iostream>
#include <cstring>
#include "headphones.cpp"

class Wireless: public Headphones{
    int range;
    public:
    Wireless(char * n, float p, int r): Headphones(n,p){
        range=r;
    }
    ~ Wireless() { 
        std::cout << "Destruct headphones" << std::endl; }

    Wireless(const Wireless&) = delete; 
    Wireless& operator=(const Wireless&) = delete; 
    Wireless(Wireless&&) = delete; 
    Wireless& operator=(Wireless&&) = delete;
    void show();
};


void Wireless::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nrange:  "<<range;

}