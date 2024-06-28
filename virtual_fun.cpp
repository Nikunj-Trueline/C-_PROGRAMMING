#include <iostream>
using namespace std;

class base
{

public:
    virtual void show()
    {
        cout << "This is base class..." << endl;
    }
};

class derived : public base
{

public:
    void show()
    {
        cout << "This is derived class" << endl;
    }
};

class derived2 : public derived
{

public:
    void show()
    {
        cout << "This is derived 1 class..." << endl;
    }
};

int main()
{

    base *ptr;
    derived2 obj;
    ptr = &obj;

    ptr->show();
}