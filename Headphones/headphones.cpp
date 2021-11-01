#include "headphones.h"
#include <string.h>

Headphones::Headphones( std::string n, float p){
  name=n;
  price=p;
}

Headphones::~Headphones() { 
    std::cout << "Destruct headphones" << std::endl; }

std::string Headphones::getName() {return name;}
float Headphones::getPrice() {return price;}

void Headphones::setName(const std::string w) {name=w;}
void Headphones::setPrice(const float & h) {price = h;}



