//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3201

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maximumLength(vector<int>& nums) {
            int maxLen = 0; // Stores the result

            // All four parity patterns: even-even, even-odd, odd-even, odd-odd
            vector<vector<int>> patterns = { {0, 0}, {0, 1}, {1, 0}, {1, 1} };

            for (auto& pattern : patterns) {
                  int count = 0; // Length of current valid subsequence

                  for (int num : nums) {
                        int parity = num % 2; // Get parity of the number
                        if (parity == pattern[count % 2]) {
                              count++; // Add to sequence if it matches pattern
                        }
                  }

                  maxLen = max(maxLen, count); // Update maximum length
            }

            return maxLen;
      }
};

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maximumLength(vector<int>& nums) {
            int n = nums.size();
            int oddCount = 0;         // Count of all odd numbers
            int evenCount = 0;        // Count of all even numbers
            int altCount = 1;         // Count of longest alternating parity subsequence
            int prev = nums[0];       // Keep track of the previous number for alternating check

            for (int i = 0; i < n; i++) {
                  // Count odd and even numbers
                  if (nums[i] % 2 == 1) {
                        oddCount++;
                  } else {
                        evenCount++;
                  }

                  // Starting from second element, check if parity alternates
                  if (i >= 1 && nums[i] % 2 != prev % 2) {
                        altCount++;       // Increase count for alternating sequence
                        prev = nums[i];   // Update previous number
                  }
            }

            // Return the maximum among all odd numbers, even numbers, or longest alternating sequence
            return max({oddCount, evenCount, altCount});
      }
};
