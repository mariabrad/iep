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

class Wired: public Headphones{
    int wire_length;
    public:
    Wired(char * n, float p, int l): Headphones(n,p){
        wire_length=l;
    }
    ~ Wired() { 
        std::cout << "Destruct headphones" << std::endl; }
    Wired(const Wired&) = delete; 
    Wired& operator=(const Wired&) = delete; 
    Wired(Wired&&) = delete; 
    Wired& operator=(Wired&&) = delete;
    void show();
};

class Wireless: public Headphones{
    int range;
    public:
    Wireless(char * n, float p, int r): Headphones(n,p){
        range=r;
    }
    ~ Wireless() { 
        std::cout << "Destruct headphones" << std::endl; }

    Wireless(const Wireless&) = delete; 
    Wireless& operator=(const Wireless&) = delete; 
    Wireless(Wireless&&) = delete; 
    Wireless& operator=(Wireless&&) = delete;
    void show();
};

void Wired::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nWire length:  "<<wire_length;

}
void Wireless::show(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nPrice: "<<price;
    std::cout<<"\nrange:  "<<range;

}

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
            obj=  new Wired (name, price, wire_length);
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