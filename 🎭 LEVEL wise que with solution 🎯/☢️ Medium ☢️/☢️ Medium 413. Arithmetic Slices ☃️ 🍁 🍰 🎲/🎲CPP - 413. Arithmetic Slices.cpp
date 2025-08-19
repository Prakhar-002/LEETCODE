//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 413

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>

class Solution {
public:
      int numberOfArithmeticSlices(vector<int>& nums) {
            // Get the total number of elements in the input vector.
            int n = nums.size();
            // An arithmetic slice requires at least 3 elements.
            if (n < 3) {
                  return 0;
            }

            // `total` will accumulate the final count of all arithmetic slices.
            int total = 0;
            // `prev` stores the number of new arithmetic slices ending at the previous index.
            int prev = 0;

            // Iterate from the third element (index 2) to the end of the vector.
            for (int i = 2; i < n; ++i) {
                  // Check if the current element maintains the arithmetic progression.
                  if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
                        // If the progression continues, the number of slices ending at `i` is one
                        // more than the number ending at `i-1`.
                        prev += 1;
                        // Add this count of new slices to our running total.
                        total += prev;
                  } else {
                        // If the sequence is broken, reset the counter.
                        prev = 0;
                  }
            }

            // After checking all elements, return the accumulated total.
            return total;
      }
};
