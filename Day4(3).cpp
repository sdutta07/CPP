#include<bits/stdc++.h>

using namespace std;

// approach 1 O(n^2)
    bool twoSum(vector<int>& nums, int target) {

        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if( i!=j && target-nums[i] == nums[j])return 1;
            }
        }
        return 0;
    }

    // approach 2 optimized O(nlogn)
    bool twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        while (i < j)
        {
           if(nums[i] + nums[j] == target)return 1;
           else if(nums[i]+nums[j] > target)j--;
           else {
            i++;
           }
        }
        return 0;
    }

int main(){

    return 0;
}
