#include<iostream>
#include<queue>
using namespace std;

class KQueue {
    public:
    int k;
    int n;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;

    public:
    KQueue(int n, int k) {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++) {
            front[i] = -1;  // initializing front and rear with -1
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++) {  // updating array next
            next[i] = i + 1;  // every ith next contains its next free slot index 
        }

        next[n - 1] = -1;  // last index has no next free slot, that's why -1  
        arr = new int[n];
        freeSpot = 0;  // initially current/nearest free slot is index 0
    }

    void enqueue(int data, int qn) {
        // Check overflow
        if (freeSpot == -1) {
            cout << "No empty space present" << endl;
            return;
        }

        // Find the first free index
        int index = freeSpot;

        // Update freeSpot to the next available index
        freeSpot = next[index];  // *** Update freeSpot to point to the next available free index

        // Check whether it is the first element of the queue
        if (front[qn - 1] == -1) {
            front[qn - 1] = index;  // *** Update front to the new index since this is the first element
        } else {
            // Link the new element to the previous element in the queue
            next[rear[qn - 1]] = index;  // *** Update the 'next' of the current rear to point to the new index
        }

        // Update next
        next[index] = -1;  // *** Set next of the new index to -1, indicating the new rear of the queue

        // Update rear to the new index
        rear[qn - 1] = index;

        // Push the element into the array
        arr[index] = data;
    }

    int dequeue(int qn) {
        // Underflow check
        if (front[qn - 1] == -1) {
            cout << "Queue underflow" << endl;
            return -1;
        }

        // Find the index to pop
        int index = front[qn - 1];

        // Move front to the next element in the queue
        front[qn - 1] = next[index];  // *** Update front to point to the next element in the queue

        // Manage the freeSpot
        next[index] = freeSpot;  // *** Link the popped index to the current freeSpot, making it available
        freeSpot = index;  // *** Update freeSpot to point to the recently freed index

        return arr[index];
    }
};

int main() {
    KQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    return 0;
}
 
