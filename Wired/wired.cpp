#include "wired.hpp"
#include <memory>

Wired::Wired(std::string n, float p,float s, float freq, float in, int l): Headphones(n,p,s,freq,in),wire_length(l){
}

Wired::~Wired() { 
}

Wired& Wired::operator=(const Wired& obj){ 
  if(this!=&obj){
      Headphones::operator= (obj); // ITEM 12 - Copy all parts of an object
      wire_length=obj.wire_length;
  }
  else{
      std::cout<<"\nSelf assignment\n"; // ITEM 11 - Identity test: if a self-assignment, do nothing   
  }
  return *this; // ITEM 10 - Have assignment operators return a reference to *this
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

Wired::Wired(const Wired &obj): Headphones(obj), wire_length(obj.wire_length){ //ITEM - 12 Copy all parts of an object
    std::cout<<"The Copy Constructor was used"<<std::endl;
}

void Wired::addToCatalogue(Catalogue* catalogue){
    //std::unique_ptr<std::string> c = std::make_unique<std::string>(catalogue->getContent());
    std::string c =catalogue->getContent();
    c=c+", "+this->getName();
    catalogue->setContent(c); 
}
