#include <iostream>
using namespace std;

/*

Abstraction : Used for manage class private field.

*/

class Login
{

private:
    string userEmail;
    string userPassword;

public:
    void ffsetter(string ffield)
    {
        userEmail = ffield;
    }

    void sfsetter(string sfield)
    {
        userPassword = sfield;
    }

    string ffgetter()
    {
        return userEmail;
    }

    string sfgetter()
    {
        return userPassword;
    }
};

int main()
{

    Login obj;

    obj.ffsetter("demo123@gmail.com");
    cout << "User Email is : " << obj.ffgetter() << endl;

    obj.sfsetter("Demo@123");
    cout << "User Password is : " << obj.sfgetter() << endl;
}