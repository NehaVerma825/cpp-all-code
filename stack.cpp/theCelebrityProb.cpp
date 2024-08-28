#include<iostream>
#include<stack>
#include<vector>
using namespace std;



  bool knows(vector<vector<int>& mat,int a, int b,int n){
      if(mat[a][b] ==1){
          return true;
      }
      else{
          return false; 
      }
  }
  
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> & mat) {
     stack<int>s;
     int n;
     //step.1:push all element in stack
     for(int i= 0 ; i<n ;i++){
         s.push(i);
     }
     
     //step.2:  get 2 element and compare them
     while(s.size()> 1){  
         int a = s.top();
         s.pop();
         
         int b= s.top();
         s.pop();
         
         //if a knows b then  b is celebrity and push into stack
         if(knows(mat,a,b ,n)){
             s.push(b);
         }
         else{
             s.push(a);
         }
     }
     int ans = s.top();
     //step.3: single element in stack -  potential celebrity
     //so verify it
     bool rowCheck = false;
     int zeroCount = 0;
     for(int i = 0 ; i<n ; i++){
         if(mat[ans][i]==0){
             zeroCount++;
         }
         
         //all zeros
         if(zeroCount == n){
             rowCheck = true;
              
         }
         
         //col check
         bool colCheck = false;
         int oneCount = 0 ;
         for(int i = 0 ; i<n ; i++){
              if(mat[i][ans]==0){
             oneCount++;
            }
         }
         
         if(oneCount == n-1){
             colCheck = true;
             
         }
         
         if(rowCheck == true && colCheck == true){
             return ans;
         }
         else{
             return  -1;
         }
     }
     
    }


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } 