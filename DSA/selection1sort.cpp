#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={9,1,6,3,45};
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}