//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q2

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int pivotInteger(int n) {
            int total = n * (n + 1) / 2;  // Sum from 1 to n
            int curSum = 0;               // Sum from 1 to i

            for (int i = 1; i <= n; ++i) {
                  curSum += i;

                  // sum(i to n) = total - curSum + i (inclusive)
                  if (curSum == total - curSum + i) {
                        return i;
                  }
            }
            return -1;  // No pivot integer found
      }
};
