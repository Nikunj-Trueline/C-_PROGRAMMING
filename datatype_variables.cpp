#include <iostream>
using namespace std;

int global = 20;

void dataPrint(int d, char name)
{
    int local = 20;
    cout << "The value of c is : " << global << endl;
}

int main()
{

    dataPrint(10, 'P');

    int a = 10;
    float b = 3.14;
    char c = 'T';
    double d = 9.63589;
    bool status = true;

    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    cout << "The value of c is : " << c << endl;
    cout << "The value of d is : " << d << endl;
    cout << "The value of global  is : " << global << endl;
    cout << "The value of status is : " << status << endl;
}