#include <iostream>
using namespace std;

int main()
{
    char str;
    cout << "Enter the string : ";
    cin >> str;
    if (str >= 'a' && str <= 'z')
    {
        cout << "This is a small string";
    }
    else
    {
        cout << "this is a capital string";
    }
}