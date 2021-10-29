#include "wireless.h"

Wireless::Wireless(char * n, float p, int r): Headphones(n,p){
        setRange(r);
    }
Wireless::~Wireless() { 
        std::cout << "Destruct headphones" << std::endl; }


void Wireless::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nrange:  "<<range;

}

int Wireless::getRange() {return range;}

void Wireless::setRange(const float&  w) {range=w;}