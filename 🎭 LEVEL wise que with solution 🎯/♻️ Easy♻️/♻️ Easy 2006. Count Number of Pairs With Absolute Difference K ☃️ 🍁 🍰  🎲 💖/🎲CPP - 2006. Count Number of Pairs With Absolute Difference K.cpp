//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2006

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = Unique(nums)

class Solution {
public:
      int countKDifference(vector<int> &nums, int k) {
            unordered_map<int, int> countMap;

            // Count frequency of each number
            for (int num : nums) {
                  countMap[num]++;
            }

            int pairs = 0;

            // For each number, check if (num + k) exists
            for (auto &[num, freq] : countMap) {
                  if (countMap.count(num + k)) {
                        pairs += freq * countMap[num + k];
                  }
            }

            return pairs;
      }
};
