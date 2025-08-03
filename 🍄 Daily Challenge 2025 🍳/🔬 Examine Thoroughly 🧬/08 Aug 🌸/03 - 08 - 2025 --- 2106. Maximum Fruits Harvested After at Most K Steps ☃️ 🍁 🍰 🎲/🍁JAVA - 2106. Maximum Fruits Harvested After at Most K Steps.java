//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      public int maxTotalFruits(int[][] fruits, int startPos, int k) {
            int left = 0; // Pointer to the left index of the current window
            int sum = 0; // Sum of fruits in the current window
            int ans = 0; // Stores the maximum fruits collected

            for (int right = 0; right < fruits.length; right++) {
                  sum += fruits[right][1]; // Add fruits at current right position

                  // Shrink the window if step distance exceeds k
                  while (left <= right && step(fruits, startPos, left, right) > k) {
                        sum -= fruits[left][1]; // Remove fruits at left as we move window
                        left++; // Move left pointer to the right
                  }

                  ans = Math.max(ans, sum); // Update the answer with maximum fruits collected
            }

            return ans; // Return the final result
      }

      // Helper method to calculate steps required to go from startPos to pick fruits
      // between left and right
      private int step(int[][] fruits, int startPos, int left, int right) {
            return Math.min(
                        Math.abs(startPos - fruits[right][0]),
                        Math.abs(startPos - fruits[left][0])
                  ) + fruits[right][0] - fruits[left][0];
      }
}
