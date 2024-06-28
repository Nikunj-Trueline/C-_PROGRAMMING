/*

Operator overloading.

int a,b;
int c;

c = a+b;

demo obj1,obj2;
demo obj3;

obj3 = obj1 + obj2;

*/

#include <iostream>
using namespace std;

class demo
{

public:
    int a;

    void input()
    {
        cout << "Enter the value for a : ";
        cin >> a;
    }

    void output()
    {
        cout << "The value of a is : " << a << endl;
    }

    /*
      demo  operator+(demo obj2)
      {
         demo obj3;
         obj3.a = a + obj2.a;
        return obj3;
      }
    */

    // demo operator+(demo obj2)
    // {

    //     demo obj3;
    //     obj3.a = a + obj2.a;
    //     return obj3;
    // }

    // demo operator==(demo obj2)
    // {
    //     demo obj3;
    //     obj3.a = a == obj2.a;
    //     return obj3;
    // }

    void operator++()
    {
        a = a + 1;
    }
};

int main()
{

    demo obj1;

    obj1.input();

    ++obj1;
    obj1.output();

    demo obj2;

    obj2.input();
    obj2.output();

    demo obj3;

    // obj3 = obj1 == obj2;

    obj3.output();

    return 0;
}