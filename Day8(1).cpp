#include<bits/stdc++.h>
using namespace std;

// approach 1
int pivotIndex(vector<int>& nums) {
    vector<int>pre(nums.size(),0);
    pre[0] = nums[0];
    for(int i = 1;i<nums.size();i++){
        pre[i] = pre[i-1]+nums[i];
    }
    vector<int>suf(nums.size(),0);
    suf[nums.size()-1] = nums[nums.size()-1];
    for(int i = nums.size()-2;i>=0;i--){
        suf[i] = suf[i+1]+nums[i];
    }

    for(int i = 0;i<nums.size();i++){
        if(i == 0){
            if(suf[i+1] == 0)return 0;
        }else if(i == nums.size()-1){
            if(pre[i-1] == 0)return i;
        }else{
            if(pre[i-1] == suf[i+1])return i;
        }
    }

    return -1;
}

// approach 2
int pivotIndex(vector<int>& nums) {
    int s = 0;
    for(int i = 0;i<nums.size();i++)s+=nums[i];

    for(int i = 0;i<nums.size();i++){
        if(i == 0 && s - nums[i] == 0){
            return i;
        }else if(s-nums[i]-nums[i-1] == nums[i-1])return i;
        if(i>0)nums[i]+=nums[i-1];
    }

    return -1;
}

int main(){

    return 0;
}
