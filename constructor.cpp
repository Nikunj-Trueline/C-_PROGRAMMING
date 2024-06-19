/*

Constructor :

    - Its special type of member function which name is same name of the class and it has not explicit return type.
    - constructor is used for intilized class object.
    - we can create defualt-argument constructor.
    - constructor is automatically call when class object is created.


There are mainly three type of constructor existing in cpp programming.

1. default construtor
2. parameterised - constructor
3. copy constructor.

*/

#include <iostream>
using namespace std;

class demo
{

    int a;
    int b;

public:
    // default constructor..

    // demo()
    // {
    //     cout << "This is default constructor..." << endl;
    // }

    // demo()
    // {
    //     a = 10;
    //     b = 20;
    // }

    // // parameterised constructor..
    // demo(int x, int y)
    // {
    //     a = x;
    //     b = y;
    //     cout << "The sum of a and b is : " << x + y << endl;
    // }

    // void displayData()
    // {
    //     cout << "The value of a is  : " << a << endl;
    //     cout << "The value of b is  : " << b << endl;
    // }

    // copy constuctor...
    // demo(demo &obj)
    // {
    //     cout << "The mutiplication of a and b is : " << obj.a * obj.b << endl;
    // }

    demo(string language = "C++")
    {
        cout << language << " Programming language is more faster than other programming language..." << endl;
    }
};

int main()
{

    // demo obj;
    // obj.displayData();

    // demo obj1;

    // demo obj2(10, 20);

    // demo obj5(60, 60); // para......

    // demo obj3(obj5); // copy...

    demo obj("python");
}