#include <iostream>
using namespace std;

int main()
{
    char alpha = 'A';
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
}