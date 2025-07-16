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
