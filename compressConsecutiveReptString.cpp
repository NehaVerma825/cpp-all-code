#include<iostream>
#include<string>
using namespace std;

int compress(vector<char>& chars){
    int i=0;
    int ansIndex=0;
    int n=chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && char[i]==chars[j]){
            j++;
        }
        //yha kb aaoge ,ya to vector poora travers kr diya 
        //ya fir new/diffrent character encounter kiya h

        //oldChar store krlo
        chars[ansIndex++]==chars[i];
        int count=j-i;
        if(count >1){
            //converting counting into single digits and saving in answer
            string cnt= to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;
}
int main(){
    
}