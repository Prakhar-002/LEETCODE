#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 875

#? ⌚ Time complexity ➺ O(n log(max(piles))) 👉🏻  n = len(piles)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minEatingSpeed(self, piles, H):
            # Set the search range from 1 to the max number of bananas in a pile
            l = 1
            r = max(piles)

            # Binary search to find the minimum eating speed
            while l < r:

                  # Use integer mid to avoid floating point errors
                  m = (l + r) // 2

                  # Calculate total hours needed at speed m
                  total_hours = sum((p + m - 1) // m for p in piles)

                  # If more hours are needed than H, speed is too slow
                  if total_hours > H:
                        l = m + 1
                  else:
                        r = m  # Try a slower speed

            # Return the minimum valid eating speed
            return l
