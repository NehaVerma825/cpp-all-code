#include<iostream>
#include<queue>   //FIFO
using namespace std;
int main(){
    queue<string>q;
    q.push("Neha");
    q.push("Verma");
    q.push("Nadanwar");
    cout<<"first element-> "<<q.front()<<endl;

    cout<<"size before pop->"<<q.size()<<endl;
    q.pop();
    cout<<"first element after pop-> "<<q.front()<<endl;
    cout<<"size after pop->"<<q.size()<<endl;
    cout<<"empty or not->"<<q.empty()<<endl;
    cout<<"size-> "<<q.size()<<endl;
}
