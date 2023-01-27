#include<bits/stdc++.h>
using namespace std;

// approach 1 O(n^2)
int maxSumSubarr(vector<int>&v){
    int maxi = 0;
    for(int i = 0;i<v.size();i++){
        int s = 0;
        for(int j = i;j<v.size();j++){
            s+=v[j];
            maxi = max(maxi,s);
        }
    }

    return maxi;
}

// approach 2 
// kadane's algo
int maxSumSubarr(vector<int>&v){
    int s = 0;
    int maxi = INT_MIN;
    for(int i = 0;i<v.size();i++){
        s+=v[i];
        maxi = max(maxi,s);
        if(s < 0){
            s = 0;
        }
    }
    return maxi;
}

int main(){

    return 0;
}
