#include <iostream>
using namespace std;

int main()
{
    int n = 25;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "prime no \n";
    }
    else
    {
        cout << "non prime no \n";
    }
    return 0;
}
