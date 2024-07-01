#include <iostream>
using namespace std;

/*class template*/

template <class T1, class T2>

class templateDemo
{

public:
    T1 a;
    T2 b;

    void input(T1 a1, T2 b1)
    {
        a = a1;
        b = b1;
    }

    void showData()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};

int main()
{

    templateDemo<string, double> demoObj;

    demoObj.input("Demo String", 20.90);
    demoObj.showData();

    return 0;
}