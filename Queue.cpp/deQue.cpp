using namespace std;

class Deque {
    int* arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    Deque(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
        // Check full or not 
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) {
            return false;
        } else if (front == -1) {
            front = rear = 0;
        } else if (front == 0 && rear != size - 1) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = x;  // Storing that value
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x) {
        // Check full or not 
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) {
            return false;
        } else if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;  // Storing that value
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront() {
        if (front == -1) {  // To check if deque is empty
            return -1;
        }
        int ans = arr[front];
        if (front == rear) {  // Single element is present
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;  // To maintain cyclic nature 
        } else {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear() {
        if (front == -1) {  // To check if deque is empty
            return -1;
        }
        int ans = arr[rear];
        if (front == rear) {  // Single element is present
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;  // To maintain cyclic nature 
        } else {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty() {
        return (front == -1);
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size);
    }
};


int main(){




    return 0;
}
