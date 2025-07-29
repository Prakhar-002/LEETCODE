//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3480

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
            // Track the two smallest conflicting indexes for each index
            vector<int> minFirstConflict(n + 1, INT_MAX), minSecondConflict(n + 1, INT_MAX);

            // Process each conflicting pair
            for (const auto& pair : conflictingPairs) {
                  // a is the smaller index, b is the larger index
                  int a = min(pair[0], pair[1]);
                  int b = max(pair[0], pair[1]);

                  // Store the two smallest conflicting 'b's for each 'a'
                  if (minFirstConflict[a] > b) {
                        minSecondConflict[a] = minFirstConflict[a];
                        minFirstConflict[a] = b;
                  } else if (minSecondConflict[a] > b) {
                        minSecondConflict[a] = b;
                  }
            }

            long long totalValidSubarrays = 0;
            int bestStartIndex = n;
            int minConflictAfter = INT_MAX;

            // To track how many deletions to avoid conflict are needed per index
            vector<long long> deletionsPerStart(n + 1, 0);

            // Iterate backwards from n to 1
            for (int i = n; i >= 1; i--) {
                  // Update bestStartIndex if current has smaller first conflict
                  if (minFirstConflict[bestStartIndex] > minFirstConflict[i]) {
                        minConflictAfter = min(minConflictAfter, minFirstConflict[bestStartIndex]);
                        bestStartIndex = i;
                  } else {
                        minConflictAfter = min(minConflictAfter, minFirstConflict[i]);
                  }

                  // Count valid subarrays starting from i to min(conflict) - 1
                  totalValidSubarrays += min(minFirstConflict[bestStartIndex], n + 1) - i;

                  // Count deletions to avoid conflict
                  deletionsPerStart[bestStartIndex] += 
                        min(min(minConflictAfter, minSecondConflict[bestStartIndex]), n + 1) -
                        min(minFirstConflict[bestStartIndex], n + 1);
            }

            // Add the maximum deletion count to total valid subarrays
            return totalValidSubarrays + *max_element(deletionsPerStart.begin(), deletionsPerStart.end());
      }
};
