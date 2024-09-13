#include <iostream>
using namespace std;

int main()
{
    int num;
    int totalSum = 0;
    cout << "Plese enter the number : ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            totalSum += i;
        }
    }
    cout << "The total sum of : " << totalSum << endl;
}