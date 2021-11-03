#include "wireless.hpp"


Wireless::Wireless(char * n, float p, float s, float freq, float in, int r): Headphones(n,p,s,freq,in){
    range=1;
}

Wireless::~Wireless() { 
    std::cout << "Destruct headphones" << std::endl;
}

Wireless& Wireless::operator=(const Wireless& obj){
  if(this!=&obj){
      (Headphones&)(*this)=obj;
      range=obj.range;
  }
  return *this;
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

Wireless::Wireless(const Wireless &obj): Headphones(obj.name, obj.price,obj.sensitivity, obj.frequency_response, obj.input_power), range(obj.range){
    std::cout<<"The Copy Constructor was used"<<std::endl;
}
