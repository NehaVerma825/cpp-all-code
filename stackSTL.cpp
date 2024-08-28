#include<iostream>
#include<stack>   //LIFO
using namespace std;
int main(){
    stack<string>s;
    s.push("Neha");
    s.push("Verma");
    s.push("Nadanwar");
    cout<<"top element-> "<<s.top()<<endl;

    s.pop();
    cout<<"top element after pop-> "<<s.top()<<endl;
    cout<<"empty or not->"<<s.empty()<<endl;
    cout<<"size-> "<<s.size()<<endl;
}