//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2099

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<int> maxSubsequence(vector<int> &nums, int k) {
            int n = nums.size();

            // Step 1: Pair each number with its index
            vector<pair<int, int>> pairs;
            for (int i = 0; i < n; ++i) {
                  pairs.push_back({i, nums[i]}); // {index, value}
            }

            // Step 2: Sort by value in descending order
            sort(pairs.begin(), pairs.end(), [](auto &a, auto &b)
                  { return a.second > b.second; });

            // Step 3: Keep top-k elements
            vector<pair<int, int>> topK(pairs.begin(), pairs.begin() + k);

            // Step 4: Sort back by original index
            sort(topK.begin(), topK.end());

            // Step 5: Extract values
            vector<int> res;
            for (auto &p : topK) {
                  res.push_back(p.second);
            }

            return res;
      }
};
