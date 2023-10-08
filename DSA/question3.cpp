#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    if(ch>='a' && ch<='z')
    {
        cout<<"lower case";
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"upper case";
    }
    else if(ch>=1 && ch<=9)
    {
        cout<<"number";
    }
    else
    {
        cout<<"nothing";
    }
    return 0;
}
