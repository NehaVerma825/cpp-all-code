#include<iostream> 
#include<queue>
using namespace std;

int main(){
    //create a queue
    queue<int>q;
    q.push(4);
    cout<<"front of queue is: "<<q.front()<<endl;
    q.push(6);
    cout<<"front of queue is: "<<q.front()<<endl;
    q.push(2);
    cout<<"front of queue is: "<<q.front()<<endl;

    q.push(8);

    cout<<"size of queue is: "<<q.size() << endl;
    q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();


    if(q.empty()){
        cout<< " queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    cout<<q.back();

    

}