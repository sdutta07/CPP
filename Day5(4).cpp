#include<bits/stdc++.h>

using namespace std;

// approach 1
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            for(int j =0;j<nums.size(),i!=j;j++){
                if(nums[i] == nums[j])return 1;
            }
        }
        return 0;
    }

// approach2 O(nlogn)
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i = 0;i<nums.size();i++){
            if(i-1 >= 0 && nums[i-1] == nums[i])return 1;
            else if(i+1 < nums.size() && nums[i+1] == nums[i])return 1;
        }
        return 0;
    }

int main(){

    return 0;
}
