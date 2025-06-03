//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 875

//? ⌚ Time complexity ➺ O(n log(max(piles))) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minEatingSpeed(int[] piles, int H) {

            // Set the binary search bounds:
            // Minimum speed is 1 banana/hour
            // Maximum speed is the largest pile
            int left = 1;
            int right = 0;

            // Find the max value in piles to set right boundary
            for (int pile : piles) {
                  if (pile > right) {
                        right = pile;
                  }
            }

            // Binary search to find the minimum valid eating speed
            while (left < right) {

                  // Calculate mid speed
                  int mid = left + (right - left) / 2;

                  // Calculate total hours needed at this speed
                  int total = 0;
                  for (int pile : piles) {
                        // Use ceiling division: (pile + mid - 1) / mid
                        total += (pile + mid - 1) / mid;
                  }

                  // If total hours is more than H, speed is too slow
                  if (total > H) {
                        left = mid + 1;
                  } else {
                        // Try a slower speed
                        right = mid;
                  }
            }

            // Return the minimum speed at which Koko can finish on time
            return left;
      }
}
