#include<iostream>
using namespace std;


int distinctWayToClimbStairs(long long nstair){
    //base count
    if(nstair<0){ //for stair below floor
        return0;
    }
    if(nstair==1){ //for stair at  floor
        return 1
    }

    //RC
    int ans= distinctWayToClimbStairs(nstair -1)+distinctWayToClimbStairs(nstair-2);
    return ans;
}