#include <iostream>
#include <climits>

int maxSubarraySumBruteForce(int arr[], int size) {
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++) {
        int currentSum = 0;
        for (int j = i; j < size; j++) {
            currentSum += arr[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySumBruteForce(arr, size);

    std::cout << "Maximum sum of a contiguous subarray (Brute Force): " << maxSum << std::endl;

    return 0;
}
