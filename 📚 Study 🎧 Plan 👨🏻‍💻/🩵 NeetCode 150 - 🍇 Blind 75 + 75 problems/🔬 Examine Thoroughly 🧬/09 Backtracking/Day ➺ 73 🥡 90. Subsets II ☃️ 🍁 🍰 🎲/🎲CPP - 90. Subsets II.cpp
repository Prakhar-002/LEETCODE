//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 90

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            // Sort the numbers so duplicates are adjacent
            sort(nums.begin(), nums.end());

            vector<vector<int>> res; // Final result list of unique subsets
            vector<int> subset;      // Current subset under construction

            // Start backtracking from index 0
            backtrack(0, nums, subset, res);

            return res;
      }

private:
      void backtrack(int i, vector<int>& nums, vector<int>& subset, vector<vector<int>>& res) {
            // ------------------------------------------------------
            // Base Case:
            // If we have processed all numbers,
            // add the current subset to results.
            // ------------------------------------------------------
            if (i >= nums.size()) {
                  res.push_back(subset); // Add current subset
                  return;
            }

            // ------------------------------------------------------
            // Decision 1: Include nums[i] in the current subset
            // ------------------------------------------------------
            subset.push_back(nums[i]);              // Add current element
            backtrack(i + 1, nums, subset, res);    // Recurse to next index
            subset.pop_back();                      // Backtrack (undo last choice)

            // ------------------------------------------------------
            // Skip duplicates to prevent duplicate subsets
            // ------------------------------------------------------
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                  i++;
            }

            // ------------------------------------------------------
            // Decision 2: Exclude nums[i] and proceed to the next unique element
            // ------------------------------------------------------
            backtrack(i + 1, nums, subset, res);
      }
};
