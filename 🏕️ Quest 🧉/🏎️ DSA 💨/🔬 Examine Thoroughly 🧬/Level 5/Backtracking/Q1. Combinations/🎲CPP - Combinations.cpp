
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Quiz Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

#include <vector>
using namespace std;

class Solution {
public:
      vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> res;     // Store all valid combinations
            vector<int> comb;            // Current combination being built
            backtrack(1, n, k, comb, res);
            return res;
      }

      void backtrack(int start, int n, int k, vector<int>& comb, vector<vector<int>>& res) {
            // If combination is complete, add it to results
            if (comb.size() == k) {
                  res.push_back(comb);
                  return;
            }

            // Try all possible numbers starting at 'start'
            for (int num = start; num <= n; num++) {
                  comb.push_back(num);         // Choose
                  backtrack(num + 1, n, k, comb, res);  // Explore
                  comb.pop_back();             // Backtrack (undo)
            }
      }
};
