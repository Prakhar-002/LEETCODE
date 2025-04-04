//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2401

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int longestNiceSubarray(vector<int>& nums) {
            int maxLength = 0; // Stores the maximum "nice" subarray length
            int bitMask = 0; // Bitwise OR of the current subarray
            int l = 0; // Left pointer of the sliding window

            // Iterate over the array using the right pointer
            for (int r = 0; r < nums.size(); r++) {
                  // If nums[right] has overlapping bits with bitMask, adjust left pointer
                  while ((bitMask & nums[r]) != 0) {
                        bitMask ^= nums[l]; // Remove nums[left] from bitMask
                        l++; // Move left pointer forward
                  }

                  bitMask |= nums[r]; // Include nums[right] in the bitwise OR
                  maxLength = max(maxLength, r - l + 1); // Update max length
            }

            return maxLength; // Return the longest nice subarray length
      }
};
