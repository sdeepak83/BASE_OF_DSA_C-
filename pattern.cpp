#include <iostream>
using namespace std;

int main()
{

    int hor;
    int ver;
    cout << "enter horizontzly num : ";
    cin >> hor;
    cout << "enter vertically num : ";
    cin >> ver;

    for (int i = 1; i <= ver; i++)
    {
        for (int j = 1; j <= hor; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}