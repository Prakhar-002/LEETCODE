//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3477

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets) {
            int unplacedFruits = 0; // Counter for unplaced fruits

            for (int fruit : fruits) {
                  bool unplug = true; // Assume this fruit is unplaced

                  for (int i = 0; i < baskets.size(); i++) {
                        if (fruit <= baskets[i]) {
                              baskets[i] = 0; // Mark basket as used
                              unplug = false; // Fruit placed successfully
                              break;
                        }
                  }

                  if (unplug) {
                        unplacedFruits++; // Count as unplaced if not inserted
                  } 
            }

            return unplacedFruits; // Return final count
      }
};
