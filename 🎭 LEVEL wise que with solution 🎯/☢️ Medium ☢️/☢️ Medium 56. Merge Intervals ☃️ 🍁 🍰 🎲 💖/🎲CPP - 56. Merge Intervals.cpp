//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 56

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<int>> merge(vector<vector<int>>& intervals) {
            vector<vector<int>> merged; // Final list of merged intervals

            // ----------------------------------------------------------
            // Step 1: Sort intervals by their start value
            // ----------------------------------------------------------
            sort(intervals.begin(), intervals.end());

            // Step 2: Initialize 'prev' as the first interval
            vector<int> prev = intervals[0];

            // ----------------------------------------------------------
            // Step 3: Iterate over each interval and merge if overlapping
            // ----------------------------------------------------------
            for (int i = 1; i < intervals.size(); i++) {
                  vector<int>& interval = intervals[i];
                  // Overlap case → merge by updating the end time
                  if (interval[0] <= prev[1]) {
                        prev[1] = max(prev[1], interval[1]);
                  }
                  // No overlap → push previous interval, update 'prev'
                  else {
                        merged.push_back(prev);
                        prev = interval;
                  }
            }

            // Step 4: Append the last interval
            merged.push_back(prev);

            return merged;
      }
};
[1]