#include<iostream>
#include<vector>
using namespace std;

vector<int>spiralOrder(vector<vector<int>> & matrix){
    vector<int>ans;
    int row =matrix.size();
    int col=matrix[0].size();
    int count =0;
    int totalElement=row*col;  //complexity=O(nm)

    //index initialisation
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
     
    while(count<totalElement){ //for count not to increase out of no of rows and colms
        //print starting row
        for(int index =startingCol; count<totalElement && index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for(int index=startingRow; count<totalElement && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row
        for(int index=endingCol; count<totalElement && index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting column
        for(int index=endingRow; count<totalElement && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    } 
    return ans;
}