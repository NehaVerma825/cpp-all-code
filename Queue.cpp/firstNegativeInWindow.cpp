#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int> dq;
    vector<long long int> ans;
    
    //process first window of K size
    for(int i =0; i<K ; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    
    //stor ans of first K size window
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
         
    }
    else{
        ans.push_back(0);
    }

    //process for remaining windows 
    for(int i = K; i<N; i++){
        //removal
        if(! dq.empty() && i- dq.front()>=K){
            dq.pop_front();
        }
        if(A[i]<0){
            dq.push_back(i);
        }
         
        
        //ans store
        if(dq.size()>0){
        ans.push_back(A[dq.front()]);
        
        }
        else{
        ans.push_back(0);
        }
    }
    return ans;
                                                 
 }

int main() {
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int N = sizeof(A) / sizeof(A[0]);
    long long int K = 2;

    vector<long long> result = printFirstNegativeInteger(A, N, K);

    // Print the result
    cout << "First negative integers for each window of size " << K << ": ";
    // for(long long num : result) {
    //     cout << num << " ";
    // }
    for(int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}