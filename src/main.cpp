#include <iostream>
#include <cstring>
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
    Wired* obj7;
    Wireless *obj8;
    Headphones* obj3;
    Headphones* obj4;

    strcpy(example_name, "JABRA");
    example_price = 800;
    example_sensitivity = 122;
    example_frequency_response = 0.2;
    example_input_power= 20;
    example_range = 10;
    
    while (1){

        std::cout<<"1 - Wired - overloading show function\n";
        std::cout<<"2 - Wireless - overloading show function\n";
        std::cout<<"3 - Wired - Make copy using copy constructor\n";
        std::cout<<"4 - Wireless - Make copy using copy constructor\n";
        std::cout<<"5 - Wired - Make copy using copy operator\n";
        std::cout<<"6 - Wireless - Make copy using copy operator\n";
        std::cout<<"0 - Quit\n";
        std::cout<<"Your option: \n";
        std::cin>>option;

        switch (option){
            
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
            obj1= new Wired(name, price, sensitivity, frequency_response, input_power, wire_length);
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
            obj2= new Wireless(example_name, price,sensitivity, frequency_response, input_power, range);
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
            obj1= new Wired(name, price,sensitivity, frequency_response, input_power, wire_length);
            Wired* obj5= new Wired(*obj1);
            obj1->setName(example_name);
            obj1->show();
            obj5->show();
            break;
        }

        case 4:{
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
            obj2= new Wireless(name, price,sensitivity, frequency_response, input_power, range);
            Wireless* obj6= new Wireless(*obj2);
            obj2->setRange(example_range);
            obj2->show();
            obj6->show();
            break;
        }

         case 5:{
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
            obj7= new Wired(name, price,sensitivity, frequency_response, input_power,wire_length);
            Wired* obj9 = new Wired(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_wire_length);
            *obj9=*obj7;
            obj7->setName(example_name);
            obj7->show();
            obj9->show();
            break;
        }   

        case 6:{
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
            obj8= new Wireless(name, price,sensitivity, frequency_response, input_power, range);
            Wireless* obj10 = new Wireless(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_range);
            *obj10=*obj8;
            obj8->setName(example_name);
            obj8->show();
            obj10->show();
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