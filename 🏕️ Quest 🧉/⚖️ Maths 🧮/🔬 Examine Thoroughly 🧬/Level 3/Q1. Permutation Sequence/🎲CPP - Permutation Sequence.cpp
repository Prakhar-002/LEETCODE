//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      string getPermutation(int n, int k) {
            vector<string> nums;
            for (int i = 1; i <= n; i++) {
                  nums.push_back(to_string(i));  // Initialize numbers as strings
            }

            vector<int> fact(n + 1, 1);
            for (int i = 1; i <= n; i++) {
                  fact[i] = fact[i - 1] * i;     // Precompute factorials
            }

            k -= 1;  // Zero-based index for calculation

            string ans;

            for (int i = n; i > 0; i--) {
                  int idx = k / fact[i - 1];     // Determine index to pick
                  ans += nums[idx];               // Append chosen digit
                  nums.erase(nums.begin() + idx); // Remove from list
                  k %= fact[i - 1];              // Update k
            }

            return ans;   // Return resulting permutation
      }
};
