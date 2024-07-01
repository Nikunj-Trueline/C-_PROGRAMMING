/*

Exception Handling.

Error.
1. syntax error  - compile error
2. logical error - run time error

syntax:

try{

// code

}catch(int e)
{

// print

}

*/

#include <iostream>
using namespace std;

class exceptionDemo
{
public:
    int a, b;

    void exceptionHandle()
    {

        try
        {

            cout << "Enter the value for a : ";
            cin >> a;
            cout << "Enter the value for b : ";
            cin >> b;

            if (b == 0)
            {
                throw b;
            }
            else
            {
                int c = a / b;
                cout << "The result is : " << c << endl;
            }
        }
        catch (int e)
        {
            cout << "Can not divide by : " << e << endl;
        }
    }
};

int main()
{

    exceptionDemo obj;

    obj.exceptionHandle();
}