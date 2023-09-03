#include<iostream>
#include<cstring>
using namespace std;
//BLUEPRINT
class Car{
public:
//DATA MEMBERS :Name,price,model,seats
    char *name;
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
        name=NULL;
    }
    Car(char *n,int p,int m,int s){
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        model=m;
        seats=s;
    }
    Car(Car &x){
        name=new char[strlen(x.name)+1];
        strcpy(name,x.name);
        price=x.price;
        model=x.model;
        seats=x.seats;


    }
    void operator=(Car &X){
        if(name!=NULL){
            delete[] name;
        }
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
        seats=X.seats;

    }
    void setPrice(int p){
        if(p>100 and p<200){
            price=p;
        }
        else{
            price=150;
        }
    }
    int getprice(){
        return price;
    }
    void setname(char *n){
        if(name!=NULL){
            delete[] name;
        }
        name=new char(strlen(n)+1);
        strcpy(name,n);
        
    }
    

};
int main(){
    Car c;// c IS AN OBJECT OF CLASS Car
    c.setname("BMW");
    c.setPrice(180);
    c.model=2020;
    c.seats=5;
  

    Car b;
    b.setname("AUDI");
    b.setPrice(200);
    b.model=2023;
    b.seats=2;

    c.print();
    b.print();
   

    
}