#include <iostream>
#include <queue>   //time complexcity is of O(1)   FIFO

using namespace std;

//push->O(log(n))
//pop->O(log(n))
//top-> O(1)


void explainQueue() {
    queue<int>q;  // Declare the queue
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;   //i.e; add 5 in back(last) element i.e; in 4 =4+5=9
    
    cout << q.back() << endl;    // Print the last element of the q =9
    cout << q.front() << endl;   // Prints 1
    q.pop();                     //pops first element
    cout << q.front() << " "<<endl;  // Prints 2 as front
}


void explainPeiorityQueue(){  //it queue the elements in decreasing order
    priority_queue<int>pq;   //maximum pq = max heap
    pq.push(5); //{5}
    pq.push(2);  //{5,2}
    pq.push(8);  //{8,5,2}
    pq.push(10);  //{10,8,5,2}

    cout<<pq.top()<<endl; //prints 10
    pq.pop();  // {8,5,2}
    cout<<pq.top()<<endl; //prints 8


    priority_queue<int, vector<int>, greater<int>> pqmin; //element in increasing order
    //min heap
    pqmin.push(5); //{5}   
    pqmin.push(2);  //{2,5}
    pqmin.push(8);  //{2,5,8}
    pqmin.push(10);  //{2,5,8,10}
    cout<<pqmin.top();  //prints 2

}

int main() {
    explainQueue();  // Call  from main
    explainPeiorityQueue();
    return 0;
}
