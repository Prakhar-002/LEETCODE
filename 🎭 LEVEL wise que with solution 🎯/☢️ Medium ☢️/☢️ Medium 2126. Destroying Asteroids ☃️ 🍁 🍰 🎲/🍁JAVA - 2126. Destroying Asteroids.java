//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2126

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public boolean asteroidsDestroyed(int mass, int[] asteroids) {
            // Sort so we always face the smallest asteroid first
            Arrays.sort(asteroids);

            long currentMass = mass; // Use long to prevent overflow after absorptions

            for (int asteroid : asteroids) {
                  // Can't destroy asteroid — it's too heavy
                  if (currentMass < asteroid)
                        return false;

                  // Absorb asteroid and grow
                  currentMass += asteroid;
            }

            return true;
      }
}