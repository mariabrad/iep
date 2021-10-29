#include "wired.h"


Wired::Wired(char* n, float p, int l): Headphones(n,p){
    setWireLength(l);
}
Wired::~Wired() { 
    std::cout << "Destruct headphones" << std::endl; }


void Wired::Wired::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nWire length:  "<<wire_length;

}
int Wired::getWireLength() {return wire_length;}

void Wired::setWireLength(const float&  w) {wire_length=w;}