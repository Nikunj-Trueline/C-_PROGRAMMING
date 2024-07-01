/*

Friend function.

 - it is a special type of function which is not member function of the class but it has capability to access private and protected member of the class.


*/

#include <iostream>
using namespace std;

class demo
{

private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    // friend function syntax.

    friend void sum(demo obj);
};

// class member
// return_type class_name :: function(){}

// not class member
void sum(demo obj)
{
    cout << "The sum of a and b is : " << obj.a + obj.b << endl;
}

int main()
{

    demo obj;
    obj.setData(20, 20);

    sum(obj);
}