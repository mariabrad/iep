#pragma once
#include <iostream>
#include <cstring>
#include "headphones.hpp"


class Customer{
    public:
    Customer(std::string n);
    ~Customer();
    void show();
    void buy(Headphones* h);
    void sold(Headphones *h, Customer *c);
    std::string getName();
    private:
        std::string n;
        Headphones* h;
};

