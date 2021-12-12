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

Catalogue& Catalogue::operator=(const Catalogue& obj){ //ITEM 12 - Copy all parts of an object
  if(this!=&obj){
    content=obj.content;
  }
  else{
    std::cout<<"\nSelf assignment\n"; // ITEM 11 - Identity test: if a self-assignment, do nothing  
  }
  return *this; // ITEM 10 - Have assignment operators return a reference to *this
  
}

void Catalogue::show(){
    std::cout<<"\nContent: "<<content<<"\n";
}
void Catalogue::setContent(const std::string w){ content=w;}
std::string Catalogue::getContent(){ return content;}