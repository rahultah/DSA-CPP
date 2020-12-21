#include<iostream>
using namespace std;

int count(int array[],int size){
    cout<<"---------"<<endl;
    int zcount = 0;
    int ocount = 0; 
    int tcount = 0;
    for (int i = 0; i <size; i++)
    {
        if (array[i] == 0)
        {
            zcount++;
        }else if (array[i] == 1)
        {
            ocount++;
        }
        else 
        {
            tcount++;
        }
        
        
        
    }
    // cout<<zcount<<endl;
    // cout<<ocount<<endl;
    // cout<<tcount<<endl;
    int newarr[size];
    int cnt = 0;
    while(zcount>0){
        newarr[cnt] = 0;
        cnt++;
        zcount--;
    }
    cnt = 0;

    while(ocount>0){
        newarr[cnt] = 1;
        cnt++;
        ocount--;
    }
    cnt = 0;

    while(tcount>0){
        newarr[cnt] = 2;
        cnt++;
        tcount--;
    }
    for (int i = 0; i <size; i++)
    {
        
        cout<<newarr[i];
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
    
    cout<<"--------------------Topic Array: 5.Sort array without sorting algo-------------------"<<endl;
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
    count(in_arr,n);
    

}