#include<iostream>
using namespace std;
#include<vector>

//vector<vector<int>>& ans: A reference to a vector of vectors of integers.store all subsets.
//vector<int> output: A vector of integers representing the current subset being formed.
//int index: An integer representing the current index in nums being considered.
//vector<int>& nums: A reference to the input vector  for which subsets are to be generated.

void solve(vector<vector<int>>& ans, vector<int> output, int index, vector<int>& nums){
        //base case -> solving using recursion
        if(index >=nums.size()){
            ans.push_back(output);
            return;
        } 
        
        // for skipping the duplicate value
        int idx = index + 1;   
        while(idx < nums.size() && nums [idx] == nums[idx-1])
        idx++;  

        //recursive call 
        //exclude
        solve(ans,output,idx ,nums);
            
        //include   
        int element = nums[index];
        output.push_back(element);
        solve(ans, output, index+1, nums);  
     }

 vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(ans,output,index , nums);
        return ans;
        }     

int main() {
    vector<int> nums = {1, 2, 2};  // Example input
    vector<vector<int>> result = subsets(nums);

    // Print the subsets
    for (int i = 0; i < result.size(); i++) {
    cout << "{ ";
    for (int j = 0; j < result[i].size(); j++) {
        cout << result[i][j] << " ";
    }
    cout << "}" << endl;
    }

    return 0;
}