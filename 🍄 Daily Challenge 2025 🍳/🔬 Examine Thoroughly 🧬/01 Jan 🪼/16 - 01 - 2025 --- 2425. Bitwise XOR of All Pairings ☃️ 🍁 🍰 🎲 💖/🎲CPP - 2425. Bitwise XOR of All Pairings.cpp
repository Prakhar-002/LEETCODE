//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2425

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(nums2)  

#include <vector>
using namespace std;

class Solution {
public:
      // Helper function to compute XOR of all elements in the array
      int xorArray(const vector<int>& nums) {
            int x = 0; // Initialize XOR accumulator to 0
            for (int n : nums) {
                  x ^= n; // XOR each number with the accumulator
            }
            return x; // Return the final XOR result
      }

      int xorAllNums(const vector<int>& nums1, const vector<int>& nums2) {
            int len1 = nums1.size(); // Get length of nums1
            int len2 = nums2.size(); // Get length of nums2

            // Case 1: If both lengths are even, XOR of all pairs is 0
            if (len1 % 2 == 0 && len2 % 2 == 0) {
                  return 0;
            }

            // Case 2: If nums1 length is even, XOR of all pairs is nums1's XOR
            if (len1 % 2 == 0) {
                  return xorArray(nums1);
            }

            // Case 3: If nums2 length is even, XOR of all pairs is nums2's XOR
            if (len2 % 2 == 0) {
                  return xorArray(nums2);
            }

            // Case 4: If both lengths are odd, XOR of all pairs is XOR of both arrays
            return xorArray(nums1) ^ xorArray(nums2);
      }
};
