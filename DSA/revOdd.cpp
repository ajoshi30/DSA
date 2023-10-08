#include<iostream>
using namespace std;
void swap(int arr[],int n);
void printnum(int arr[],int n);
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    swap(arr,5);
    printnum(arr,n);
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
void printnum(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<"\t"<<arr[i];
}