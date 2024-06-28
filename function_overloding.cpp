/*

one thing and many form that means polymorphism

1. compile time polymorphism

    - function overloading
    - opearator overloading

*/

#include <iostream>
using namespace std;

class shape
{
public:
    double area(double r, bool status)
    {

        if (status == 1)
        {
            return 3.14 * r * r;
        }
        else
        {
            return 0.0;
        }
    }

    int area(int length, int width)
    {
        return length * width;
    }

    double area(double length)
    {
        return length * length;
    }
};

int main()
{

    shape obj;

    double square = obj.area(10);
    double circle = obj.area(10, true);
    double rectangle = obj.area(10, 20);

    cout << "The area of square is : " << square << endl;
    cout << "The area of circle is : " << circle << endl;
    cout << "The area of rectangle is : " << rectangle << endl;

    return 0;
}