//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 40

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

//? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            // Vector to store all the combinations that add up to target
            vector<vector<int>> combinations;

            // First we'll sort the candidates to avoid duplicates
            sort(candidates.begin(), candidates.end());

            // Call our dfs function
            vector<int> cur;
            dfs(0, cur, 0, candidates, target, combinations);

            return combinations;
      }

private:
      // Recursive function
      // `i` -> for index
      // `cur` -> current sequence
      // `total` -> current sum
      void dfs(int i, vector<int>& cur, int total, const vector<int>& candidates, int target,
                  vector<vector<int>>& combinations) {
            // If our total is equal to target add this to combinations
            if (total == target) {
                  combinations.push_back(cur);
                  return;
            }

            // If total is > target or index out of bound
            if (total > target || i == candidates.size()) {
                  // Just return from there
                  return;
            }

            // Recursive call when we add current candidate in cur combination

            // 1. Add candidate in cur combination
            cur.push_back(candidates[i]);
            // 2. Call the dfs for this cur
            dfs(i + 1, cur, total + candidates[i], candidates, target, combinations);
            // 3. Remove from cur combination
            cur.pop_back();

            // Recursive call when we skip current candidate in cur combination

            // 1. Loop and skip all candidates with same value [1, 1, 1, 1, 2]
            while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
                  i++;
            }
            // 2. Call the dfs for next candidate
            dfs(i + 1, cur, total, candidates, target, combinations);
      }
};

