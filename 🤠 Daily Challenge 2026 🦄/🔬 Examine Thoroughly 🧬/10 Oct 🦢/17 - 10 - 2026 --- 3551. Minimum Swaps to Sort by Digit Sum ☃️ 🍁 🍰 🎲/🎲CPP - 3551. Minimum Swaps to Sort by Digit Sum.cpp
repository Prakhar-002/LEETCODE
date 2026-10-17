//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3551

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
private:
      // Helper function to calculate sum of digits
      int digitSum(int n) {
            int res = 0;
            while (n > 0) {
                  res += n % 10;
                  n /= 10;
            }
            return res;
      }

public:
      int minSwaps(vector<int>& nums) {
            int n = nums.size();
            vector<pair<int, int>> ans;
            unordered_map<int, int> items;

            // Map each number to its original index and pair it with its digit sum
            for (int i = 0; i < n; ++i) {
                  items[nums[i]] = i;
                  ans.push_back({digitSum(nums[i]), nums[i]});
            }

            // Sort primarily by digit sum, secondarily by number value
            sort(ans.begin(), ans.end());

            // Target sorted order of elements
            vector<int> target(n);
            for (int i = 0; i < n; ++i) {
                  target[i] = ans[i].second;
            }

            int res = 0;

            // Iterate and swap elements to their target positions
            for (int i = 0; i < n; ++i) {
                  if (nums[i] != target[i]) {
                        res++;

                        // Find current index of the target element
                        int j = items[target[i]];

                        // Swap values in nums
                        swap(nums[i], nums[j]);

                        // Update positions in the map
                        items[nums[j]] = j;
                        items[nums[i]] = i;
                  }
            }

            return res;
      }
};