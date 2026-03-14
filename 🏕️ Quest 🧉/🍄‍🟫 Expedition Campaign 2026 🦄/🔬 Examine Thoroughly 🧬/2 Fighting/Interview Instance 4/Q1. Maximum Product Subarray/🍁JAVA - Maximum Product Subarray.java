//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 152

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxProduct(int[] nums) {

            // 'low' → minimum product ending at current position
            // 'high' → maximum product ending at current position
            // Dono track karna zaroori hai because negative * negative = positive
            int low = 1, high = 1;

            // Result initially array ke maximum element se start karte hain
            int res = nums[0];
            for (int n : nums) {
                  res = Math.max(res, n);
            }

            // Traverse through each number
            for (int n : nums) {

                  // Agar element 0 hai to product chain break ho jati hai
                  // Isliye low aur high reset kar dete hain
                  if (n == 0) {
                        low = 1;
                        high = 1;
                        continue;
                  }

                  // Previous values store karte hain
                  int tempLow = low;
                  int tempHigh = high;

                  // 3 possibilities check karte hain
                  low = Math.min(Math.min(tempHigh * n, tempLow * n), n);
                  high = Math.max(Math.max(tempHigh * n, tempLow * n), n);

                  // Maximum product update
                  res = Math.max(res, high);
            }

            return res;
      }
}