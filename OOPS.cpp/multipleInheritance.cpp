#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }

};

class Human{
    public:
    string color;
    
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};


//Multiple Inheritance
class hybrid :public Animal,public Human{

};




int main(){
  hybrid obj1;
  obj1.speak();
  obj1.bark();





  return 0;
   
}