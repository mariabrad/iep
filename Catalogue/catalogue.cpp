#include <iostream>
#include <cstring>
#include "catalogue.hpp"


Catalogue::Catalogue(std::string n):
  content(n){
}

Catalogue::~Catalogue(){ 
 
}

Catalogue::Catalogue(const Catalogue &obj):
  content(obj.content){
}

Catalogue& Catalogue::operator=(const Catalogue& obj){
  if(this!=&obj){
    content=obj.content;
  }
  else{
    std::cout<<"\nSelf assignment\n"; 
  }
  return *this;
  
}

void Catalogue::show(){
    std::cout<<"\nContent: "<<content<<"\n";
}
void Catalogue::setContent(const std::string w){ content=w;}
std::string Catalogue::getContent(){ return content;}