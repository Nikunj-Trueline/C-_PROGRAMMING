#include <iostream>
#define pi 3.14
using namespace std;

int main()
{

    const int a = 10;

    cout << "The value of a is : " << a << endl;

    // a = 20;

    const string name = "Trueline Institute";

    cout << "Institute name is : " << name << endl;

    const bool status = true;

    int a1 = 10;
    int b = 3;

    int x = 12;
    char name1 = 'H';

    int sum = x + name1; // implicit type conversation

    double div = double(a1) / b; // 3.33333

    cout << "division for a and b is : " << div << endl;

    cout << sum << endl;

    int *ptr;

    int array[5] = {1, 2, 3, 4, 5};

    ptr = array + 2;

    cout << *ptr;
}