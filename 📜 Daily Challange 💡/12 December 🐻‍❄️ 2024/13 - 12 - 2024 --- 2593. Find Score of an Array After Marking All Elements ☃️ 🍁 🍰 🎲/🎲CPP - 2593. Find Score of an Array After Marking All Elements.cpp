//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2593

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long findScore(vector<int>& nums) {
            int n = nums.size();

            // Create a vector to store pairs of numbers and their indices
            vector<pair<int, int>> numIndexPairs;
            for (int i = 0; i < n; i++) {
                  numIndexPairs.push_back({nums[i], i});
            }

            // Sort the vector based on the numbers in ascending order
            sort(numIndexPairs.begin(), numIndexPairs.end());

            // Create a boolean vector to track whether an index is "marked"
            vector<bool> isMarked(n, false);

            long result = 0;

            // Iterate over the sorted vector
            for (auto& pair : numIndexPairs) {
                  int num = pair.first;
                  int index = pair.second;

                  // If the current index is not marked, process it
                  if (!isMarked[index]) {
                        result += num;

                        // Mark the current index and adjacent indices
                        isMarked[index] = true;
                        if (index - 1 >= 0) {
                              isMarked[index - 1] = true;
                        }
                        if (index + 1 < n) {
                              isMarked[index + 1] = true;
                        }
                  }
            }

            return result;
      }
};
