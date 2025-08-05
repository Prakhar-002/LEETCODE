//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3477

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

// Function to count unplaced fruits
int numOfUnplacedFruits(int fruits[], int n, int baskets[], int m) {
      int unplacedFruits = 0; // Count of fruits that couldn't be placed

      for (int i = 0; i < n; i++) {
            int fruit = fruits[i]; // Current fruit
            int unplug = 1;        // Assume fruit can't be placed

            for (int j = 0; j < m; j++) {
                  if (fruit <= baskets[j]) {
                        baskets[j] = 0; // Mark basket as used
                        unplug = 0;    // Fruit placed
                        break;         // Exit inner loop
                  }
            }

            unplacedFruits += unplug; // If not placed, count it
      }

      return unplacedFruits; // Return final count
}
