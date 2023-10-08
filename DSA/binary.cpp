#include<iostream>
using namespace std;
void disp(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swapA(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    swapA(arr,n);
    disp(arr,n);
    return 0;
}