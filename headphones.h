#pragma once
#include <iostream>
#include <cstring>

class Headphones{
    public:
    Headphones( char*n, float p);
    virtual ~Headphones();
    virtual void show()=0;
    Headphones(const Headphones&) = delete; 
    Headphones& operator=(const Headphones&) = delete; 
    Headphones(Headphones&&) = delete; 
    Headphones& operator=(Headphones&&) = delete;
    char* getName();
    float getPrice();
    void setName(const char*  w); 
    void setPrice(const float & h);

    protected:
        float price;
        char* name;
};
