#include <iostream>
using namespace std;

int main()
{
    int val;
    int totalsum = 0;
    cout << "Please enter the number: ";
    cin >> val;
    for (int i = 0; i <= val; i++)
    {
        totalsum += i;
    }
    cout << "the sum is : " << totalsum << endl;
}