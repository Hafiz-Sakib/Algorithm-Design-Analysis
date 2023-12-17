#include <bits/stdc++.h>
using namespace std;

void print(int arr[])
{
    cout << "Intermediate Array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r], i = l, j = r - 1;

    while (pivot == arr[r])
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] >= pivot)
        {
            j--;
        }

        if (i < j)
        {
            cout << i << " " << j << endl;
            swap(arr[i], arr[j]);
            print(arr);
        }
        else
        {
            cout << i << " PIVOT " << j << endl;
            swap(arr[i], arr[r]);
            print(arr);
            return i;
        }
    }
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int div = partition(arr, l, r);
        quickSort(arr, l, div - 1);
        quickSort(arr, div + 1, r);
    }
}

int main()
{
    int arr[] = {3, 2, 4, 22, 4, 5};
    cout << "Input Array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, 5);
    cout << "Final Array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
