/*
default
You might notice that there is a default case at the end of the switch statement.

It is used to run code, when none of the cases match:
*/

#include <iostream>
using namespace std;

int main()
{
    int choice = 8;
    switch (choice)
    {
    case 1:
        cout << "Coffee";
        break;
    case 2:
        cout << "Tea";
        break;
    case 3:
        cout << "Water";
        break;
    default:
        cout << "Invalid Choice";
    }
}