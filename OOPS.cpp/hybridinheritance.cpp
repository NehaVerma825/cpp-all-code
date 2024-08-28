#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"call inside A"<<endl;
    }
};

class C: public A{
    public:
    void func2(){
        cout<<"calling C as child of A"<<endl;
    }  
};

class B{
    public:
    void func3(){
        cout<<"call inside B"<<endl;
    }
};

class D:public B,public C{
    public:
    void func4(){
        cout<<"D hybrid of B and C"<<endl;
    }
};





int main(){
    D obj;
    obj.func3();
    
    
   
}