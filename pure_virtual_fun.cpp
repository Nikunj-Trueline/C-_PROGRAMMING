#include <iostream>
using namespace std;

/*
Data Abstraction.
- create abstract class.
*/

class rbi
{

public:
    virtual void rules() = 0;
};

class hdfc : public rbi
{

public:
    void rules()
    {
        cout << "The rules for RBI..." << endl;
    }

    void hdfcRules()
    {
    }
};

class sbi : public rbi
{
public:
    void rules()
    {
    }
};

int main()
{
    hdfc obj;

    sbi obj2;
}