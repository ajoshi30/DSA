#include<iostream>
using namespace std;
void disp(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void merge(int a[],int mid,int high,int low)
{
    int i,j,k,b[100];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid+1 && i<=high)
    {
        if(a[i]<a[j])
        {
            b[i]=a[i];
            i++;
            k++;
        }
        else{
            b[j]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[j]=a[j];
        j++;
        k++;

    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }

}
int  mergesort(int mid,int a[],int high,int low)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,high,mid);
    }
}
int main()
{
  int  a[]={9,5,0,12,56};
    int n=5;
    disp(a,n);
    mergesort(a,n);
    disp(a,n);
    return 0;
}