#include<bits/stdc++.h>
using namespace std;

//aproach 1 TC:O(n^2)
    bool canThreePartsEqualSum(vector<int>& arr) {
        int s = 0;
        for(int i = 0;i<arr.size();i++)s+=arr[i];

        if(s%3 == 0){
            int c = 0;
            for(int i = 0;i<arr.size();i++){
                int sum = 0;
                int j = i;
                bool f = 0;
                for(;j<arr.size();j++){
                    sum+=arr[j];
                    if(sum == s/3){
                        f = 1;
                        break;
                    }
                }
                i = j-1;
                if(f)c++;
            }

            return c == 3;
        }

        return 0;
    }

//approach 2  TC:O(n)
    bool canThreePartsEqualSum(vector<int>& arr) {
        int s = 0;
        for(int i = 0;i<arr.size();i++)s+=arr[i];

        if(s%3 == 0){
            int i = 0;
            int j = arr.size()-1;
            int s1 = 0;
            int s2 = 0;
            bool ans = 0;
            while(i < j){
                if(s1 != s/3){
                    s1+=arr[i];
                    i++;
                }
                if(s2 != s/3){
                    s2+=arr[j];
                    j--;
                }

                if(s1 == s/3 && s2 == s/3 && j-i > 1){
                    ans = 1;
                    break;
                }
            }
            return ans;
        }

        return 0;
    }

int main(){

    return 0;
}
