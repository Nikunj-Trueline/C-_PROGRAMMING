#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 20;

    // aritmetic operator
    // + - * / %  ++ --

    cout << "The sum of a and b is : " << a + b << endl;
    cout << "The sum of a and b is : " << a - b << endl;
    cout << "The sum of a and b is : " << a * b << endl;
    cout << "The sum of a and b is : " << a / b << endl;
    cout << "The sum of a and b is : " << a % b << endl;

    // assignment operator
    // +=  -=  *= /=

    // relational operator
    //  < > <= >= == !=

    cout << "The less than or equal to is : " << (a <= b) << endl;

    a > 5 ? cout << "true part." << endl : cout << "false part" << endl;

    // sizeof operator

    double var = 9.0;
    float var2 = 8.90;
    bool check2 = true;

    cout << "Size of var is : " << sizeof(check2) << endl;
}