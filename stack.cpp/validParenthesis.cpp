#include<iostream>
#include<stack>
using namespace std;

#include <iostream>
#include <stack>
using namespace std;

// Function to check if the parenthesis in the string are valid
bool isValidParenthesis(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If opening bracket, push into stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            // For closing bracket, check stack top and pop
            if (!st.empty()) { // Before checking stack top, check stack is not empty
                char top = st.top();
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    
    // If stack is empty, all parentheses are matched correctly
    return st.empty();
}

int main() {
    string s = "{[())]}";
    if (isValidParenthesis(s)) {
        cout << "Valid Parenthesis" << endl;
    } else {
        cout << "Invalid Parenthesis" << endl;
    }

    return 0;
}
