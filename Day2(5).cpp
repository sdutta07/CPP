#include<bits/stdc++.h>

using namespace std;

// int skipX(int*arr,int x){
//     int size = sizeof(arr)/sizeof(int);
//     cout<<size<<endl;
//     int sum = 0;
//     for(int i = 0;i<size;i++){
//         cout<<i<<" ";
//         if(arr[i] == x){
//             continue;
//         }else sum+=arr[i];
//         // cout<<"printing from for"<<endl;
//     }
//     return sum;
// }

int skipX(vector<int>arr,int x){
    // int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        // cout<<i<<" ";
        if(arr[i] == x){
            continue;
        }else sum+=arr[i];
        // cout<<"printing from for"<<endl;
    }
    return sum;
}

int main(){
    int n ;
    cin>>n;
    // int arr[] = {1,2,3,5,4,7};
    vector<int>arr = {1,2,3,5,4,7};

    int ans = skipX(arr,n);

    cout<<ans<<endl;

    return 0;
}
