#include "headphones.hpp"
#include <string.h>

Headphones::Headphones(std::string n, float p,float s, float freq, float in){
  name=n;
  price=p;
  sensitivity=s ;
  frequency_response=freq;
  input_power=in;
}

Headphones::~Headphones() { 
    std::cout << "Destruct headphones" << std::endl; }

std::string Headphones::getName() {return name;}
float Headphones::getPrice() {return price;}

void Headphones::setName(const std::string w) {name=w;}
void Headphones::setPrice(const float & h) {price = h;}



