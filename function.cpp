/*
Function.

*/

#include <iostream>
using namespace std;

// function declration
void sumOfTwonumber(int a, int b);

inline int cube(int n)
{
    return n * n * n;
}

int main()
{

    sumOfTwonumber(10, 20);

    int store = cube(10);
    cout << "The cube for 10 is : " << store << endl;
}

// function definantion
void sumOfTwonumber(int a, int b)
{
    cout << "The sum of  a and b is : " << a + b << endl;
}