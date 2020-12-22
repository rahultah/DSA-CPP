#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void rotate(int array[], int size){
    int last = array[size-1];
    for (int i = size-1; i > 0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = last;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    
    

}

int main(){

    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    // cout<<size<<endl;
    rotate(array,size);

}