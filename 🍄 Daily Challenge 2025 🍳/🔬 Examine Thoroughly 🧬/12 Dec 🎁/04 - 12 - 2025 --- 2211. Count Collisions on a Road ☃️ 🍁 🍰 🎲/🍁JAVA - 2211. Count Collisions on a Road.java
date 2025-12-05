//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countCollisions(String directions) {
            int n = directions.length();
            int left = 0; // First non-"L" position
            int right = n - 1; // Last non-"R" position

            // Find effective range (skip leading Ls, trailing Rs)
            while (left < n && directions.charAt(left) == 'L')
                  left++;
            while (right >= 0 && directions.charAt(right) == 'R')
                  right--;

            if (left > right)
                  return 0; // All cars escape

            // Count non-"S" cars in effective range
            int collisions = 0;
            for (int i = left; i <= right; i++) {
                  if (directions.charAt(i) != 'S') {
                        collisions++;
                  }
            }

            return collisions;
      }
}
