//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 594

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int findLHS(vector<int>& nums) {
            unordered_map<int, int> freq;

            // Count the frequency of each element
            for (int num : nums) {
                  freq[num]++;
            }

            int maxLength = 0;

            for (auto& [num, count] : freq) {
                  // If num + 1 exists, update maximum length
                  if (freq.count(num + 1)) {
                        maxLength = max(maxLength, count + freq[num + 1]);
                  }
            }

            return maxLength;
      }
};
