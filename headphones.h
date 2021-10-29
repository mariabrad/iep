#include <iostream>
#include <cstring>

class Headphones{
    protected: 
    char name[100];
    float price;
    public:
    Headphones( char*n, float p){
        strcpy(name,n);
        price=p;
    }
    virtual ~Headphones() { 
        std::cout << "Destruct headphones" << std::endl; }
    virtual void show()=0;
    Headphones(const Headphones&) = delete; 
    Headphones& operator=(const Headphones&) = delete; 
    Headphones(Headphones&&) = delete; 
    Headphones& operator=(Headphones&&) = delete;
};