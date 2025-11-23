//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1262

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maxSumDivThree(vector<int>& nums) {
            int total = 0;
            // Track the smallest number with remainder 1 mod 3
            int smallestOne = INT_MAX;
            // Track the smallest number with remainder 2 mod 3
            int smallestTwo = INT_MAX;

            // Iterate through all numbers to calculate total sum
            // and keep track of smallest numbers with remainder 1 and 2
            for (int n : nums) {
                  total += n;

                  // If remainder is 1, update smallestTwo and smallestOne accordingly
                  if (n % 3 == 1) {
                        if (smallestOne != INT_MAX) {
                              smallestTwo = min(smallestTwo, n + smallestOne);
                        }
                        smallestOne = min(smallestOne, n);
                  }

                  // If remainder is 2, update smallestOne and smallestTwo accordingly
                  if (n % 3 == 2) {
                        if (smallestTwo != INT_MAX) {
                              smallestOne = min(smallestOne, n + smallestTwo);
                        }
                        smallestTwo = min(smallestTwo, n);
                  }
            }

            // If total sum is divisible by 3, return total as is
            if (total % 3 == 0) {
                  return total;
            }

            // If remainder is 1, subtract smallestOne to make sum divisible by 3
            else if (total % 3 == 1) {
                  return total - smallestOne;
            }

            // If remainder is 2, subtract smallestTwo to make sum divisible by 3
            else {
                  return total - smallestTwo;
            }
      }
};
