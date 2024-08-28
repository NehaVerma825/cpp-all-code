#include<iostream>
#include<vector>
using namespace std;

//shift all non zero element to left
void moveZeros(vector<int>&num){
    int nonZero=0;
    for(int j=0;j<num.size();j++){
        if(num[j]!=0){
        swap(num[j],num[nonZero]);
        nonZero++;
        }
    }
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={1,0,0,3,5,0,7,9};
    moveZeros(arr,num);
    cout << "Modified array: ";      // Print the modified vector
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    


     return 0;
}