#include <iostream>
using namespace std;
int search(int arr[], int n, int key);
int main()
{
    int n = 4;
    int arr[4] = {5, 8, 1, 0};
    int key = 1;
    cout << search(arr, 4, key);
    return 0;
}
int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return -1;
}