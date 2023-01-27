#include<bits/stdc++.h>

using namespace std;

//approach 1 TC: O(n) SC: O(n)
/*void rotateArr(vector<int>&v,int r){
//     vector<int>ans(v.size());
//     for(int i = 0;i<v.size();i++){
//         ans[(i+r)%ans.size()] = v[i];
//     }
//     for(int i = 0;i<ans.size();i++)cout<<ans[i]<<' ';
//     cout<<endl;
//     return;
 }*/

// approach 2
void rotateArr(vector<int>&v,int r){
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+r);
    reverse(v.begin()+r,v.end());
    for(int i = 0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}

int main(){

    vector<int>v = {4,3,2,7,8,2};
    rotateArr(v,2);
    return 0;
}
