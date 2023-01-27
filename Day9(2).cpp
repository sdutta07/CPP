class Solution {
public:

//Aproach 1
    // int removeElement(vector<int>& nums, int val) {
    //     vector<int>v;
    //     for(int i = 0;i<nums.size();i++){
    //         if(nums[i] == val)continue;
    //         else v.push_back(nums[i]);
    //     }

    //     for(int i = 0;i<v.size();i++)nums[i] = v[i];

    //     return v.size();
    // }
    
    //Aproach 2

    int removeElement(vector<int>& nums, int val) {
        int c =0 ;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == val)c++;
            else nums[i-c] = nums[i];
        }

        return nums.size() - c;
    }

};
