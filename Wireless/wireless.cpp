#include "wireless.hpp"


Wireless::Wireless(char * n, float p, float s, float freq, float in, int r): Headphones(n,p,s,freq,in),range(r){
}

Wireless::~Wireless() { 
}

Wireless& Wireless::operator=(const Wireless& obj){
  if(this!=&obj){
      Headphones::operator=(obj); // ITEM 12 - Copy all parts of an object
      range=obj.range;
  }
  else{
      std::cout<<"\nSelf assignment\n"; // ITEM 11 - Identity test: if a self-assignment, do nothing  
  }
  return *this; // ITEM 10 - Have assignment operators return a reference to *this
}

void Wireless::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nSensitivity: "<<sensitivity;
    std::cout<<"\nFrequency response: "<<frequency_response;
    std::cout<<"\nInput power: "<<input_power;
    std::cout<<"\nRange:  "<<range<<std::endl;
    std::cout<<std::endl;
}

int Wireless::getRange(){ return range;}

void Wireless::setRange(const float&  w){ range=w;}

Wireless::Wireless(const Wireless &obj): Headphones(obj), range(obj.range){ //ITEM - 12 Copy all parts of an object
    std::cout<<"The Copy Constructor was used"<<std::endl;
}
