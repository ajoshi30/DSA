#include<iostream>
using namespace std;
void disp(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void sort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key=arr[i];// ye move karega
        int j=i-1;//usse pehle wale index me jayega
        while(j>=0 && arr[j]>key)//
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n=5;
    int arr[5]={9,1,5,3,6};
    sort(arr,n);
    disp(arr,n);    
    return 0;
}