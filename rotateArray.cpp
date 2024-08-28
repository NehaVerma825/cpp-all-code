#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &nums, int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];  //cyclic way me k position se shift krdega
    }
    //copy temp int num vector
    nums=temp;

    
}

int main(){
    vector<int> nums={1,4,8,23,25,56};
    rotate(nums,2);
    cout << "Modified array: ";      // Print the modified vector
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

}