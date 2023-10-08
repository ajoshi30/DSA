#include<iostream>
using namespace std;
void array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void bubble(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
}
int main()
{
    int n=6;
    int arr[6]={9,1,12,6,19,5};
    cout<<"before sorting";
    array(arr,n);
    bubble(arr,n);
    cout<<"after sorting";
    array(arr,n);
    return 0;
}