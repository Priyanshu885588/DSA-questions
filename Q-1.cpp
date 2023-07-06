// reverse an array

#include <iostream>
using namespace std;

void reverse_iterative(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
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

void reverse_recursive(int arr[], int start, int end)
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);

    return reverse_recursive(arr, start + 1, end - 1);
}

int main()
{
    int n = 7;
    int arr[] = {10, 11, 12, 13, 14, 15, 16};

    reverse_iterative(arr, n); // Iterative way  Time Complexity: O(n), Auxiliary Space: O(1)
    print_array(arr, n);

    reverse_recursive(arr, 0, n - 1); // Recursive way Time Complexity: O(n) Auxiliary Space: O(n)
    print_array(arr, n);

    return 0;
}


// using oops concept
/*#include <iostream>
using namespace std;

class ArrayReverser {
private:
    int* arr;
    int size;

public:
    ArrayReverser(int inputArr[], int n) {
        size = n;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    ~ArrayReverser() {
        delete[] arr;
    }

    void reverseIterative() {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void reverseRecursive(int start, int end) {
        if (start >= end) {
            return;
        }

        swap(arr[start], arr[end]);

        reverseRecursive(start + 1, end - 1);
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n = 7;
    int arr[] = {10, 11, 12, 13, 14, 15, 16};

    ArrayReverser arrReverser(arr, n);

    // Reverse the array iteratively
    arrReverser.reverseIterative();
    cout << "Array reversed iteratively: ";
    arrReverser.printArray();

    // Reverse the array recursively
    arrReverser.reverseRecursive(0, n - 1);
    cout << "Array reversed recursively: ";
    arrReverser.printArray();

    return 0;
}
*/