/*

class - a class is one kind of blueprint.
object - real world entity.

--------------------------

why we not use structure ?

- structure not give private , public access modifiers.
- we can not store function in structure
- struture not inherit...

syntax :

class className{
 // data member

 // data methods
};

*/

#include <iostream>
using namespace std;

class car
{

    // private

public:
    string carName;
    string carColor; // data member
    string carSpeed; // state
    int carPrice;
    int carTaxPrice;
    int CarTotalPrice;

    void carInfo()
    {
        cout << "Car name is : " << carName << endl;
        cout << "Car color is : " << carColor << endl;      // data method
        cout << "Car speed is : " << carSpeed << endl;      // member function
        cout << "Car price is : " << CarTotalPrice << endl; // behaviour
    }

    void defineOutOfClass();

    void carPriceSet(int carPrice1, int carTaxprice1)
    {
        carPrice = carPrice1;
        carTaxPrice = carTaxprice1;

        CarTotalPrice = carPrice + carTaxPrice;
    }

private:
    string enginePower;

    void carEngineInfo()
    {
    }
};

void car::defineOutOfClass()
{
    cout << "This method define out side of the class" << endl;
}

int main()
{

    car rolls_royce;
    rolls_royce.carName = "Rolls royce Phantom";
    rolls_royce.carColor = "black";
    rolls_royce.carSpeed = "250 km/h";
    // rolls_royce.CarTotalPrice = 50000000;

    rolls_royce.carPriceSet(50000000, 100000);
    rolls_royce.carInfo();
    // rolls_royce.carEngineInfo();

    car BMW;

    return 0;
}