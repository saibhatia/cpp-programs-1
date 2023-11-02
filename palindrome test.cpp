//
// Created by Sai Bhatia on 02-11-2023.
//3 digit palindrome test
#include <iostream>
using namespace std;

int main() {
    int a,s=0,r,temp;
    cin>>a;
    temp = a;
    while(a>0){
      r = a%10;
      a = a/10;
      s = s*10+r;
    }
    if(temp == s){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }


    return 0;
}

