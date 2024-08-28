#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(2);
    cout<<"finding 7-> "<<binary_search(v.begin(),v.end(),7)<<endl;
//lower_bound function returns an iterator pointing to the first element in the range that is not less than the target value.
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
//upper_bound function returns an iterator pointing to the first element in the range that is greater than the target value
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    int a=12;
    int b=13;
    cout<<"max-> "<<max(a,b)<<endl;
    cout<<"min-> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"value of a becomes-> "<<a<<endl;

    string s="neha";
    reverse(s.begin(),s.end());
    cout<<"string after reverse-> "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }



}
