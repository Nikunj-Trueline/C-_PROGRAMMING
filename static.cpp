/*
1. static member
2. static method
*/

#include <iostream>
using namespace std;

class Product
{

public:
    string name;
    string image;
    double price;
    int quantity;

    static int totalProduct;

    void setData()
    {
        totalProduct++;
        cout << "Enter your product name : ";
        cin >> name;
        cout << "Enter your product image : ";
        cin >> image;
        cout << "Enter your product price : ";
        cin >> price;
        cout << "Enter your product quantity : ";
        cin >> quantity;
    }

    void getData()
    {
        cout << "Your product name is : " << name << endl;
        cout << "Your product image is : " << image << endl;
        cout << "Your product price is : " << price << endl;
        cout << "Your product quantity is : " << quantity << endl;
    }

    static void totalProductCount()
    {
        cout << "Total added product : " << totalProduct << endl;
    }
};

int Product::totalProduct = 0;

int main()
{
    Product rohan;

    rohan.setData();
    rohan.getData();

    rohan.setData();
    rohan.getData();

    Product rohit;

    rohit.setData();
    rohit.getData();

    Product::totalProductCount();

    return 0;
}
