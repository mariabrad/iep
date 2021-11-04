#include "mixed.hpp"


Mixed::Mixed(char * n, float p, float s, float freq, float in, int nr): Headphones(n,p,s,freq,in),nr_color(nr){
}

Mixed::~Mixed() { 
    std::cout << "Destruct headphones" << std::endl;
}

void Mixed::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nSensitivity: "<<sensitivity;
    std::cout<<"\nFrequency response: "<<frequency_response;
    std::cout<<"\nInput power: "<<input_power;
    std::cout<<"\nNumber of colors:  "<<nr_color<<std::endl;
    std::cout<<std::endl;
}

