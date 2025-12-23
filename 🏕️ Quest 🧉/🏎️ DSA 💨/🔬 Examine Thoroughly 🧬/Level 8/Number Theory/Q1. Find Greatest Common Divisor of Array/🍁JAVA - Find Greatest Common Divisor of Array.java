//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findGCD(int[] nums) {
            // Find the minimum and maximum element in the array
            int min = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;

            for (int num : nums) {
                  if (num < min) min = num;
                  if (num > max) max = num;
            }

            // Return the GCD of min and max
            return gcd(min, max);
      }

      // Compute GCD of two numbers using Euclidean algorithm
      public int gcd(int a, int b) {
            // Base case: if a is 0, GCD is b
            if (a == 0) return b;
            // Recursive case: gcd(a, b) = gcd(b % a, a)
            return gcd(b % a, a);
      }
}
