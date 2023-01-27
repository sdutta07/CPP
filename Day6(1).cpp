#include<bits/stdc++.h>

using namespace std;

// approach 1 O(n^2)
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i = 1;i<=nums.size();i++){
            bool f = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j] == i){
                    f = 1;
                    break;
                }
            }
            if(!f){
                ans.push_back(i);
            }
        }

        return ans;
    }

// approach 2 O(n)
vector<int> findDisappearedNumbers(vector<int>& nums) {

    vector<int>ans;
    for(int i = 0;i<nums.size();i++){
        if(nums[abs(nums[i])-1] > 0 ){
            nums[nums[i]-1]*=-1;
        }
    }

    for(int i = 0;i<nums.size();i++){
        if(nums[i] > 0)ans.push_back(i+1);
    }

    return ans;
}

int main(){

    return 0;
}
