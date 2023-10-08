#include <iostream>
#include <array>
using namespace std;
int main()
{ 
    array<int, 4> arr = {1, 2, 3, 5};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << arr[i];
    }
    cout << "first element:" << arr.front();
    cout << "Last element:" << arr.back();
    cout << "the 2nd index elemnet is :" << arr.at(2);
    cout << "empty element is :" << arr.empty();
}