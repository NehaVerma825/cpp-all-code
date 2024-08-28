#include<iostream>
using namespace std;

oid solve(string ans, string output, int index, vector<string>& nums) {
    // base case -> solving using recursion
    if (index >= ans.size()) {
		if(output.length()>0){
            nums.push_back(output);
		}
        
        return;
    }
    // recursive call 
    // exclude
    solve(ans, output, index + 1, nums);
    // include
    char element = ans[index];
    output.push_back(element);
    solve(ans, output, index + 1, nums);
}
int main(){
    vector<string> subsequences(string ans) {
    vector<string> nums;
    string output = "";
    int index = 0;
    solve(ans, output, index, nums);
    return nums;
  }
}