#include <iostream>
#include <stack>   //time complexcity is of O(1)

using namespace std;

void explainStack() {
    stack<int> st;  // Declare the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    cout << st.top() << endl;    // Print the top element of the stack
    cout << st.size() << endl;   // Print the size of the stack
    cout << st.empty() << endl;  // Print whether the stack is empty
}

int main() {
    explainStack();  // Call explainStack from main
    return 0;
}
