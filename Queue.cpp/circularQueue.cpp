#include<iostream>
#include<queue>
using namespace std;
#include <bits/stdc++.h> 
class CircularQueue{
    int* arr;
    int qfront;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size= n;
        arr = new int[size];
        qfront = rear = -1;

    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //weather queue is fulll or not
       if((qfront ==0 && rear == size-1) ||(rear == (qfront-1)%(size-1))){
           //cout<< " queue is full"<<endl;
           return false;
       }
       else if(qfront == -1){  //first element to push
           qfront = rear = 0;
           
       }
       else if(rear == size- 1 && qfront !=0){//to maintain cyclic nature 
       rear = 0;
       
       }
       else{ // normal case
           rear ++;
           
       }
       arr[rear] = value;
       return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(qfront == -1){  // to check queue is empty
            //cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[qfront];
        if(qfront == rear){  //single element is present
            qfront = rear = -1;
        }
        else if(qfront == size - 1){
            qfront = 0; //to maintain cyclic nature 
        }
        else {
            qfront ++;
        }
        return ans;

    }
};

int main(){


    return 0;
}
