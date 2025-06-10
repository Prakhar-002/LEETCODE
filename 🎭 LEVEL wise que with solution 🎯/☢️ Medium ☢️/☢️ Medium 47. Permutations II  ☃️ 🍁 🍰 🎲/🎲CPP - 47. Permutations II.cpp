//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 47

//? ⌚ Time complexity ➺ O(n × n!) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n × n!)

class Solution {
public:
      vector<vector<int>> permuteUnique(vector<int> &nums) {
            vector<vector<int>> res;
            vector<int> perm;
            unordered_map<int, int> count;

            // Count frequency of each number
            for (int num : nums) {
                  count[num]++;
            }

            dfs(nums.size(), count, perm, res);
            return res;
      }

      void dfs(int len, unordered_map<int, int> &count, vector<int> &perm, vector<vector<int>> &res) {
            if (perm.size() == len) {
                  res.push_back(perm); // Store a copy
                  return;
            }

            for (auto &[num, freq] : count) {
                  if (freq > 0) {
                        perm.push_back(num); // Choose number
                        count[num]--;        // Decrease frequency

                        dfs(len, count, perm, res); // Recurse

                        count[num]++;    // Backtrack
                        perm.pop_back(); // Undo choice
                  }
            }
      }
};
