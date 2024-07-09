/*

File Handling.

- use for store data perminent time.
- user input
- outputs.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    cout << "The concept is File Handling..." << endl;

    // ofstream write;
    // write.open("demo.txt");
    // write << "File handling use for store perminent data..." << endl;
    // write.close();

    ifstream read;
    string data;
    read.open("demo.txt");
    // read >> data;

    //  getline(read, data);

    while (read.eof() == 0)
    {
        getline(read, data);
        cout << data << endl;
    }

    read.close();

    return 0;
}
