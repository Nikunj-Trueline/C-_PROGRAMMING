/*
Prime number :

Prime number is whole number which can only divide by itself and 1.

ex. 2,3,5,7,11,13,17,19,23,29....


ex. 13

   13/1 = true
   13/13 = true

   13 / 2
   13/ 12

*/

#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter the number for check number is prime or not : ";
    cin >> number;

    int flag = 0;

    for (int i = 2; i <= number - 1; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "This number is prime number" << endl;
    }
    else
    {
        cout << "This number is not prime number" << endl;
    }
}