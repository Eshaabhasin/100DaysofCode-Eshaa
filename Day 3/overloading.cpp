#include<iostream>
#include<cstring>
using namespace std;
//BLUEPRINT
class Car{
public:
//DATA MEMBERS :Name,price,model,seats
    char name[100];
    int price;
    int model;
    int seats;


    void print(){
    cout<<"NAME:"<<name<<endl;
    cout<<"PRICE:"<<price<<endl;
    cout<<"MODEL:"<<model<<endl;
    cout<<"SEATS:"<<seats<<endl<<endl;
    }
    Car(){
        cout<<"INSIDE DEFAULT CONSTRUCTOR"<<endl;//default constructor
    }
    Car(char *n,int p,int m,int s){
        cout<<"INSIDE PARAMETRIZED CONSTRUCTOR";
        strcpy(name,n);
        price=p;
        model=m;
        seats=s;
    }
    Car(Car &x){
        cout<<"INSIDE COPY CONSTRUCTOR";
        strcpy(name,x.name);
        price=x.price;
        model=x.model;
        seats=x.seats;


    }
    void operator=(Car &X){
        cout<<"INSIDE COPY ASSIGNMENT OPERATOR";
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
        seats=X.seats;

    }
};
int main(){
    Car c;// c IS AN OBJECT OF CLASS Car
    strcpy(c.name,"BMW");
    c.price=100;
    c.model=2020;
    c.seats=5;
  

    Car b;
    strcpy(b.name,"AUDI");
    b.price=200;
    b.model=2023;
    b.seats=2;

    Car d("MARUTI",50,2025,10);

    Car e=d;//COPY CONSTRUCTOR
    Car f=c;


    c.print();
    b.print();
    d.print();
    e.print() ;
    f.print();

    
}