#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& inputStack, int count, int size) {
    if (count == size / 2) {
        inputStack.pop();  // Pop the middle element
        return;
    }
    
    int num = inputStack.top(); //store the element before pop
    inputStack.pop();  // Remove this element from the stack for a while
    
    // Recursive call
    solve(inputStack, count + 1, size);
    
    inputStack.push(num); // Push the element back into the stack
}

void deleteMiddle(stack<int>& inputStack, int N){
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int N = s.size();  // Size of the stack
    deleteMiddle(s, N);

    // Print the stack after deleting the middle element
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
