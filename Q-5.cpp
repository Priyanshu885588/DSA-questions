//move negative to the front
// here we can also use dutch national flag approach

#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
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
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n); //Time complexity: O(N), Auxiliary Space: O(1)
    print_array(arr, n);
    return 0;
    return 0;
}