#include<iostream>
using namespace std;

void maxmin(int array[],int size){
   int max,min;
   if (array[0]>array[1])
   {
       max = array[0];
       min = array[1];
   }
   else
   {
       min = array[0];
       max = array[1];
   }
   
   
   for (int i = 2; i < size; i++)
   {
       if (array[i]>max)
       {
           max = array[i];
       }
       else if (array[i]<min)
       {
           min = array[i];
       }
         
   }
   cout<< "The maximum element in this array is "<<max<<endl;
   cout<< "The minimum element in this array is "<<min<<endl;
   
   

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
    
    cout<<"--------------------Topic Array: 2.Max and Min-------------------"<<endl;
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
    maxmin(in_arr,n);

    
    
}