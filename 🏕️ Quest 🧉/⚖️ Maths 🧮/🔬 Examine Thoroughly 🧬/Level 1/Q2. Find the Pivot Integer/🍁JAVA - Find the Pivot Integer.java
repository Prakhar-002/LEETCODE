//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q2

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int pivotInteger(int n) {
            // Total sum of numbers from 1 to n using formula n*(n+1)/2
            int total = n * (n + 1) / 2;

            int curSum = 0; // Running sum from 1 to current i

            // Iterate from 1 to n
            for (int i = 1; i <= n; i++) {
                  curSum += i;

                  // Check if sum from 1 to i equals sum from i to n
                  // sum(i to n) = total - curSum + i (since i counted twice)
                  if (curSum == total - curSum + i) {
                        return i; // Pivot integer found
                  }
            }

            return -1; // No pivot integer satisfies the condition
      }
}
