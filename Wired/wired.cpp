#include "wired.hpp"


Wired::Wired(std::string n, float p,float s, float freq, float in, int l): Headphones(n,p,s,freq,in),wire_length(l){
}

Wired::~Wired() { 
}

Wired& Wired::operator=(const Wired& obj){
  if(this!=&obj){
      Headphones::operator= (obj);
      wire_length=obj.wire_length;
  }
  else{
      std::cout<<"\nSelf assessment\n";
  }
  return *this;
}

void Wired::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nSensitivity: "<<sensitivity;
    std::cout<<"\nFrequency response: "<<frequency_response;
    std::cout<<"\nInput power: "<<input_power;
    std::cout<<"\nWire length: "<<wire_length<<std::endl;
    std::cout<<std::endl;
}

int Wired::getWireLength() {return wire_length;}

void Wired::setWireLength(const float&  w) {wire_length=w;}

Wired::Wired(const Wired &obj): Headphones(obj), wire_length(obj.wire_length){
    std::cout<<"The Copy Constructor was used"<<std::endl;
}
