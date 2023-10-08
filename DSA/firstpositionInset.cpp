#include<iostream>
using namespace std;
void ans(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int insert(int arr[],int n,int capacity,int index,int element)
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
int main()
{
    int n=4;
    int arr[100]={1,2,3,4};
    int capacity=100;
    int index=2;
    int element=18;
    insert( arr, n, capacity, index, element);
    n+1;
    ans(arr,n); 
    return 0;

}