#include <iostream>
using namespace std;

int main()
{
    int num;
    int totalsum = 0;
    cout << "Plese enter the number : ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            totalsum += i;
        }
    }
    cout << "the number is: " << totalsum << endl;
}