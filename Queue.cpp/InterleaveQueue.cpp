#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)

void interleaveQueue(queue<int> &q){
    stack<int> s;
    int n= q.size();
    int halfSize = n/2;

    // Step 1: Push the first half of the queue into the stack
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements and push-back into Q (reversed first half)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the (initial) second half to the back of the queue
    for (int i = 0; i < halfSize; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Interleave the elements of the queue with the stack
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }

}

int main() {
    queue<int> q;

    // Initialize the queue 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout << "Original Queue: ";
    queue<int> temp = q; // Temporary copy for printing
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Call the interleaveQueue function
    interleaveQueue(q);

    // Output the interleaved queue
    cout << "Interleaved Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
