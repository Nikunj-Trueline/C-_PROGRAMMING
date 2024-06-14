#include <iostream>
using namespace std;

int multiplication(int a, int b)
{
    return a * b;
}

int multiplication(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    cout << "The multiplication for a and b is : " << multiplication(10, 20) << endl;

    cout << "The multiplication for a, b and c is : " << multiplication(10, 20, 30) << endl;

    return 0;
}