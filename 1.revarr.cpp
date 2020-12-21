#include<iostream>
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
    
    cout<<"--------------------Topic Array: 1.Reversre Array-------------------"<<endl;
    cout<<"Enter the size of you array"<<endl;
    cin>>n;
    int in_arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Number"<<endl;
        cin>>in_arr[i];
    }
    cout<<"Input Array is"<<endl;
    printarr(in_arr, n);
    
    revarr(0,in_arr,n-1);
    cout<<"Reverse Array is"<<endl;
    printarr(in_arr, n);

}