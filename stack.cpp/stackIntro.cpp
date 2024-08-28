#include<iostream>
#include<stack> 
using namespace std;

class MyStack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    MyStack(int size){  //constructor
        this-> size = size; //initialising size
        arr = new int[size];//dynamically created array (memory allocation)
        top= -1;
    }

    //stack functions
    void push(int element){
        if(size - top>1 ){
            top++;
            arr[top] = element;
        }
        else
        cout<<"stack overflaw"<<endl;
    }

    void pop(){
        if(top>= 0){
            top--;
        }
        else
        cout<<"stack underflow";
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<" stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    MyStack st(5);
    st.push(43);
    st.push(48);
    st.push(76);
    st.push(76);
    st.push(76);
    st.push(76);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is wmpty"<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }


    /*
    //creating a stack
    stack<int>s;

    //push operation 
    s.push(3);
    s.push(5);
    s.pop();
    


    cout<< "printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty" <<endl;
    }
    else
    cout<<" stack is not empty"<<endl;

    cout<< s.size();
    */

    



    return 0;
}