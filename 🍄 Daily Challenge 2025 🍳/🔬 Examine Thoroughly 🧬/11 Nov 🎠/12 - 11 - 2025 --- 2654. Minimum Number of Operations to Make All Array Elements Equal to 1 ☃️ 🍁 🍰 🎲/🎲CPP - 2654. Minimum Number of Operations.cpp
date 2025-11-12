//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2654

//? ⌚ Time complexity ➺ O(n^2 log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      // Computes the minimum number of operations to make all elements in nums equal to 1
      // Each operation replaces an element with the gcd of itself and an adjacent element
      int minOperations(vector<int>& nums) {
            int n = nums.size();
            int num1 = 0;   // Count of elements equal to 1
            int g = 0;      // GCD of all elements so far

            // Calculate total gcd and count how many 1s are in the array
            for (int x : nums) {
                  if (x == 1) {
                        num1++;
                  }
                  g = gcd(g, x);
            }

            // If there is at least one 1, return total elements minus count of 1s
            if (num1 > 0) {
                  return n - num1;
            }

            // If all gcd > 1, it's impossible to make all elements 1
            if (g > 1) {
                  return -1;
            }

            // Find the minimum length of a subarray with gcd = 1
            int min_len = n;
            for (int i = 0; i < n; i++) {
                  int g = 0;
                  for (int j = i; j < n; j++) {
                        g = gcd(g, nums[j]);
                        if (g == 1) {
                              min_len = min(min_len, j - i + 1);
                              break; // No need to check longer subarrays from i
                        }
                  }
            }

            // Return operations needed:
            // (min_len - 1) to reduce subarray to 1
            // plus (n - 1) to make all elements equal
            return min_len - 1 + n - 1;
      }

private:
      // Helper function to compute gcd using Euclidean algorithm
      int gcd(int a, int b) {
            while (b != 0) {
                  int temp = b;
                  b = a % b;
                  a = temp;
            }
            return a;
      }
};
