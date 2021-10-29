#include <iostream>
#include <cstring>
#include "headphones.h"
#include "wired.h"
#include "wireless.h"


int main(){
    char* name = new char[100];
    float price;
    int wire_length, range, option;
    bool done = false;
    Headphones* obj;
    while (1)
    {
        std::cout<<"1 - Wired | 2 - Wireless | 0 - Quit: ";
        std::cin>>option;

        switch (option)
        {
        case 1:
            std::cout<<"\n Enter wired headphones specifications:\n";
            std::cout<<"\n Name: ";
            std::cin>>name;
            std::cout<<"\n Price: ";
            std::cin>>price;
            std::cout<<"\n Wire length: ";
            std::cin>>wire_length;
            obj=  new Wired(name, price, wire_length);
            std::cout<<"\n";
            break;

        case 2:
            std::cout<<"\n Enter wireless headphones specifications:\n";
            std::cout<<"\n Name: ";
            std::cin>>name;
            std::cout<<"\n Price: ";
            std::cin>>price;
            std::cout<<"\n Range: ";
            std::cin>>range;
            std::cout<<"\n";
            obj=  new Wireless(name, price, range);
            break;    

        case 0:
            done = true;
            break;
        }

        if(done) 
        break;

        std::cout<<std::endl;
    }

    return 0;
}


    //headphones* list[2];
    //list[0] = headphones1;
    //list[1] = headphones2;
    //std::cout<<"\n Headphones: ";
    //std::cout<<" Wired: ";
    //headphones1.show();
    //std::cout<<"\n";
    //std::cout<<" Wireless: ";
    //headphones2.show();
    //return 0;