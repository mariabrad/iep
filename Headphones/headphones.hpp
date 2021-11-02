#pragma once
#include <iostream>
#include <cstring>


class Headphones{
    public:
    Headphones(std::string n, float p, float s, float freq, float in);
    virtual ~Headphones();
    virtual void show()=0;
    Headphones(const Headphones&);
    Headphones& operator=(const Headphones&);
    Headphones(Headphones&&) = delete; 
    Headphones& operator=(Headphones&&) = delete;

    std::string getName();
    float getPrice();
    float getSensitivity();
    float getFrequencyResponse();
    float getInputPower();

    void setName(const std::string  w); 
    void setPrice(const float & h);
    void setSensitivity(const float & s);
    void setFrequencyResponse(const float & freq);
    void setInputPower(const float & in);

    protected:
        std::string name;
        float price;
        float sensitivity;
        float frequency_response;
        float input_power;
};
