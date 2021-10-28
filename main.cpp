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
};

class Wired: public Headphones{
    int wire_length;
    public:
    Wired(char * n, float p, int l): Headphones(n,p){
        wire_length=l;
    }
    ~ Wired() { 
        cout << "Destruct headphones" << endl; }
    void show();
};

class Wireless: public Headphones{
    int broadband;
    public:
    Wireless(char * n, float p, int b): Headphones(n,p){
        broadband=b;
    }
    ~ Wireless() { 
        cout << "Destruct headphones" << endl; }
    void show();
};

void Wired::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nWire length:  "<<wire_length;

}



void Wireless::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nBroadband:  "<<broadband;

}

int main(){
    char* name = new char[100];
    float price;
    int wire_length, broadband,option;
    bool done = false;
    Headphones* obj;
    while (1)
    {
        cout<<"1 - Wired | 2 - Wireless | 0 - Quit: ";
        cin>>option;

        switch (option)
        {
        case 1:
            cout<<"\n Enter wired headphones specifications\n";
            cout<<"\n Name: ";
            cin>>name;
            cout<<"\n Price: ";
            cin>>price;
            cout<<"\n Wire length: ";
            cin>>wire_length;
            obj=  new Wired (name, price, wire_length);
            break;

        case 2:
            cout<<"\n Enter wireless headphones specifications\n";
            cout<<"\n Name: ";
            cin>>name;
            cout<<"\n Price: ";
            cin>>price;
            cout<<"\n Broadband: ";
            cin>>broadband;
            obj=  new Wireless(name, price, broadband);
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