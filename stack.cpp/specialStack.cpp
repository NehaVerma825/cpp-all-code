#include<iostream>
using namespace std;
#include <stack>
class SpecialStack {
    //define data member
    stack<int>s ;
    int mini;
    public:
        
    void push(int data) {
        // for first element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                int val = 2* data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);  
            }
        }
    }

    int pop() {
        if(s.empty()){ //underflow condition
            return -1;
        }
        int curr = s.top();
        s.pop();
        if( curr> mini ){
            return curr;
        }
        else{
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
       
    }

    int top() {
        if(s.empty()){
            return -1;
        }
         int curr = s.top();

        if(curr <mini){
            return mini;
        }
        else{
            return curr;
        }
    }
    bool isEmpty(){
        return s.empty();
    }


    int getMin() {
        if(s.empty()){
            return -1;
        }
         return mini;
    }  
};
int main() {
    SpecialStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(5);
    
    cout << "Current top: " << stack.top() << endl;
    cout << "Minimum element: " << stack.getMin() << endl;
    stack.pop();
    cout << "Minimum element after pop: " << stack.getMin() << endl;

    return 0;
}