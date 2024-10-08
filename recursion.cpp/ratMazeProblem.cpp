#include<iostream>
using namespace std;

    bool isSafe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>> &m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0  && m[x][y]==1 ){
        return true;
    }
    else {
       return false;
    }
   }
    
    void solve(vector<vector<int>> &m, int n,vector<string> &ans, int x,int y,
     vector<vector<int>> &visited,string path ){
         //you have reached x,y here
         //base case
         if(x==n-1 && y==n-1){
             ans.push_back(path);
             return;
         }
         visited[x][y]=1;
         //4 choise LRUD
         //down case
         int newx=x+1;
         int newy=y;
         if(isSafe(newx,newy,n,visited,m)){
             path.push_back('D');
             solve(m,n,ans,newx,newy,visited,path);
             path.pop_back();
             
         }
         
         //up case
         newx=x-1;
         newy=y;
         if(isSafe(newx,newy,n,visited,m)){
             path.push_back('U');
             solve(m,n,ans,newx,newy,visited,path);
             path.pop_back();
             
         }
         
         //left case
          newx=x;
          newy=y-1;
         if(isSafe(newx,newy,n,visited,m)){
             path.push_back('L');
             solve(m,n,ans,newx,newy,visited,path);
             path.pop_back();
             
         }
         
         //right case
         newx=x;
         newy=y+1;
         if(isSafe(newx,newy,n,visited,m)){
             path.push_back('R');
             solve(m,n,ans,newx,newy,visited,path);
             path.pop_back();
             
         }
         
         visited[x][y]=0;//for back track, freeing up space

         vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        if(m[0][0]==0){  //when starting block is zero 
            return ans;
            
        }
        int srcx=0;
        int srcy=0;
         vector<vector<int>>visited=m;
         //initialising with zero   
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 visited[i][j]=0;
             }
         }
         
         string path = ""; // initialize with empty string instead of space
         solve(m,n,ans, srcx,srcy,visited,path);
         sort(ans.begin(),ans.end());
         return ans;
         
        
    }
     


    int main(){
    
 }

