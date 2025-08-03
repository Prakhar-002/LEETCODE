//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
            int left = 0;             // Left pointer of the sliding window
            int sum = 0;              // Total fruits in the current window
            int ans = 0;              // Maximum fruits collected

            for (int right = 0; right < fruits.size(); right++) {
                  sum += fruits[right][1];   // Add fruits at the right index

                  // If steps exceed k, shrink the window from the left
                  while (left <= right && step(fruits, startPos, left, right) > k) {
                        sum -= fruits[left][1];  // Subtract the leftmost fruits
                        left++;                  // Move left pointer to the right
                  }

                  ans = max(ans, sum);     // Store the maximum result
            }

            return ans;    // Return the max fruits collected
      }

private:
      // Helper function to calculate steps required for left-to-right path
      int step(vector<vector<int>>& fruits, int startPos, int left, int right) {
            return min(
                        abs(startPos - fruits[right][0]),
                        abs(startPos - fruits[left][0])
                  ) + (fruits[right][0] - fruits[left][0]);
      }
};
