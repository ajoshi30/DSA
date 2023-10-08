#include <iostream>
using namespace std;
int rev(int arr[], int n);
int main()
{
    int n = 5;
    int i;
    int arr[5] = {2, 4, 5, 7, 8};
    rev(arr, 5);
    return 0;
}
int rev(int arr[], int n)
{
    for (int i = 5; i > 0; i--)
    {
        cout << arr[i];
    }
}