//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 347

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

class Solution {
public:
      vector<int> topKFrequent(vector<int>& nums, int k) {
            // Step 1: Count the frequency of each number
            unordered_map<int, int> count;
            for (int num : nums) {
                  count[num]++;
            }

            // Step 2: Create a frequency bucket (list of lists)
            vector<vector<int>> freq(nums.size() + 1);

            // Step 3: Fill the frequency bucket with numbers corresponding to their frequencies
            for (auto& [num, cnt] : count) {
                  freq[cnt].push_back(num);
            }

            // Step 4: Prepare the result list
            vector<int> res;

            // Step 5: Iterate through the frequency bucket in reverse order (high to low frequency)
            for (int i = freq.size() - 1; i > 0; i--) {
                  for (int num : freq[i]) {
                        res.push_back(num);
                        // Stop when we have collected `k` elements
                        if (res.size() == k) {
                              return res;
                        }
                  }
            }
            return res;
      }
};
