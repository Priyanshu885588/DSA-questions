//Sort an array of 0s, 1s and 2s

#include <iostream>
using namespace std;

void sort0_1_2(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    int mid = 0;
    while (mid <= h)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[l], arr[mid]);
            mid++;
            l++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[h]);
            mid++;
            h--;
            break;
        }
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 0, 1, 1, 0, 0, 2, 0, 1, 2, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort0_1_2(arr, n);
    print_array(arr,n);
    return 0;
}