#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){  //for swaping the number
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print (vector<int >v){  //for printing the ans
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
} 

//Function for reversing the array from any position m
void reverseSubArray(vector<int>& arr,int m){
    int s=m+1,e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    vector<int>v;
        v.push_back(11);
        v.push_back(7);
        v.push_back(3);
        v.push_back(12);
        v.push_back(4);
        vector<int>ans=reverse(v);
        cout<<"printing reverse array"<<endl;
        print (ans);
 
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    // Create a vector
    int m = 4;           // Specify the value of m
    reverseSubArray(arr, m);    // Call the reverseSubArray function
    cout << "Modified array: ";      // Print the modified vector
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



        
    return 0;
}