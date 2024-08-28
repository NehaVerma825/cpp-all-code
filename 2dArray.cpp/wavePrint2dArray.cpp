#include<iostream>
#include<vector>
using namespace std;

vector<int>wavePrint(vector<vector<int>> arr,int nRows,int mColms){
    vector<int> ans;
    for(int j=0;j<mColms;j++){
        if(j & 1){
            // odd col index->bottom to top
            for( int i=nRows-1; i>=0;i--){
                //cout<<arr[i][j]<<" ";
                ans.push_back(arr[i][j]);
            }
        }
        else{
              //0 or even index -> top to bottom
              for(int i=0;i<nRows;i++){
                //cout<<arr[i][j]<<" "<<endl;
                ans.push_back(arr[i][j]); 
              }
        }
    }
    return ans;   //time complexitiy is O(nm)

}
int main(){
    vector<vector<int>> arr(3, vector<int>(3));

    //taking input-> row wise
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //for printing
    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int> waveArray = wavePrint(arr,3,3);

    cout << "The wave array is: ";
    for (int num : waveArray) {
        cout << num << " ";
    }
    cout << endl;

    //  wavePrint(vector<vector<int>>arr,3,3);
    //  cout<<" the wave array is "<<wavePrint <<endl;


     return 0;
}