#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void countsetbit(int n){
	int binary[32];
	int i = 0;
	int set = 0;
	while(n>0){
		binary[i] = n % 2;
		n = n/2;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (binary[j] == 1)
		{
			set++;
		}
		
	}
	cout<<"The number of set bit are: - "<<set;
	

}

int main(){
    cout<<"--------------------Topic Array: 2.Max and Min-------------------"<<endl;
    // ------------------------------------------------------------------------------------------
    
    int in_dec;
    cout<<"Enter the Integer for which you want to check set bit"<<endl;
    cin>>in_dec;
    countsetbit(in_dec);

}



