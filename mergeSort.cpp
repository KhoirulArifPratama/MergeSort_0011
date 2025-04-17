#include <iostream>
#include <string>
using namespace std;

void input()
{
    while (true)
    {
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adallah 20";
        }
    }
    cout << "\n==========================";
    cout << "\nInputkan Isi Element Array";
    cout << "\n==========================";

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke - " << i << ": ";
    }
}
