#include <iostream>
#include <cstring>
using namespace std;

class headphones{
    protected: 
    char name[100];
    float price;
    public:
    headphones( char*n, float p){
        strcpy(name,n);
        price=p;
    }
    virtual void show(){

    }
};

class wired: public headphones{
    int wire_length;
    public:
    wired(char * n, float p, int l): headphones(n,p){
        wire_length=l;
    }
    void show();
};

class wireless: public headphones{
    int broadband;
    public:
    wireless(char * n, float p, int b): headphones(n,p){
        broadband=b;
    }
    void show();
};

void wired::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nWire length:  "<<wire_length;

}



void wireless::show(){
    cout<<"\nName: "<<name;
    cout<<"\nPrice: "<<price;
    cout<<"\nBroadband:  "<<broadband;

}

int main(){
    char* name = new char[100];
    float price;
    int wire_length, broadband;
    cout<<"\n Enter wired headphones specifications\n";
    cout<<"\n Name: ";
    cin>>name;
    cout<<"\n Price: ";
    cin>>price;
    cout<<"\n Wire length: ";
    cin>>wire_length;
    wired headphones1(name, price, wire_length);
    cout<<"\n Enter wireless headphones specifications\n";
    cout<<"\n Name: ";
    cin>>name;
    cout<<"\n Price: ";
    cin>>price;
    cout<<"\n Broadband: ";
    cin>>broadband;
    wireless headphones2(name, price, broadband);

    //headphones* list[2];
   //list[0] = headphones1;
    //list[1] = headphones2;
    cout<<"\n Headphones: ";
    cout<<" Wired: ";
    headphones1.show();
    cout<<"\n";
    cout<<" Wireless: ";
    headphones2.show();
    return 0;
}