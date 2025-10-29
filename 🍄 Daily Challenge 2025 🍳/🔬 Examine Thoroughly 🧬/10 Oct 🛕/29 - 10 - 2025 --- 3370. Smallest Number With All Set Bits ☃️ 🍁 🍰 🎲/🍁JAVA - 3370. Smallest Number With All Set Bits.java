//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3370

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int smallestNumber(int n) {
            int k = 0;
            // Keep shifting left to find 2^k - 1 >= n
            while ((1 << k) - 1 < n) {
                  k++;
            }

            // Return number with all bits set (binary ones)
            return (1 << k) - 1;
      }
}
