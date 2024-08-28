#include<iostream>
using namespace std;

// searching an element in an array
bool isPresent(int arr[3][3],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        } 
    }
    return 0;
}

//To print row wise sum
void printRowElemtSum(int arr[][3],int i,int j){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";   
     }
     cout<<endl;
}

//To print column wise sum
void printColElemtSum(int arr[][3],int i,int j){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";   
     }
     cout<<endl;
}

int largestRowSum(int arr[][3],int row,int colm){
    int maxi=INT32_MIN; // for finding sum or row elements
    int rowIndex =-1;  //for finding row no of maximum sum
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<colm;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }   
     }
     cout<<"the maximum sum is "<<maxi<<endl;
return rowIndex;

}

int main(){
    //CREATING  2d Array
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,16,15};//  defoult Initialise by row wise

                    // row 1            row 2               row 3
    //int arr[3][4]={{1, 11 ,111, 1111},{2, 22, 222, 2222},{3, 33, 333, 3333}};
    int arr[3][3];

    //taking input-> row wise
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //taking input-> column  wise
    /*for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }   */

    //for printing
    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search: ";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,3)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    printRowElemtSum(arr,3,3);
    printColElemtSum(arr,3,3);

    int ansIndex= largestRowSum(arr,3,3);
    cout<<"max row is at index "<<ansIndex<<endl;







    



    return 0;
}