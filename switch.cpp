#include<iostream>
using namespace std;
 int main(){


    // MAKING A SIMPLE CALCULATOR
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    char op;
    cout<<"Enter the operation u want to perform: ";
    cin>>op;
    switch(op){
        case '+':cout<< a+b <<endl;
        break;
        case '-':cout<< a-b <<endl;
        break;
        case '*':cout<< a*b <<endl;
        break;
        case '/':cout<< a/b <<endl;
        break;
        case '%':cout<< a%b <<endl;
        break;
        default :cout<<" please enter a valid operation"<<endl;
    }



    









 return 0;   
 }