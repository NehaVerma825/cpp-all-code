#include<iostream>
using namespace std;

    void solve(string digits, string output,int index, vector<string>&ans, string mapping[]){
        //base case
        if(index >=digits.length()){
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0'; //digit[index] giving character for integer eqvalnt int -'0'
        string value=mapping[number];//value at number in mapping
        for(int i=0;i<value.length();i++){ //calling for every value eg abc for number 2
            output.push_back(value[i]);
            solve(digits ,output ,index+1, ans , mapping);  //function call for all value of number
                output.pop_back(); //After returning from the recursion, remove the last character from 
                //output (backtracking).
            }

    int main(){
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output;
        int index=0;
//using mapping for string corresponding to number
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index, ans, mapping);
        return ans;
    }


    return 0;
}