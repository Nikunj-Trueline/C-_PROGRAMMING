#include <iostream>
using namespace std;

class thisPointer
{

private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{

    thisPointer pointer;

    pointer.setData(10, 20);
    pointer.display();

    return 0;
}