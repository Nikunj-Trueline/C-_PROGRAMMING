#include <iostream>
using namespace std;

// recursive call
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        // base case;
        return 1;
    }
    else
    {
        // recursive case
        return n * factorial(n - 1);

        // 5 * factorial(4);
        // 5 * 4 * factorial(3);
        // 5 * 4 * 3 * factorial(2);
        // 5 * 4 * 3 * 2 * factorial(1)
        // 5 * 4 * 3 * 2 * 1
    }
}

int main()
{

    cout << "The factorial value for 5 is : " << factorial(5);

    return 0;
}