//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int findGCD(vector<int>& nums) {
            // Find the minimum and maximum element in the array
            int min_val = *min_element(nums.begin(), nums.end());
            int max_val = *max_element(nums.begin(), nums.end());

            // Return the GCD of min and max
            return gcd(min_val, max_val);
      }

private:
      // Compute GCD of two numbers using Euclidean algorithm
      int gcd(int a, int b) {
            // Base case: if a is 0, GCD is b
            if (a == 0) return b;
            // Recursive case: gcd(a, b) = gcd(b % a, a)
            return gcd(b % a, a);
      }
};
