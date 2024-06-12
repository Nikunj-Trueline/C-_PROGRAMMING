#include <iostream>
using namespace std;

int main()
{

    int condition1 = 1;
    int condition2 = 0;

    if (condition1)
    {
        if (condition2)
        {
        }
        else
        {
        }
    }
    else if (condition1)
    {
    }
    else
    {
        cout << "Run false part" << endl;
    }

    string name = "trueline";
    double test1 = 1.0;
    int test2 = 1;

    switch (test2)
    {
    case 1:
        cout << "Case1 is exicute";
        break;

    default:
        break;
    }
}