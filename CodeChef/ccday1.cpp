#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void cal(){
    int ip;
    cin>>ip;
    int wdays = 120;
    int days = 0;
    int rem_days = 0;
    string s;
    cin>>s;
 
    int n = s.length();
    // cout<<n<<endl;
    rem_days = wdays - n;
    // cout<<rem_days;
 
    char char_array[n + 1];

    strcpy(char_array, s.c_str());
 
    for (int i = 0; i < n; i++){
        // cout<<char_array[i]<<endl;
        if (char_array[i] ==  '1')
        {
            days = days+1;
        }
        
        
        
    }
    // cout<<days;   
    float cal_days = (rem_days+days);
    cal_days = cal_days/wdays;
    // cout<<cal_days;
    if (cal_days>=0.75)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cal();
    }
    // return 0;
}