#include <iostream>
using namespace std;
int main()
{
    int num;
    int factorial = 1;
    cout << "please enter a number : ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << "The factorial of " << num << "is : " << factorial << endl;
}