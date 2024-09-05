#include<iostream>
using namespace std;
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // algo
        //step1. pop first k elemrents from Q and put into the stack
        stack<int>s;
        for(int i= 0 ; i<k ; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        //step2. fetch from stack and push into Q
        while(!s.empty()){
            int value = s.top();
            s.pop();
            q.push(value);
        }
        
        //step3. fetch first (n-k) element from Q and push back at end of Q
        int t= q.size() - k;
        while(t--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
        
    }
};

int main(){




    return 0;
}