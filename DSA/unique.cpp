#include<iostream>
using namespace std;
int aarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n=5;
    int arr[5]={1,4,1,7,4};
    unique(arr,5);
    aarr(arr,n);
    return 0;
    
}