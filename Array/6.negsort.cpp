#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(int array[],int size, int left, int right){
    while(left<=right){
        // cout<<"working"<<endl;
            if (array[left]>0 && array[right]<0)
            {
                int temp = array[left];
                array[left] = array[right];
                array[right] = temp;
                left++;
                right--;
                // cout<<array[left]<<array[right]<<endl; 
            }
            else if (array[left]<0 && array[right]>0 )
            {
                left++;
                right--;
                // cout<<array[left]<<array[right]<<endl; 

            }
            else if (array[left]<0 && array[right]<0)
            {
                left++;
                // cout<<array[left]<<array[right]<<endl; 

            }
            else
            {
                right--;
                // cout<<array[left]<<array[right]<<endl; 

            }
            
            
            
            
        }
        
    
    

}
void printarr(int array[], int size){
    cout<<"------------------------------"<<endl;
    for (int i = 0; i <size; i++)
    {
        cout<<"Output is:"<<endl;
        cout<<array[i]<<endl;
    }
    

}

int main(){
    int n;
    
    cout<<"--------------------Topic Array: 6.All Negative elements to one side-------------------"<<endl;
    cout<<"Enter the size of you array"<<endl;
    cin>>n;
    int in_arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Number"<<endl;
        cin>>in_arr[i];
    }
    cout<<"Input Array is"<<endl;
    // printarr(in_arr, n);
    sort(in_arr,n,0,n-1);
    printarr(in_arr, n);
    
    // revarr(0,in_arr,n-1);
    

}