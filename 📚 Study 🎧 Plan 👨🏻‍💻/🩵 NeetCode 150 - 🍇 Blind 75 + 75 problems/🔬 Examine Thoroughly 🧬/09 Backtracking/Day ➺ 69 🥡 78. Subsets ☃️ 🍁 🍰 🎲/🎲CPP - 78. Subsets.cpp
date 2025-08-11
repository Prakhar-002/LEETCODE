//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 78

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<int>> subsets(vector<int>& nums) {
            // Final result storing all subsets
            vector<vector<int>> res;
            // Current temporary subset
            vector<int> subset;

            // Start DFS from index 0
            dfs(0, nums, subset, res);

            // Return the result containing all subsets
            return res;
      }

private:
      void dfs(int i, vector<int>& nums, vector<int>& subset, vector<vector<int>>& res) {
            // ----------------------------------------------------------
            // Base Case:
            // If index i has reached nums.size(),
            // we have a complete subset, add it to the results list.
            // ----------------------------------------------------------
            if (i >= nums.size()) {
                  res.push_back(subset); // Push current subset
                  return;
            }

            // ----------------------------------------------------------
            // Decision 1: Include nums[i] in current subset
            // ----------------------------------------------------------
            subset.push_back(nums[i]);        // Add current element
            dfs(i + 1, nums, subset, res);    // Recurse for next index

            // ----------------------------------------------------------
            // Decision 2: Exclude nums[i] (Backtrack)
            // ----------------------------------------------------------
            subset.pop_back();                // Remove last element
            dfs(i + 1, nums, subset, res);    // Recurse for next index
      }
};
