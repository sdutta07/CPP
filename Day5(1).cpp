#include<bits/stdc++.h>

using namespace std;
  
//   approach 1
vector<int> mergeArr(vector<int>&v1,vector<int>&v2){
    vector<int>ans;
    for(int i = 0;i<v1.size();i++)ans.push_back(v1[i]);
    for(int i = 0;i<v2.size();i++)ans.push_back(v2[i]);
    sort(ans.begin(),ans.end());
    return ans;
}

//   approach 2
vector<int> mergeArr(vector<int>&v1,vector<int>&v2){
    vector<int>ans;
    int i = 0;
    int j = 0;
    while(i<v1.size() && j < v2.size()){
        if(v1[i] <= v2[j]){
            ans.push_back(v1[i]);
            i++;
        }else{
            ans.push_back(v2[j]);
            j++;
        }
    }

    while(i < v1.size()){
        ans.push_back(v1[i]);
        i++;
    }

    while(j < v2.size()){
        ans.push_back(v2[j]);
        j++;
    }

    return ans;
}


int main(){

    return 0;
}
