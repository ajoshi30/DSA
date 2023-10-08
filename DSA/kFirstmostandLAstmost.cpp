#include<iostream>
using namespace std;
int occ(int arr[],int n,int key)
{int start=0;
int end=n-1;
int ans=-1;
int mid=(start+end)/2;
while(start<=end)
{
    if(key==arr[mid])
    {
        ans=mid;
        start=mid+1;
    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    else if(key<arr[mid])
    {
end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;

}
int main()

{
    int n=5;
    int arr[5]={1,2,3,4,5};
    int key=4;
    int as=occ(arr,n,key);
    cout<<as;
}