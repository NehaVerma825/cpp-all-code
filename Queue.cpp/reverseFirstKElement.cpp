#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//TC: O(n)& SC : O(n)

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // Step 1: Pop first k elements from Q and put into the stack
    stack<int> s;
    for (int i = 0; i < k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // Step 2: Fetch from stack and push into Q
    while (!s.empty()) {
        int value = s.top();
        s.pop();
        q.push(value);
    }

    // Step 3: Fetch first (n-k) elements from Q and push back at end of Q
    int t = q.size() - k;
    while (t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

int main() {
    queue<int> q;
    int n, k;

    cout << "Enter the number of elements in the queue: ";
    cin >> n;
    
    cout << "Enter the elements of the queue:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << "Enter the value of k: ";
    cin >> k;

    // Call modifyQueue directly
    queue<int> modifiedQueue = modifyQueue(q, k);

    // Print the modified queue
    cout << "Modified queue: ";
    while (!modifiedQueue.empty()) {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }
    cout << endl;

    return 0;
}
