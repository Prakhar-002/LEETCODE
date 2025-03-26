//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2033

// ? ⌚ Time complexity ➺ O(n * m log n * m) 👉🏻  n = len(grid)

// ? 🧺 Space complexity ➺ O(n * m)         👉🏻  m = len(grid[0])

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
      int minOperations(vector<vector<int>>& grid, int x) {
            // Initialize total sum of elements
            int total = 0;

            // Iterate over each row in the grid
            for (const auto& row : grid) {
                  for (int n : row) {
                        total += n; // Add element to total sum

                        // Check if all elements have the same remainder when divided by x
                        if (n % x != grid[0][0] % x) {
                              return -1; // If not, return -1 since equalizing is impossible
                        }
                  }
            }

            // Flatten the grid into a 1D list
            vector<int> nums;
            for (const auto& row : grid) {
                  for (int n : row) {
                        nums.push_back(n);
                  }
            }

            // Sort the flattened list to find the median efficiently
            sort(nums.begin(), nums.end());

            // Initialize prefix sum and minimum operations result
            int prefixSum = 0;
            int minOperations = INT_MAX;

            // Iterate over sorted elements to compute minimum operations
            for (int i = 0; i < nums.size(); i++) {
                  // Cost to adjust all elements before index 'i' to nums[i]
                  int costLeft = nums[i] * i - prefixSum;

                  // Cost to adjust all elements after index 'i' to nums[i]
                  int costRight = total - prefixSum - (nums[i] * (nums.size() - i));

                  // Compute the total operations needed
                  int operation = (costLeft + costRight) / x;

                  // Store the minimum operations required
                  minOperations = min(minOperations, operation);

                  // Update prefix sum with the current element
                  prefixSum += nums[i];
            }

            return minOperations; // Return the minimum number of operations needed
      }
};
