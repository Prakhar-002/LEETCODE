//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;

class Solution {
      public int totalFruit(int[] fruits) {
            HashMap<Integer, Integer> bucket = new HashMap<>(); // Map to store fruit type -> count
            int l = 0; // Left pointer of the window
            int maxFruits = 0; // To track the max number of fruits in any valid window

            for (int r = 0; r < fruits.length; r++) {
                  // Add the current fruit to the map and increase its count
                  bucket.put(fruits[r], bucket.getOrDefault(fruits[r], 0) + 1);

                  // If there are more than 2 fruit types, shrink the window from the left
                  while (bucket.size() > 2) {
                        bucket.put(fruits[l], bucket.get(fruits[l]) - 1); // Decrease count at l
                        if (bucket.get(fruits[l]) == 0) {
                              bucket.remove(fruits[l]); // Remove it if count becomes zero
                        }

                        l++; // Move left pointer 
                  }

                  // Update maxFruits with the size of the current valid window
                  maxFruits = Math.max(maxFruits, r - l + 1);
            }

            return maxFruits;
      }
}
