// Given an array of integers nums, return the value of the largest element in the array


// Example 1

// Input: nums = [3, 3, 6, 1]

// Output: 6

// Explanation: The largest element in array is 6

// Example 2

// Input: nums = [3, 3, 0, 99, -40]

// Output: 99

// Explanation: The largest element in array is 99

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1 ; i++){
            for(int j = 0 ; j < n-i-1; j++){
                if(nums[j]> nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
                
            }
            
        }
        return nums[n-1];
    }
};