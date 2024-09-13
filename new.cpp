#include <iostream>  // Include the header for I/O operations
using namespace std; // Use the standard namespace

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "This is an even number";
    }
    else
    {
        cout << "This is an odd number";
    }
    return 0;
}
