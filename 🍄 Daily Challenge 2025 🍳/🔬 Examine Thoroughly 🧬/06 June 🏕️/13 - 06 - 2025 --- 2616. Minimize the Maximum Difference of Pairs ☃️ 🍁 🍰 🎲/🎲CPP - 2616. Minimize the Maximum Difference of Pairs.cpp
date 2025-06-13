//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2616

//? ⌚ Time complexity ➺ O(n*logV+ n*log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minimizeMax(vector<int>& nums, int p) {
            sort(nums.begin(), nums.end());  // Step 1: Sort to easily find close pairs
            int n = nums.size();

            int left = 0;
            int right = nums[n - 1] - nums[0];  // Max possible pair difference

            // Step 2: Binary search to minimize the max difference
            while (left < right) {
                  int mid = left + (right - left) / 2;

                  // Step 3: Check if we can make at least p valid pairs
                  if (countValidPairs(nums, mid, p)) {
                        right = mid;  // Try smaller max difference
                  } else {
                        left = mid + 1;  // Try larger max difference
                  }
            }

            return left;  // Final answer
      }

private:
      // Helper function to count if at least p valid pairs exist
      bool countValidPairs(vector<int>& nums, int threshold, int p) {
            int count = 0;
            int i = 0;
            int n = nums.size();

            while (i < n - 1) {
                  if (nums[i + 1] - nums[i] <= threshold) {
                        count++;
                        i++;  // Skip next number in the pair
                  }
                  i++;  // Move forward
            }

            return count >= p;
      }
};
