#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};

class B: public A{  //B child class of class A
    public:
    void func2(){
    cout<<"inside function 2 "<<endl;
    }    
};

class C: public A{   //C child class of class A
    public:
    void func3(){
    cout<<"inside function 3" <<endl;
    }
};


int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func2();
    object2.func1();

    C object3;
    object3.func1();
    // object3.func2();  //it will give error as class C not inheritant with class B
    object3.func3();

}