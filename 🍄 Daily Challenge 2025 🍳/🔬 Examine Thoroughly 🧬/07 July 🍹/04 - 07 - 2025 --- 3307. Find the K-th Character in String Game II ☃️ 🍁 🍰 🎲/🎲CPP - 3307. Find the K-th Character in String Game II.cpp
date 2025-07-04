//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3307

//? ⌚ Time complexity ➺ O(log k)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      char kthCharacter(long long k, vector<int> &operations) {
            int ans = 0; // Tracks number of 1-operations on the path to root

            while (k != 1) {
                  // Compute the highest power of 2 less than or equal to k
                  int t = 63 - __builtin_clzll(k); // Most significant bit (0-indexed)

                  // If k is a perfect power of 2, adjust the level back by 1
                  if ((1LL << t) == k) {
                        t--;
                  }

                  // Move from node k to its parent
                  k -= (1LL << t);

                  // If operation at level t is 1, increment counter
                  if (operations[t] == 1) {
                        ans++;
                  }
            }

            // Map count to a lowercase letter ('a' + (ans % 26))
            return 'a' + (ans % 26);
      }
};
