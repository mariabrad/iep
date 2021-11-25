#include "headphones.hpp"
#include <string.h>


Headphones::Headphones(std::string n, float p, float s, float freq, float in):
  name(n),
  price(p),
  sensitivity(s),
  frequency_response(freq),
  input_power(in)
{}

Headphones::~Headphones(){ 
 
}

Headphones::Headphones(const Headphones &obj):
  name(obj.name),
  price(obj.price),
  sensitivity(obj.sensitivity),
  frequency_response(obj.frequency_response),
  input_power(obj.input_power){
    
}

Headphones& Headphones::operator=(const Headphones& obj){ //ITEM 12 - Copy all parts of an object
  if(this!=&obj){
    name=obj.name;
    price=obj.price;
    sensitivity=obj.sensitivity;
    frequency_response=obj.frequency_response;
    input_power=obj.input_power;
  }
  else{
    std::cout<<"\nSelf assignment\n"; // ITEM 11 - Identity test: if a self-assignment, do nothing  
  }
  return *this; // ITEM 10 - Have assignment operators return a reference to *this
}

std::string Headphones::getName(){ return name;}
float Headphones::getPrice(){ return price;}
float Headphones::getSensitivity(){ return sensitivity;}
float Headphones::getFrequencyResponse(){ return frequency_response;}
float Headphones::getInputPower(){ return input_power;}

void Headphones::setName(const std::string w){ name=w;}
void Headphones::setPrice(const float & h){ price = h;}
void Headphones::setSensitivity(const float & s){ sensitivity= s;}
void Headphones::setFrequencyResponse(const float & freq){ frequency_response=freq;}
void Headphones::setInputPower(const float & in){ input_power=in;}

