//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3304

//? ⌚ Time complexity ➺ O(log k) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      char kthCharacter(int k) {
            int ans = 0;

            // Continue until we reach root node (k == 1)
            while (k != 1) {
                  // Find position of highest bit set
                  int t = 31 - __builtin_clz(k);  // count leading zeros

                  // Check if k is exactly a power of 2
                  if ((1 << t) == k) {
                        t -= 1;
                  }

                  // Move back in the tree by subtracting 2^t
                  k -= (1 << t);

                  // Track how deep we've gone in right subtree
                  ans++;
            }

            // Convert level to character (0 -> 'a', 1 -> 'b', etc.)
            return 'a' + ans;
      }
};
