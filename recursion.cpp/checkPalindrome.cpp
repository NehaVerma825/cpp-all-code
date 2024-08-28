#include<iostream>
using namespace std;


bool checkPalindrom(string &str,int i){
    int n=str.length();
    int j= n-i-1;//using single pointer
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursive call
        checkPalindrom(str,i+1);
        j=j-1;
    }
}

int main(){
    string name="abcdecba";
    cout<<endl;
    bool isPalindrome = checkPalindrom(name,0);
    if(isPalindrome){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }

}