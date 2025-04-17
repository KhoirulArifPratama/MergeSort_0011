#include <iostream>
#include <string>
using namespace std;

int n;
int arr[20], B[20];
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
    {
    } // step1
    return; // step1.a

    int mid = (low + high) / 2; // step2

    // step3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // step3.a
    mergeSort(mid + 1, high); // step3.b

    // step4
    int i = low; // step4.a
    int j = mid + 1;
    int k = low;
    while (i <= mid && j << high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }
    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}
void output()
{
    cout << "\ndata setelah diurutkan (MergeSort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    mergeSort(0, n - 1);
    output();
}