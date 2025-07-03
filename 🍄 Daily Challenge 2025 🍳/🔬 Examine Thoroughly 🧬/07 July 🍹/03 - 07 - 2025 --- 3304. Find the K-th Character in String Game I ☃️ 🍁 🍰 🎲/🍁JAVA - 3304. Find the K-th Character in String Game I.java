//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3304

//? ⌚ Time complexity ➺ O(log k) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public char kthCharacter(int k) {
            int ans = 0;

            // Loop until k becomes 1 (root of the binary tree)
            while (k != 1) {
                  // Get the position of the highest set bit in k
                  int t = 31 - Integer.numberOfLeadingZeros(k);

                  // If k is a power of 2, decrease t by 1
                  if ((1 << t) == k) {
                        t -= 1;
                  }

                  // Subtract 2^t to move within the binary tree
                  k -= (1 << t);

                  // Each such move corresponds to going one level deeper (next letter)
                  ans++;
            }

            // Convert the number of right descents to character: 'a' + ans
            return (char) ('a' + ans);
      }
}
