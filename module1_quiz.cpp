/*Your company needs printers and provides $1000 to buy as many of the same printers as possible.

The price of a printer is stored in the variable price.

Fill in the blanks to calculate and output how much money will be left over after buying the printers.*/

#include <iostream>
using namespace std;
int main()
{
    int money = 1000;
    int price = 145;
    int result = money % price;
    cout << result;
}