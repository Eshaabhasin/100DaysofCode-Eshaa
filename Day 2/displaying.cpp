#include<iostream>
#include<cstring>
using namespace std;
class car{
public:
  char name[100];
  int price;
  int model;
  int seats;
  void print(){
     cout<<"Name :"<<name<<endl;
    cout<<"Price :"<<price<<endl;
    cout<<"Model :"<<model<<endl;
    cout<<"Seats :"<<seats<<endl;

  }
  
 
};
int main(){
    car c;
    strcpy(c.name,"polo");
    c.price=222;
    c.model=2023;
    c.seats=4;
  

    car d;
    strcpy(d.name,"santro");
    d.price=300;
    d.model=2022;
    d.seats=5;
    c.print();
    d.print();
   
    

}