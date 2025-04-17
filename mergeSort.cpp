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
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{

    if (low >= high)
    {           // step1
        return; // step1.a
    }
}

int mid = (low + high) / 2; // step2

// step3
// fungsi rekursi - memanggil diri sendiri
mergesort
