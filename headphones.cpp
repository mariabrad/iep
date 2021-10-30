#include "headphones.h"
#include <string.h>

Headphones::Headphones( char*n, float p){
  name=n;
  price=p;
}

Headphones::~Headphones() { 
    std::cout << "Destruct headphones" << std::endl; }

char* Headphones::getName() {return name;}
float Headphones::getPrice() {return price;}

void Headphones::setName(const char*  w) {strcpy(name,w);}
void Headphones::setPrice(const float & h) {price = h;}



