#include<iostream>
#include<vector>
using namespace std;


// (I)for row wise sorted matrix
bool searchMatrix(vector<vector<int>> & matrix, int target){
    int row=matrix.size();
    int col= matrix[0].size();
    int start =0;
    int end=row*col -1;
    int mid=start +(end-start)/2;

    while(start <= end){    // time complexity =O(log(row*col))

    //by dividing(quotient) we are finding row no and by mod(remainder) we are finding column no
        int element=matrix[mid/col][mid % col];
        if(element== target){
            return 1;
        }
        if(element<target){
            start = mid+1;
        }
        else{ //element>target
            end=mid -1;
        }
        mid=start +(end-start)/2;   
    }
    return 0;
}

//(II)for row wise and col wise sorted matrix
bool searchMatrix2(vector<vector<int>> & matrix, int target){
    int row=matrix.size();
    int col= matrix[0].size();
    int rowIndex=0;
    int colIndex=col -1;
    
    while(rowIndex<row && colIndex >=0){        // we are starting searching from firstmost row 
        int element=matrix[rowIndex][colIndex];  // and last column index
        if(element==target){
            return 1;
        }
        if(element<target){
            rowIndex++;
        }
        else{  //element>target
            colIndex--;
        }
    }
    return 0;
}
