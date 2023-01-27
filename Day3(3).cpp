#include<bits/stdc++.h>

using namespace std;
// aproach 1 O(n^2)
int findDegree(vector<int>nums) {
    int deg = 0;
    for(int i = 0;i<nums.size();i++){
        int c = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] == nums[i])c++;
        }

        if(c > deg)deg = c;
    }

    return deg;
}
// aproach 2 o(nlogn)
int findDegree(vector<int>nums) {
    int deg = 0;
    sort(nums.begin(),nums.end());
       for(int i = 0;i<nums.size();i++){
        int c = 0;
        int j;
        for( j=i;j<nums.size();j++){
            if(nums[j] != nums[i])break;
            c++;
        }
        i = j;
        if(c > deg)deg = c;
    }



    return deg;
}

// approach 3
int findDegree(vector<int>nums) {
    int deg = 1;
    int c = 1;
    sort(nums.begin(),nums.end());
    for(int i = 1;i<nums.size();i++){
        if(nums[i-1] == nums[i]){
            c++;
            if(c > deg)deg = c;
        }else{
            c = 1;
        }
    }

    return deg;
}
int main(){

    return 0;
}
