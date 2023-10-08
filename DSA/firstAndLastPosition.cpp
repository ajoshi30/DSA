#include<iostream>
using namespace std;
void ans(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;

    }
}


   
int first(int arr[],int n,int capacity,int index,int element)
{
    if(arr[n]>=arr[capacity])
    {
        return -1;
    }
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=element;
    return 1;

}
int end(int arr[],int n,int capacity,int index1,int element1)
{
    for(int i=n;i>=index1;i--)
    {
arr[i]=arr[i+1];
    }
arr[index1]=element1;
return 1;
}
int main()
{
    int n=4;
    int arr[4]={1,2,3,4};
    int capacity=100;
    int index=1;
    int element=5;
    int index1=1;
    int element1=6;
   

ans( arr, n);

    first(arr,n,capacity,index,element);


        end(arr,n,capacity,index,element);
        n+1;
        ans(arr,n);
        return 0;

}