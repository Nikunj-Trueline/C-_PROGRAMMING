/*

Encapsulation :

    wrapping data into single unit.

    - data member
    - data method
*/

#include <iostream>
using namespace std;

class Book
{

private:
    string bookName;
    string authorName;
    double bookPrice;

    void setBookName(string bookname)
    {
        if (bookname.empty())
        {
            cout << "Bookname can not empty." << endl;
            bookName = "untitled";
        }
        else
        {
            bookName = bookname;
        }
    }

    void setauthorName(string authorname)
    {
        if (authorname.empty())
        {
            cout << "Author name can not be empty." << endl;
            authorName = "unknown";
        }
        else
        {
            authorName = authorname;
        }
    }

    void setPriceForBook(double price)
    {
        if (price > 0)
        {
            bookPrice = price;
        }
        else
        {
            cout << "Book price can not be nagative" << endl;
            bookPrice = 0.0;
        }
    }

public:
    Book(string bookname, string bookauthorname, double price)
    {
        setBookName(bookname);
        setauthorName(bookauthorname);
        setPriceForBook(price);
    }

    string getBookName()
    {
        return bookName;
    }

    double getPrice()
    {
        return bookPrice;
    }

    string getAuthorName()
    {
        return authorName;
    }
};

int main()
{

    Book book1 = Book("phsycology of money", "nikunj ", 5000);

    cout << "Book name is : " << book1.getBookName() << endl;
    cout << "Book author name is : " << book1.getAuthorName() << endl;
    cout << "Book price is : " << book1.getPrice() << endl;

    return 0;
}
