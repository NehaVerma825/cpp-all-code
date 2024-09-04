#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//queue reversal using recursion 
//TC= O(n), SC= O(n) if we consider the function call stack else O(1).

void reverseUsingRecursion(queue < int > & q) {
    if (q.empty()) {
        // If the queue is empty, return.
        return;
    }

    // Store the front element in a variable.
    int element = q.front();
    q.pop();

    // Recursively call for the rest of the queue.
    reverseUsingRecursion(q);

    // Push back the stored element.
    q.push(element);
}


// Queue reversal using stack   -TC= O(n) , SC= O(n)
queue<int> revUsingStack(queue<int>& q) {
    stack<int> s;
    
    // Transfer elements from queue to stack
    while (!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // Transfer elements back from stack to queue
    while (!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    return q;
}

// Function to print queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    
    // Inserting elements into the queue using loop
    for (int i = 1; i <= 10; i++) {
        q.push(i);
    }
    
    cout << "Queue before Reversing: ";
    printQueue(q);
    
    // Reversing the queue using stack
    //revUsingStack(q);

    //Reversing the queue using stack
    reverseUsingRecursion(q);




    cout << "Queue after Reversing: ";
    printQueue(q);

    return 0;
}