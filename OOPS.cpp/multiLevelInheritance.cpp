#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Dog:public animal{

};

class Pug:public Dog{
  
};

int main(){
    // Dog d;
    // d.speak();
    // cout<<d.age;
    Pug p;
    p.speak();
    
}