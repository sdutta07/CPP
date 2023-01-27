#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cin>>num;

    int rev = 0;
    while(num){
        rev*=10;
        rev+=num%10;
        num/=10;
    }

    cout<<"reverse of the num is: "<<rev<<endl;
    return 0;
}
