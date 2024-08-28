#include<iostream>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p2.second <p1.second) return true;
    if(p1.second >p2.second) return false;
    //if they are same
    if(p1.first>p2.first) return true;
    return false;
}
void explainExtra(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);  
    sort(a,a+n,greater<int>); // greater<int> for sorting in decreasing order


    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort according to second element
    //if 2nd element is same sort according to first element but in decreasing order
    sort(a,a+n,comp);//comp ->function for sorting acc to question


    int num=7;
    int cnt_setbit=__builtin_popcount();//counts no of set bit

    long long num=124342345422;
    int cnt_setbit=__builtin_popcountll();
    string s="123";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;

    }while(next_permutation(s,begin(),s.end()));
    int maxi=*max_element(a,a+n);  //for all possible combination of 123



}

int main(){
    

}