#include "lock.hpp"
#include<mutex>

std::mutex m;
int ct;

Lock::Lock(){
    m.lock();
    std::cout<<"Constructor is called"<<std::endl;
}

Lock::~Lock(){
    m.unlock();
    std::cout<<"Destructor is called"<<std::endl;
}


void listening(){
    Lock lock;
    ct++;
    std::cout<<"Customer number "<<ct<< " is listening\n";
}

void finishing(){
    Lock lock;
    std::cout<<"Next customer"<<std::endl;
}