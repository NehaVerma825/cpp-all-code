#include<iostream>
using namespace std;

//vector<vector<int>>& ans: A reference to a vector of vectors of integers.store all subsets.
//vector<int> output: A vector of integers representing the current subset being formed.
//int index: An integer representing the current index in nums being considered.
//vector<int>& nums: A reference to the input vector  for which subsets are to be generated.

    void solve(vector<vector<int>>& ans, vector<int> output, int index, vector<int>& nums) {
        //base case -> solving using recursion
        if(index >=nums.size()){
            ans.push_back(output);
            return;
        }
         //recursive call 
        //exclude
        solve(ans,output,index+1,nums);
        //include
        int element = nums[index];
        output.push_back(element);
        solve(ans,output,index+1,nums);
        
     }

    int main(){
        vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(ans,output,index ,nums);
        return ans;

        
        }
     }