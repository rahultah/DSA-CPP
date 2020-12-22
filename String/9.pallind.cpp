#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "boba";
    // string ns = "";
    int flag = 0;
    int n = s.length(); 
  
    int j = 0 ;
    for (int i = 0; i < n; i++) {
        // swap(s[i],s[n-i-1]);
        if(s[i] != s[n-i-1]){
            flag=1;
            break;

        }
        else
        {
            flag=0;
        }
        
    }
    if (flag)
    {
        cout<<"Not";
    }
    else
    {
        cout<<"is";
    }
    
    
    // if (s==ns)
    // {
    //     cout<<"It is a pallindorme"<<endl;
    // }
    // else
    // {
    //     cout<<"Not a Pallindrome"<<endl;
    // }
    
    
}