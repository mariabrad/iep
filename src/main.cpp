#include <iostream>
#include <cstring>
#include "headphones.hpp"
#include "wired.hpp"
#include "wireless.hpp"


int main(){
    char* name = new char[30];
    char* example_name = new char[30];

    float price, sensitivity,frequency_response, input_power;
    float example_price,example_sensitivity, example_frequency_response, example_input_power;

    int wire_length, range, option;
    int example_wire_length, example_range;

    bool done = false;

    Wired* obj1;
    Wireless *obj2;
    Headphones* obj3;
    Headphones* obj4;

    strcpy(example_name, "JABRA");
    example_price = 800;
    example_sensitivity = 122;
    example_frequency_response = 0.2;
    example_input_power= 20;
    example_range = 10;

    while (1)
    {
        std::cout<<"1 - Wired | 2 - Wireless | 3 Make copy of Wired | 4 Make copy of Wireless |0 - Quit: ";
        std::cin>>option;

        switch (option)
        {
        case 1:
            std::cout<<"\nEnter wired headphones specifications:\n";
            std::cout<<"\nName: ";
            std::cin>>name;
            std::cout<<"\nPrice: ";
            std::cin>>price;
            std::cout<<"\nSensitivity: ";
            std::cin>>sensitivity;
            std::cout<<"\nFrequency response: ";
            std::cin>>frequency_response;
            std::cout<<"\nInput power: ";
            std::cin>>input_power;
             std::cout<<"\nWire length: ";
            std::cin>>wire_length;
            obj1=  new Wired(name, price, sensitivity, frequency_response, input_power, wire_length);
            std::cout<<"\n";
            obj1->show();
            obj3= new Wired(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_wire_length);
            obj3->show();
   
            break;

        case 2:
            std::cout<<"\nEnter wireless headphones specifications:\n";
            std::cout<<"\nName: ";
            std::cin>>name;
            std::cout<<"\nPrice: ";
            std::cin>>price;
            std::cout<<"\nSensitivity: ";
            std::cin>>sensitivity;
            std::cout<<"\nFrequency response: ";
            std::cin>>frequency_response;
            std::cout<<"\nInput power: ";
            std::cin>>input_power;
            std::cout<<"\nRange: ";
            std::cin>>range;
            std::cout<<"\n";
            obj2=  new Wireless(example_name, price,sensitivity, frequency_response, input_power, range);
            obj2->show();
            obj4= new Wireless(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_range);
            obj4->show();
            break;   

        case 3:{
            std::cout<<"\nEnter wired headphones specifications:\n";
            std::cout<<"\nName: ";
            std::cin>>name;
            std::cout<<"\nPrice: ";
            std::cin>>price;
            std::cout<<"\nSensitivity: ";
            std::cin>>sensitivity;
            std::cout<<"\nFrequency response: ";
            std::cin>>frequency_response;
            std::cout<<"\nInput power: ";
            std::cin>>input_power;
            std::cout<<"\nWire length: ";
            std::cin>>wire_length;
            std::cout<<"\n";
            obj1=  new Wired(name, price,sensitivity, frequency_response, input_power, wire_length);
            Wired* obj5= new Wired(*obj1);
            obj1->setName(example_name);
            obj1->show();
            break;
        }

        case 4:{
            std::cout<<"\nEnter wired headphones specifications:\n";
            std::cout<<"\nName: ";
            std::cin>>name;
            std::cout<<"\nPrice: ";
            std::cin>>price;
            std::cout<<"\nSensitivity: ";
            std::cin>>sensitivity;
            std::cout<<"\nFrequency response: ";
            std::cin>>frequency_response;
            std::cout<<"\nInput power: ";
            std::cin>>input_power;
            std::cout<<"\nRange: ";
            std::cin>>range;
            std::cout<<"\n";
            obj2=  new Wireless(name, price,sensitivity, frequency_response, input_power, range);
            Wireless* obj6= new Wireless(*obj2);
            obj2->setName(example_name);
            obj2->show();
            break;
        }

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
    //std::cout<<" Wirelesschar*
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