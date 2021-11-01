#include "wired.h"


Wired::Wired(std::string n, float p, int l): Headphones(n,p){
    wire_length=l;
}
Wired::~Wired() { 
    std::cout << "Destruct headphones" << std::endl; }


void Wired::show(){
    std::cout<<"\nName:  "<<name;
}
int Wired::getWireLength() {return wire_length;}

void Wired::setWireLength(const float&  w) {wire_length=w;}

Wired::Wired(const Wired &obj): Headphones(obj.name, obj.price), wire_length(obj.wire_length){
    std::cout<<"copy constructor";
}
