#include<iostream>
using namespace std;
void swap(int arr[],int n);
void pr(int arr[],int n);
int main()
{
    int n=4;
    int arr[4]={1,2,3,4};
    swap(arr,4);
    pr(arr,5);
    return 0;
}
void swap(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1 <n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void pr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<"\t"<<arr[i];
}