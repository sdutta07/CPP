#include<bits/stdc++.h>

using namespace std;

// approach 1
bool checkPalindrome(string s){
    // string str = "";
    // for(int i = s.size()-1;i>=0;i++){
    //     str+=s[i];
    // }

    string str = s;
    reverse(str.begin(),str.end());

    return (str == s);
}

// appraoch 2
bool checkPalindrome(string s){
    int i = 0;
    int j = s.size()-1;

    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else return 0;
    }

    return 1;
}


int main(){
    string str = "abcd";
    string str2 = "abba";

    return 0;
}
