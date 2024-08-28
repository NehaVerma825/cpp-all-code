#include<iostream>
using namespace std;

class A{   //function   overloading 
    public:
    void sayHello(char name){
        cout<<"hello neha"<<endl;
     
    }

    int sayHello(string name){
        cout<<"hello neha"<<endl;
        return 1;
    }

    void sayHello(){
        cout<<"hello neha"<<endl;
    }
};

class B{    //operator overloading 
    public:
    int a,b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1= this->a;
        int value2= obj.a;
        cout<< " output is " <<value2 - value1<<endl;
    }

    void operator()(){
        cout<<"inside the bracket"<<this->a <<endl;
    }


};

class Animal{   //runtime polymorphism
      public:
      void speak(){
        cout<<"speaking"<<endl;
      }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"bark"<<endl;
      }
};

int main(){
    Dog obj;
    obj.speak();



    // B obj1,obj2;    //operator overloading 
    // obj1.a=5;
    // obj2.a=8;
    // obj1+ obj2;
    // obj1();


    // A obj;   //function   overloading
    // obj.sayHello();





    return 0;
}