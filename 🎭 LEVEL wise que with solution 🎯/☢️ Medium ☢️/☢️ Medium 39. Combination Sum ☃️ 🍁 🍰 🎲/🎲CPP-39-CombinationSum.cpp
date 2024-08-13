//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 39

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

//? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            // vector to store all the combinations that add up to target
            vector<vector<int>> combinations;

            // call our dfs
            vector<int> cur;
            dfs(0, cur, 0, candidates, target, combinations);

            return combinations;
      }

private:
      // recursive function
      // `i` -> for index
      // `cur` -> current sequence
      void dfs(int i, vector<int>& cur, int total, vector<int>& candidates, int target, vector<vector<int>>& combinations) {
            // if our total is equal to target add this to combinations
            if (total == target) {
                  combinations.push_back(cur);
                  return;
            }

            // if total is > target or index out of bound
            if (total > target || i == candidates.size()) {
                  // just return from there
                  return;
            }

            // recursive call when we add current candidate in cur combination

            // 1. add candidate in cur combination
            cur.push_back(candidates[i]);
            // 2. call the dfs for this cur and on same candidate
            dfs(i, cur, total + candidates[i], candidates, target, combinations); // cause we can use one elem unlimited times
            // 3. remove from cur combination
            cur.pop_back();

            // recursive call when we skip current candidate in cur combination

            // 1. call the dfs for next candidate
            dfs(i + 1, cur, total, candidates, target, combinations);
      }
};
