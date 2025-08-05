//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3477

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1) 

public class Solution {
      public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
            int unplacedFruits = 0; // To count the fruits that can't be placed

            for (int fruit : fruits) {
                  boolean unplug = true; // Assume this fruit is unplaced

                  for (int i = 0; i < baskets.length; i++) {
                        if (fruit <= baskets[i]) {
                              baskets[i] = 0; // Mark basket as used
                              unplug = false; // Fruit is placed
                              break;
                        }
                  }

                  if (unplug) {
                        unplacedFruits++; // Count this fruit as unplaced
                  }
            }

            return unplacedFruits; // Return total unplaced fruits
      }
}
