//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 42

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(Height)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
      public:
            int trap(vector<int>& height) {
                  int n = height.size();

                  // Array to store the maximum height to the right of each element
                  vector<int> right(n);
                  right[0] = height[0];

                  // Populate the right max array
                  for (int i = 1; i < n; i++) {
                        right[i] = max(right[i - 1], height[i]);
                  }

                  // Array to store the maximum height to the left of each element
                  vector<int> left(n);
                  left[n - 1] = height[n - 1];

                  // Populate the left max array
                  for (int i = n - 2; i >= 0; i--) {
                        left[i] = max(left[i + 1], height[i]);
                  }

                  // Calculate the total volume of water trapped
                  int volume = 0;
                  
                  for (int i = 0; i < n; i++) {
                        // Water trapped at each index is determined by the minimum
                        // of left and right max heights minus the height at the index
                        volume += (min(left[i], right[i]) - height[i]);
                  }

                  return volume; // Return the total water trapped
            }
};
