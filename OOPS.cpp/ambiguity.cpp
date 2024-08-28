#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"inside A";
    }
};
class B{
    public:
    void func(){
        cout<< "inside B";
    }
};

class C: public A, public B{

};

int main(){
    C obj;
    // obj.func();
    obj.B::func();
}