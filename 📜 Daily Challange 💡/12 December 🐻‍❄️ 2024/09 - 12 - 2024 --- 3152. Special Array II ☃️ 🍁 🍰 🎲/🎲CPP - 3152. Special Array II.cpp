//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3125

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)  👉🏻 q = len(queries)

#include <vector>
using namespace std;

class Solution {
public:
      vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size();  // Length of the array
            int prevParity = nums[0] & 1;  // Parity of the first element
            vector<int> consecutiveSameParity(n);  // Tracks consecutive elements with the same parity
            int consecutiveCount = 0;  // Counter for consecutive elements with the same parity

            // Step 1: Precompute consecutive parity information
            for (int i = 0; i < n; i++) {
                  int currentParity = nums[i] & 1;
                  if (currentParity == prevParity) {
                        consecutiveCount++;
                  }
                  consecutiveSameParity[i] = consecutiveCount;
                  prevParity = currentParity;
            }

            // Step 2: Process each query
            vector<bool> results;
            for (const auto& query : queries) {
                  int startIndex = query[0];
                  int endIndex = query[1];
                  results.push_back(consecutiveSameParity[startIndex] == consecutiveSameParity[endIndex]);
            }

            return results;  // Return the results for all queries
      }
};
