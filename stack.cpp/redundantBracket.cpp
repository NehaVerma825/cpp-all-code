#include<iostream>
#include<stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char>st;
    for(int i= 0; i<s.length() ; i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*'|| ch == '/' ){
            st.push(ch);
        }
        else{
            //ch ya to ')' h ya to lower case latter
            if(ch ==')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if( top == '+' || top == '-' || top == '*'|| top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant== true){
                    return true;
                    
                }
                if(!st.empty()) st.pop();
            }
        }
    }
    return false;
}

int main(){





    return 0;
}