#include <iostream>
using namespace std;

int main()
{
    // do..while loop

    int n = 10;

    do
    {
        cout << n << endl;
        n--;
    } while (n > 0);

    // while loop

    n = 10;
    while (n > 0)
    {
        cout << n << endl;
        n--;
    }

    // for loop

    n = 10;
    for (; n > 0; n--)
    {
        cout << n << endl;
    }
}