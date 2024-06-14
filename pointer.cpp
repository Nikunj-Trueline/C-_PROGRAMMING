#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    int a = 10;
    ptr = &a;

    cout << "The address of a : " << &a << endl;
    cout << "The value of ptr : " << ptr << endl;
    cout << "the value of a is : " << a << endl;
    cout << "The refrence value of ptr is : " << *ptr << endl;
}