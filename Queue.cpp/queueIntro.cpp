#include<iostream> 
#include<queue>
using namespace std;

int main(){
    //deque STL 
    deque<int> d;
    d.push_front(5);
    d.push_back(8);
     d.push_back(8);
      d.push_back(8);
    cout<<d.front()<<endl;
    cout<<d.back() <<endl;

    // d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back() <<endl;
    d.pop_back();
    if(d.empty()){
        cout<< "queue is empty "<<endl;
    }
    else{
        cout<<" not empty"<<endl;
    }
   cout<< d.front();
    
   



 /*
    //create a queue  : queue STL
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

    */

    

}