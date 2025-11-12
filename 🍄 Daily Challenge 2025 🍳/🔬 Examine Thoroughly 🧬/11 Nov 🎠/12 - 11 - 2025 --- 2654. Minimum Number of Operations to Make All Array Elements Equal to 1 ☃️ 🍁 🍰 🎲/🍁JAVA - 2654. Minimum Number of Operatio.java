//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2654

//? ⌚ Time complexity ➺ O(n^2 log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minOperations(int[] nums) {
            int n = nums.length;
            int num1 = 0; // Counts how many elements are already equal to 1
            int g = 0; // Stores gcd of all elements

            // Calculate the total gcd and count elements equal to 1
            for (int x : nums) {
                  if (x == 1) {
                        num1++;
                  }
                  g = gcd(g, x);
            }

            // If there are elements equal to 1, operations needed are elements other than
            // them
            if (num1 > 0) {
                  return n - num1;
            }

            // If gcd of entire array is greater than 1, it's impossible to create all 1s
            if (g > 1) {
                  return -1;
            }

            // Find the minimum length of any subarray whose gcd equals 1
            int minLen = n;
            for (int i = 0; i < n; i++) {
                  int currentGcd = 0;
                  for (int j = i; j < n; j++) {
                        currentGcd = gcd(currentGcd, nums[j]);
                        if (currentGcd == 1) {
                              minLen = Math.min(minLen, j - i + 1);
                              break; // No need to consider longer subarrays starting at i
                        }
                  }
            }

            // Operations: (minLen - 1) to reduce that subarray to 1,
            // plus (n - 1) to propagate 1 to all elements
            return minLen - 1 + n - 1;
      }

      private int gcd(int a, int b) {
            while (b != 0) {
                  int temp = b;
                  b = a % b;
                  a = temp;
            }
            return a;
      }
}
