#include<bits/stdc++.h>
using namespace std;

// approach 1
    string toLowerCase(string s) {
        string ans = "";
        for (int i = 0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                int ind = s[i] -'A';
                ans+=('a'+ind);
            }else ans+=s[i];
        }
        return ans;
    }

//aproach 2
    string toLowerCase(string s) {
        string ans = "";
        for (int i = 0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                ans+=(s[i]+32);
            }else ans+=s[i];
        }
        return ans;
    }

//approach 3
    string toLowerCase(string s) {
        string ans = "";
        for (int i = 0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                ans+=tolower(s[i]);
            }else ans+=s[i];
        }
        return ans;
    }



int main(){

    return 0;
}
