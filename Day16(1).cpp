Skip to content
Mohitbisht3031
/
lpu_practice_jan23
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
lpu_practice_jan23/Day16/qus1.cpp
@Mohitbisht3031
Mohitbisht3031 day16
 History
 1 contributor
28 lines (21 sloc)  387 Bytes
/*remving adj same char*/

#include<bits/stdc++.h>
using namespace std;

void helper(string s,string&ns,int i){
    if(i>=s.size())return;

    if(ns.size() == 0){
        ns+=s[i];
    }else{
        if(ns.back() != s[i])ns+=s[i];
    }
    helper(s,ns,i+1);

    return;
}

string remove(string s){
    string ns = "";
    helper(s,ns,0);
    return ns;
}

int main(){

    return 0;
}
