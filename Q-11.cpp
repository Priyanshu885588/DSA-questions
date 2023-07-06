// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);
	// count the frequency
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
      
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}   
/*int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Move slow and fast pointers until they meet
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Reset slow pointer to the first element
    slow = nums[0];

    // Move slow and fast pointers until they meet again
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    // Return the duplicate number
    return slow;
}
*/