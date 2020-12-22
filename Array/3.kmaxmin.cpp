#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void revarr(int start, int array[], int end){
    while(start<end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start = start+1;
        end = end - 1;
    }
    

}

// void maxmin(int array[],int kmin, int kmax, int size){
//    int max,min;
   
    
//    if (array[0]>array[1])
//    {
//        max = array[0];
//        min = array[1];
//    }
//    else
//    {
//        min = array[0];
//        max = array[1];
//    }
   
   
//    for (int i = 2; i < kmin; i++)
//    {
//        if (array[i]>max)
//        {
//            max = array[i];
//        }
//        else if (array[i]<min)
//        {
//            min = array[i];
//        }
         
//    }
//    cout<< "The maximum element in this array is "<<max<<endl;
//    cout<< "The minimum element in this array is "<<min<<endl;
   
   

// }
void printarr(int array[], int size){
    cout<<"------------------------------"<<endl;
    for (int i = 0; i <size; i++)
    {
        cout<<"Output is:"<<endl;
        cout<<array[i]<<endl;
    }
    

}


int main(){
    int n,k;
    
    cout<<"--------------------Topic Array: 3.Kth Max and Min-------------------"<<endl;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;
    int in_arr[n];
    int rev_arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<"st"<<endl;
        cin>>in_arr[i];
        rev_arr[i]=in_arr[i];
    }
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    cout<<"Input Array is"<<endl;
    printarr(in_arr, n);
    sort(in_arr,in_arr+n);
    cout<<k<<"th Smallest number is"<<endl;
    cout<<in_arr[k-1]<<endl;


    // maxmin(in_arr,n);
    revarr(0,rev_arr,n-1);
    cout<<k<<"th largest number is"<<endl;
    cout<<rev_arr[k-1]<<endl;

    

    // printarr(rev_arr, n);
    

    
    
}