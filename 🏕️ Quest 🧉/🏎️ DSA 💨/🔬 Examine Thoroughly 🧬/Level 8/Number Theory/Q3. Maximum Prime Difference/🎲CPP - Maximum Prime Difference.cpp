//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
private:
      // Helper function to check if a number is prime
      bool isPrime(int n) {
            // Numbers less than 2 are not prime
            if (n < 2) {
                  return false;
            }

            // Check divisibility from 2 to sqrt(n)
            for (int i = 2; i * i <= n; ++i) {
                  if (n % i == 0) {
                        // If divisible, n is not prime
                        return false;
                  }
            }

            // If no divisor found, n is prime
            return true;
      }

public:
      int maximumPrimeDifference(vector<int>& nums) {
            // Initialize small to a large value (first prime index)
            // and large to a small value (last prime index)
            int small = INT_MAX;
            int large = INT_MIN;

            // Traverse the array with index i and value num
            for (int i = 0; i < nums.size(); ++i) {
                  int num = nums[i];
                  // If current number is prime
                  if (isPrime(num)) {
                        // Update the first (smallest) prime index
                        small = min(small, i);
                        // Update the last (largest) prime index
                        large = max(large, i);
                  }
            }

            // Return the maximum difference between prime indices
            return large - small;
      }
};
