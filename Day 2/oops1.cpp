#include<iostream>
#include<cstring>
using namespace std;
class car{
public:
  char name[100];
  int price;
  int model;
  int seats;
 
};
int main(){
    car c;
    strcpy(c.name,"polo");
    c.price=222;
    c.model=2023;
    c.seats=4;
    cout<<"Name :"<<c.name<<endl;
    cout<<"Price :"<<c.price<<endl;
    cout<<"Model :"<<c.model<<endl;
    cout<<"Seats :"<<c.seats<<endl;

    car d;
    strcpy(d.name,"santro");
    d.price=300;
    d.model=2022;
    d.seats=5;
    cout<<"Name :"<<d.name<<endl;
    cout<<"Price :"<<d.price<<endl;
    cout<<"Model :"<<d.model<<endl;
    cout<<"Seats :"<<d.seats<<endl;
    

}