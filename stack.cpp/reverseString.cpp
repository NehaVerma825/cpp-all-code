#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "neha";
    //creating a stack s   TC= O(n) & TC= O(n)
    stack<char> s;
    //pushing characters into stack s
    for(int i= 0; i< str.length() ; i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans= " ";
   // fetching element from stack comes in reverse order
    while(!s.empty()){//while stack not become empty 
    char ch = s.top();  
    ans.push_back(ch);

    s.pop();
    }
    cout<<" ans is: "<<ans<<endl;

    return 0;
}