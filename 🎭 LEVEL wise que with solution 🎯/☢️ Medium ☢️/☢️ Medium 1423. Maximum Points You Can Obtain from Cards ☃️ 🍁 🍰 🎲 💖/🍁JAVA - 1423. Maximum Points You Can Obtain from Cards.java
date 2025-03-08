// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1423

// ? ⌚ Time complexity ➺ O(k)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxScore(int[] cardPoints, int k) {
            int n = cardPoints.length;  // Total number of cards

            // Step 1: Compute the sum of the first k elements (taking from the left)
            int leftSum = 0;
            for (int i = 0; i < k; i++) {
                  leftSum += cardPoints[i];
            }

            int maxPoints = leftSum; // Initial max sum when taking only from the left
            int rightSum = 0; // Sum of elements taken from the right

            // Step 2: Move the window by removing cards from the left and adding from the right
            for (int i = 0; i < k; i++) {
                  leftSum -= cardPoints[k - 1 - i];  // Remove leftmost selected card
                  rightSum += cardPoints[n - 1 - i]; // Add rightmost card to the sum
                  maxPoints = Math.max(maxPoints, leftSum + rightSum); // Update max score
            }

            return maxPoints;  // Return the maximum score possible
      }
}
