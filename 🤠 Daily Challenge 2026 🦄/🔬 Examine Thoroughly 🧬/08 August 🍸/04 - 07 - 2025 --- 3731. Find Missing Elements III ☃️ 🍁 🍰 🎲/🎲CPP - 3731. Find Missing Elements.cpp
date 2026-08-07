//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3731

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<int> findMissingElements(vector<int>& nums) {

            // Sort the array
            sort(nums.begin(), nums.end());

            // Stores missing numbers
            vector<int> res;

            // Traverse adjacent pairs
            for (int i = 0; i < nums.size() - 1; i++) {

                  int cur = nums[i];
                  int nxt = nums[i + 1];

                  // Add all numbers missing between cur and nxt
                  while (cur + 1 != nxt) {
                        res.push_back(cur + 1);
                        cur++;
                  }
            }

            return res;
      }
};