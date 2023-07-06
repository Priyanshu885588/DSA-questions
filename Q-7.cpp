//cyclically rotate an array by one

#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
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
    int arr[]={1,2,3,4,5,6};
    int n=6;
    rotate(arr,n);
    print_array(arr,n);
    return 0;
}