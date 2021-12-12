#include <iostream>
#include <cstring>
#include "wired.hpp"
#include "wireless.hpp"
#include "mixed.hpp"
#include "lock.hpp"
#include <memory>
#include <mutex>

int main(){
    char* name = new char[30];
    char* example_name = new char[30];

    float price, sensitivity,frequency_response, input_power;
    float example_price,example_sensitivity, example_frequency_response, example_input_power;

    int wire_length, range, nr, option;
    int example_wire_length, example_range, example_nr;

    bool done = false;

    Wired* obj1;
    Wireless *obj2;
    Wired* obj7;
    Wireless *obj8;
   
    Wireless* obj4;
    Wired* obj14;
    Wireless* obj15;
    Mixed *obj11;
/*
    std::shared_ptr<std::string> example_name = std::make_shared<std::string>("Jabra");
    std::shared_ptr<float> example_price = std::make_shared<float>(800);
    std::shared_ptr<float> example_sensitivity = std::make_shared<float>(122);
    std::shared_ptr<float> example_frequency_response = std::make_shared<float>(0.2);
    std::shared_ptr<float> example_input_power = std::make_shared<float>(20);
    std::shared_ptr<int> example_wire_length = std::make_shared<int>(2);
    std::shared_ptr<int> example_range = std::make_shared<int>(10);
    std::shared_ptr<int> example_nr = std::make_shared<int>(3);
*/
    strcpy(example_name, "Jabra");
    example_price = 800;
    example_sensitivity = 122;
    example_frequency_response = 0.2;
    example_input_power= 20;
    example_wire_length = 2;
    example_range = 10;
    example_nr = 3;
    
    while(1){

        std::cout<<"1 - Wired - show function\n";
        std::cout<<"2 - Wireless - show function\n";
        std::cout<<"3 - Wired - Make copy using copy constructor\n";
        std::cout<<"4 - Wireless - Make copy using copy constructor\n";
        std::cout<<"5 - Wired - Make copy using copy assignment operator\n";
        std::cout<<"6 - Wireless - Make copy using copy assignment operator\n";
        std::cout<<"7 - Mixed - Can't copy\n";
        std::cout<<"----------------------\n";
        std::cout<<"8 - Wired - Make copy using copy assignment operator - self assignment\n";
        std::cout<<"9 - Wireless - Make copy using copy assignment operator - self assignment\n";
        std::cout<<"10 - Wired - Chain of assignments\n";
        std::cout<<"----------------------\n";
        std::cout<<"11 - Wired - Unique pointer - Make copy using copy constructor\n";
        std::cout<<"12 - Wireless - Shared pointer\n";
        std::cout<<"13 - Wired - Example mutex\n";
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
            obj2= new Wireless(name, price,sensitivity, frequency_response, input_power, range);
            obj2->show();

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
            Wired* obj3= new Wired(name, price,sensitivity, frequency_response, input_power, wire_length);
            Wired* obj5= new Wired(*obj3);
            obj3->setWireLength(example_wire_length);
            obj3->show();
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
            obj4= new Wireless(name, price,sensitivity, frequency_response, input_power, range);
            Wireless* obj6= new Wireless(*obj4);
            obj4->setRange(example_range);
            obj4->show();
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
            obj8->setPrice(example_price);
            obj8->show();
            obj10->show();
            break;
        }     

        case 7:{
            std::cout<<"\nEnter Mixed headphones specifications:\n";
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
            std::cout<<"\nNumer of Colors: ";
            std::cin>>nr;
            std::cout<<"\n";
            obj11= new Mixed(name, price,sensitivity, frequency_response, input_power, nr);
            obj11->show();
            Mixed* obj12 = new Mixed(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_nr);
            
            //Mixed* obj13= new Mixed(*obj12); Copy constructor
            //*obj12=*obj11; Copy assignment operator

            break;
        } 

         case 8:{
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
            Wireless wireless_temp(name, price,sensitivity, frequency_response, input_power, range);
            obj15=&wireless_temp;
            Wireless* obj13 = &wireless_temp;
            *obj15=*obj13;
            break;
        }

         case 9:{
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
            Wired wired_temp(name, price,sensitivity, frequency_response, input_power, wire_length);
            obj14=&wired_temp;
            Wired* obj16 = &wired_temp;
            *obj14=*obj16;
            break;
        }  

         case 10:{
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
            Wired wired_temp(name, price,sensitivity, frequency_response, input_power, wire_length);
            Wired wired1(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_wire_length);
            Wired wired2(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_wire_length);

            wired2 = wired1 = wired_temp;
            wired_temp.show();
            wired1.show();
            wired2.show();

            break;
        } 

        case 11:{
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
            std::unique_ptr<Wired> obj3 = std::make_unique<Wired>(name, price,sensitivity, frequency_response, input_power, wire_length);
            std::unique_ptr<Wired> obj5 = std::make_unique<Wired>((Wired&)*obj3);
        
            obj3->show();
            obj5->show();
            break;
        }

        case 12:{
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

            std::shared_ptr<Catalogue> cat = std::make_shared<Catalogue>("Bose");

            Wireless* obj10 = new Wireless(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_range);
            Wireless* obj4 = new Wireless(name, price,sensitivity, frequency_response, input_power, range);

            obj10->addToCatalogue(cat.get());
            cat->show();

            shared_ptr<Catalogue> cat2(cat);

            obj4->addToCatalogue(cat2.get());
            cat2->show();
            
            
            break;
        }

        case 13:{
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
            Wired* wired1= new Wired(example_name,example_price,example_sensitivity, example_frequency_response, example_input_power, example_wire_length);
            Catalogue * cat= new Catalogue("Bose");
            mutex mut;
            
            wired1->addToCatalogue(cat);
            
            obj1->addToCatalogue(cat);
            cat->show();
            std::cout<<"\n";
            
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