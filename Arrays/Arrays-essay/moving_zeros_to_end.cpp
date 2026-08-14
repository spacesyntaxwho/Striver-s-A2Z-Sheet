// Move Zeros to End
// Subscribe to TUF+

// Hints
// Company
// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.



// This must be done in place, without making a copy of the array.


// Example 1

// Input: nums = [0, 1, 4, 0, 5, 2]

// Output: [1, 4, 5, 2, 0, 0]

// Explanation:

// Both the zeroes are moved to the end and the order of the other elements stay the same

// Example 2

// Input: nums = [0, 0, 0, 1, 3, -2]

// Output: [1, 3, -2, 0, 0, 0]

// Explanation:

// All 3 zeroes are moved to the end and the order of the other elements stay the same

// Now your turn!

// Input: nums = [0, 20, 0, -20, 0, 20]

// Output:

// Pick your answer


// [0, 0, 0, 20, 20, -20]

// [-20, 20, 20, 0, 0, 0]

// [-20, 0, 0, 0, 20, 20]

// [20, -20, 20, 0, 0, 0]


#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = -1;
    
    // Step 1: Find the first zero
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }
    
    // If no zero exists, array is already in order
    if (j == -1) return;
    
    // Step 2: Swap non-zero elements forward
    for (int i = j + 1; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
