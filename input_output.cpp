#include <iostream>
#include "hello_world.cpp"
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter the value for a : "; // "<< insertion operator for use output"
    cin >> a;                           // ">> extraction operator for use input"

    cout << "Enter the value for b : ";
    cin >> b;

    cout << "The sum of a and b is : " << a + b << endl;
    cout << "The sub of a and b is : " << a - b << endl;
}