#include "customer.hpp"
#include <memory>

Customer::Customer(std::string nume):n(nume){
}

Customer::~Customer() { 
   
}

void Customer::show(){
    std::cout<<"\nName: "<<n<<"\n";
}

std::string Customer::getName(){
    return n;
}

void Customer::buy(Headphones* h){
    std::unique_ptr<Headphones> headp(h);
    std::cout << this->n << " bought the headphones " <<h->getName()<< std::endl;
}

void Customer::sold(Headphones* h, Customer* c){
    std::unique_ptr<Headphones> headp(h);
    std::cout<<this->n<< " bought the headphones "<<h->getName()<<std::endl;
    std::unique_ptr<Headphones> h1 = std::move(headp);
    std::cout<<this->n<< " sold the headphones to "<<c->getName()<<std::endl;
    std::cout<<c->getName()<<" bought the headphones "<<h1.get()->getName()<<std::endl;
}
