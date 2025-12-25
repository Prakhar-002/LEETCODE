//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3075

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(happiness)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long maximumHappinessSum(vector<int>& happiness, int k) {
            // Sort in descending order to pick the k largest values
            sort(happiness.rbegin(), happiness.rend());

            long long ans = 0;

            // Select the top k children
            for (int i = 0; i < k; i++) {
                  // Each child's happiness decreases by their selection turn (i)
                  int child = happiness[i] - i;
                  // Add only if positive (happiness can't go negative)
                  ans += max(0, child);
            }

            return ans;
      }
};
