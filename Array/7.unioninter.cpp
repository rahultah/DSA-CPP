
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void revarr(int arr1[],int arr2[], int sm, int sn){
    int i = 0;
    int j = 0;
    int k = 0;
    int uni[100];

    while(i<sm && j<sn){
        if (arr1[i]<arr2[j])
        {
            uni[k] = arr1[i];
            k++;
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            uni[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            uni[k] = arr1[i];
            i++;
            j++;
            k++;

        }
        
        
    }
    cout<<"The Intersection of the arrays is: - ";
    for (int i = 0; i < k; i++)
    {
        cout<<uni[i];
    }
    cout<<endl;

    //------------------------------------------------------------------------------------------
    while (i<sm)
    {
        uni[k] = arr1[i];
        i++;k++;
    }                                                               //To Get Intersection of the two arrays comment out this code
    while (j<sn)
    {
        uni[k] = arr2[j];
        j++;k++;
    }
    //------------------------------------------------------------------------------------------
    cout<<"The Union of the arrays is: - ";
    for (int i = 0; i < k; i++)
    {
        cout<<uni[i];
    }
    cout<<endl;
    
    

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
    int arr1[] = { 3,4,5,6 }; 
    int arr2[] = { 1,2,3 }; 
    
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int n = sizeof(arr2) / sizeof(arr2[0]); 
    revarr(arr1,arr2,m,n);
    
    

}