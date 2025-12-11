//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3577

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(complexity)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int countPermutations(vector<int>& complexity) {
            int n = complexity.size();
            
            // Step 1: Verify strictly increasing order from complexity[0]
            // If any complexity[i] <= complexity[0], return 0 (invalid)
            for (int i = 1; i < n; i++) {
                  if (complexity[i] <= complexity[0]) {
                        return 0;
                  }
            }

            // Step 2: Compute (n-1)! % (10^9 + 7)
            // Logic: complexity[0] fixed at position 0, others can be rearranged
            const int MOD = 1000000007;
            long long ans = 1;

            // Factorial calculation: multiply from 2 to n-1
            for (int i = 2; i < n; i++) {
                  ans = (ans * i) % MOD;
            }

            return ans;
      }
};
