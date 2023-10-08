#include<iostream>
using namespace std;
void printarr(int arr[],int n);
int swap(int arr[],int n);
int main()
{
    int n=4;
    int arr[4]={1,2,3,4};
   swap(arr,4);
   printarr(arr,n);
   
    return 0;
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int swap(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1 <n)
        {
        swap(arr[i],arr[i+1]);
        }
    }
}
