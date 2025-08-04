//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
      int totalFruit(std::vector<int> &fruits) {
            std::unordered_map<int, int> bucket; // Stores fruit type and its frequency
            int l = 0;                           // Left pointer of window
            int maxFruits = 0;                   // Tracks max fruits collected

            for (int r = 0; r < fruits.size(); r++) {
                  bucket[fruits[r]]++; // Add current fruit to the bucket

                  // If more than 2 types of fruits, shrink window from left
                  while (bucket.size() > 2) {
                        bucket[fruits[l]]--; // Reduce count at l
                        if (bucket[fruits[l]] == 0) {
                              bucket.erase(fruits[l]); // Remove fruit if count becomes 0
                        }
                        l++; // Move left pointer
                  }

                  // Update maxFruits with current window size
                  maxFruits = std::max(maxFruits, r - l + 1);
            }

            return maxFruits;
      }
};
