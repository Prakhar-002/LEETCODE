//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 135

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int candy(int[] ratings) {
            int n = ratings.length;

            // Initialize an array to store candies for each child
            int[] candies = new int[n];

            // Give each child at least 1 candy
            Arrays.fill(candies, 1);

            // Pass 1: Left to right
            for (int i = 1; i < n; i++) {
                  // If the current child has a higher rating than the previous one
                  if (ratings[i] > ratings[i - 1]) {
                        // Give 1 more candy than the previous child
                        candies[i] = candies[i - 1] + 1;
                  }
            }

            // Pass 2: Right to left
            int total = candies[n - 1]; // Start with the last child's candies
            for (int i = n - 2; i >= 0; i--) {
                  // If the current child has a higher rating than the next one
                  if (ratings[i] > ratings[i + 1]) {
                        // Ensure they have more candies than the next child
                        candies[i] = Math.max(candies[i], candies[i + 1] + 1);
                  }
                  total += candies[i];
            }

            return total;
      }
}