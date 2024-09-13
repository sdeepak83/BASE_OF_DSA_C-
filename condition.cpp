#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Please enter the marks : ";
    cin >> marks;

    if (marks >= 0 && marks < 33)
    {
        cout << "You are fail";
    }
    else if (marks > 33 && marks < 60)
    {
        cout << "you are pass in frist devision";
    }
    else if (marks > 60 && marks < 80)
    {
        cout << "you are pass in A grade";
    }
    else
    {
        cout << "you are pass in A+ grade";
    }
}