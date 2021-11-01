#pragma once
#include <iostream>
#include <cstring>

class Headphones{
    public:
    Headphones( std::string n, float p,float s, float freq, float in);
    virtual ~Headphones();
    virtual void show()=0;
    Headphones(const Headphones&);
    Headphones& operator=(const Headphones&) = delete; 
    Headphones(Headphones&&) = delete; 
    Headphones& operator=(Headphones&&) = delete;
    std::string getName();
    float getPrice();
    void setName(const std::string  w); 
    void setPrice(const float & h);

    protected:
        float price;
        std::string name;
        float sensitivity;
        float frequency_response;
        float input_power;
};
