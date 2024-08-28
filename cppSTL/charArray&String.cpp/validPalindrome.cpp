#include<iostream>
#include <string>   
using namespace std;

bool valid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}

char convertUpperToLowerCase(char ch){  //for not case sensitive
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch - 'A'+'a'; //upper to lower case letter
        //char temp=ch - 'a'+'A'; //upper to lower case letter
        return temp;
    }
}

bool checkPalindrome(string a){
    int s=0,e=a.length()-1;
    while(s<=e){
        if((a[s])!=(a[e])){
            return 0;
        }
        else{
            s++,e--;
        }
    }
    return 1;
}

bool isValidPalindrome(string s){
        // faltu character hatao i.e; char except a to z ,A to Z and 0 to 1
        string temp=" ";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        //lower case me krdo
        for(int j=0;j<temp.length();j++){
            temp[j]=convertUpperToLowerCase(temp[j]);
        }
        return checkPalindrome(temp);

    } 

int main(){
    string  sentance;
    cout<<"enter the sentance: ";
    getline(cin,sentance);
    // cin>>sentance;
    cout<<"your sentance is "<<sentance<<endl;

    cout<<"valid palindrome or not: "<<isValidPalindrome(sentance)<<endl;
}
   