//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 875

//? ⌚ Time complexity ➺ O(n log(max(piles))) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int minEatingSpeed(vector<int>& piles, int H) {

            // Set binary search bounds
            int left = 1;
            int right = *max_element(piles.begin(), piles.end());

            // Binary search loop
            while (left < right) {

                  // Calculate mid speed
                  int mid = left + (right - left) / 2;

                  // Calculate total hours at this speed
                  int total = 0;
                  for (int pile : piles) {
                        total += (pile + mid - 1) / mid; // Ceiling division
                  }

                  // If too slow, increase speed
                  if (total > H) {
                        left = mid + 1;
                  } else {
                        right = mid;
                  }
            }

            // Return minimum valid speed
            return left;
      }
};
