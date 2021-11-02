#include "headphones.hpp"
#include <string.h>


Headphones::Headphones(std::string n, float p, float s, float freq, float in){
  name=n;
  price=p;
  sensitivity=s ;
  frequency_response=freq;
  input_power=in;
}

Headphones::~Headphones(){ 
  std::cout << "Destruct headphones" << std::endl; 
}

Headphones& Headphones::operator=(const Headphones& obj){
  if(this!=&obj){
    name=obj.name;
    price=obj.price;
    sensitivity=obj.sensitivity;
    frequency_response=obj.frequency_response;
    input_power=obj.input_power;
  }
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

