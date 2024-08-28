#include <iostream>
#include <stack>
using namespace std;

// Function to solve the problem
void solve(stack<int> &s, int x) {
    // Base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    solve(s, x);
    s.push(num);
}

// Function to push an element at the bottom of the stack
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}

int main() {
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    
    int x = 0;
    myStack = pushAtBottom(myStack, x);
    
    // Display the stack
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
