#include<iostream>
using namespace std;

long long int squareInteger(int n){    // for integer part of square root
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol){   // for more precision decimal part
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the no.: ";
    cin>>n;
    cout<<"square root of the no in integer is "<<squareInteger(n)<<endl;
    int tempSol=squareInteger(n);
    cout<< "precise answer is "<<morePrecision(n,3,tempSol)<<endl;
    return 0;
}