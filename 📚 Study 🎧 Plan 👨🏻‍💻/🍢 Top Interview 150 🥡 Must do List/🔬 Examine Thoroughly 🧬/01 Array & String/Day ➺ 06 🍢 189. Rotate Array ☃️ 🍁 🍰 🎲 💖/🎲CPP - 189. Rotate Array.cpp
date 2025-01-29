//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 189

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // Helper function to reverse a portion of the array
      void reverseArray(vector<int>& arr, int start, int end) {
            while (start < end) {
                  // Swap elements
                  int temp = arr[start];
                  arr[start] = arr[end];
                  arr[end] = temp;
                  start++;
                  end--;
            }
      }

      void rotate(vector<int>& nums, int k) {
            // Handle cases where k is greater than the array length
            k = k % nums.size();

            // Reverse the first part of the array
            reverseArray(nums, 0, nums.size() - k - 1);

            // Reverse the second part of the array
            reverseArray(nums, nums.size() - k, nums.size() - 1);

            // Reverse the entire array to achieve rotation
            reverseArray(nums, 0, nums.size() - 1);
      }
};
