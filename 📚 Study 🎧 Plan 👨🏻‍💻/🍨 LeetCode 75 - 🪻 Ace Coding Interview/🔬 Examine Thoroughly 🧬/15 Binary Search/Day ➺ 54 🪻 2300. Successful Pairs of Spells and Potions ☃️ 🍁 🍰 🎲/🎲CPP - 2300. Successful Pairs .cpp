//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2300

//? ⌚ Time complexity ➺ O(m log m + n log m) 👉🏻  n = len(spells)

//? 🧺 Space complexity ➺ O(1)  ->  m = n = len(potions)

class Solution {
public:
      vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success) {
            int n = spells.size();  // Number of spells
            int m = potions.size(); // Number of potions
            vector<int> result(n);  // Result vector

            sort(potions.begin(), potions.end()); // Sort potions

            for (int i = 0; i < n; ++i) {
                  int spell = spells[i];
                  int left = 0, right = m - 1;

                  // Binary search to find the first valid potion
                  while (left <= right) {
                        int mid = left + (right - left) / 2;
                        long long product = 1LL * spell * potions[mid];

                        if (product >= success) {
                              right = mid - 1;
                        }
                        else {
                              left = mid + 1;
                        }
                  }

                  result[i] = m - left; // Count of valid potions
            }

            return result;
      }
};
