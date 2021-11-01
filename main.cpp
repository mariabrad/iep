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
    Wired* obj1;
    Wireless *obj2;
    Headphones* obj3;
    Headphones* obj4;
    int ct=0;
    while (1)
    {
        std::cout<<"1 - Wired | 2 - Wireless | 3 Make copy of Wired | 0 - Quit: ";
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
            obj1=  new Wired(name, price, wire_length);
            std::cout<<"\n";
            obj1->show();
            obj3= new Wired("a",3,4);
            obj3->show();
   
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
            obj2=  new Wireless(name, price, range);
            obj2->show();
            obj4= new Wireless("a",3,4);
            obj4->show();
            break;   

        case 3:{
            std::cout<<"\n Enter wired headphones specifications:\n";
            std::cout<<"\n Name: ";
            std::cin>>name;
            std::cout<<"\n Price: ";
            std::cin>>price;
            std::cout<<"\n Wire length: ";
            std::cin>>wire_length;
            obj1=  new Wired(name, price, wire_length);
            Wired* obj5= new Wired(*obj1);
            obj1->setName("Airpods");
            obj1->show();
            obj5->show();
        }
            break;
        /*
        case 3:
            int i;
            for(i=0;i<=ct;i++){
                std::cout<<"\n Headphones:\n";
                std::cout<<"\n Name: ";
                //std::cout<<list[0]->getName();
                std::cout<<"\n Price: ";
                std::cout<<price;
                if(typeid(list[i]) == typeid(Wireless)){
                    std::cout<<"\n Range: ";
                    std::cout<<range;               
                }
                else{
                    std::cout<<"\n Wire length: ";
                    std::cout<<wire_length;      
                }      

        */

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