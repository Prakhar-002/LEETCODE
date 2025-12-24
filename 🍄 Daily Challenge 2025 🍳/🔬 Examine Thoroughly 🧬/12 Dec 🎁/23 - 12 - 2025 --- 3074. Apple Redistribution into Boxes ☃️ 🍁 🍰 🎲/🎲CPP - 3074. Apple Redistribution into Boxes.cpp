//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3074

//? ⌚ Time complexity ➺ O(m log m) 👉🏻  m = len(capacity)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
            // Count total apples from all packs
            int apples = 0;
            for (int a : apple) {
                  apples += a;
            }

            // Sort boxes by capacity in descending order (largest first)
            // This greedy strategy minimizes the number of boxes used
            sort(capacity.rbegin(), capacity.rend());

            int boxes = 0; // number of boxes used so far

            // Use boxes one by one (largest first)
            for (int n : capacity) {
                  // If all apples are already stored, return current box count
                  if (apples <= 0) {
                        return boxes;
                  }
                  // Use this box: subtract its capacity from remaining apples
                  apples -= n;
                  boxes++;
            }

            // If we finish the loop, return the total number of boxes used
            return boxes;
      }
};
