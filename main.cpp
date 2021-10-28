#include <iostream>
#include <cstring>

using namespace std;

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
        cout << "Destruct headphones" << endl; }
    virtual void show(){

    }
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
        cout << "Destruct headphones" << endl; }
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
        cout << "Destruct headphones" << endl; }

    Wireless(const Wireless&) = delete; 
    Wireless& operator=(const Wireless&) = delete; 
    Wireless(Wireless&&) = delete; 
    Wireless& operator=(Wireless&&) = delete;
    void show();
};

void Wired::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nWire length:  "<<wire_length;


void Wireless::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nrange:  "<<range;

}

int main(){
    char* name = new char[100];
    float price;
    int wire_length, range, option;
    bool done = false;
    Headphones* obj;
    while (1)
    {
        cout<<"1 - Wired | 2 - Wireless | 0 - Quit: ";
        cin>>option;

        switch (option)
        {
        case 1:
            cout<<"\n Enter wired headphones specifications:\n";
            cout<<"\n Name: ";
            cin>>name;
            cout<<"\n Price: ";
            cin>>price;
            cout<<"\n Wire length: ";
            cin>>wire_length;
            obj=  new Wired (name, price, wire_length);
            cout<<"\n";
            break;

        case 2:
            cout<<"\n Enter wireless headphones specifications:\n";
            cout<<"\n Name: ";
            cin>>name;
            cout<<"\n Price: ";
            cin>>price;
            cout<<"\n Range: ";
            cin>>range;
            cout<<"\n";
            obj=  new Wireless(name, price, range);
            break;    

        case 0:
            done = true;
            break;
        }

        if(done) 
        break;

        cout<<endl;
    }

    return 0;
}


    //headphones* list[2];
    //list[0] = headphones1;
    //list[1] = headphones2;
    //cout<<"\n Headphones: ";
    //cout<<" Wired: ";
    //headphones1.show();
    //cout<<"\n";
    //cout<<" Wireless: ";
    //headphones2.show();
    //return 0;