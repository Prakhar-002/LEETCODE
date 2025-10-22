//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3347

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Calculates max frequency after adjusting nums elements by ±k at most numOperations times
      int maxFrequency(vector<int>& nums, int k, int numOperations) {
            sort(nums.begin(), nums.end());  // Sort for fast search and grouping

            int ans = 0;
            unordered_map<int, int> numCount;  // Frequency map of distinct vals
            int lastIndex = 0;

            // Calculate frequencies of distinct numbers, add mode candidates
            for (int i = 0; i < (int)nums.size(); ++i) {
                  if (nums[i] != nums[lastIndex]) {
                        int count = i - lastIndex;
                        numCount[nums[lastIndex]] = count;
                        ans = max(ans, count);
                        addMode(nums[lastIndex], k, nums, numCount);
                        lastIndex = i;
                  }
            }
            int count = nums.size() - lastIndex;
            numCount[nums[lastIndex]] = count;
            ans = max(ans, count);
            addMode(nums[lastIndex], k, nums, numCount);

            // Extract unique modes and sort
            vector<int> sortedModes;
            for (auto& p : numCount) sortedModes.push_back(p.first);
            sort(sortedModes.begin(), sortedModes.end());

            for (int mode : sortedModes) {
                  int l = leftBound(nums, mode - k);
                  int r = rightBound(nums, mode + k);
                  if (r < l) continue;

                  int tempAns;
                  if (numCount.find(mode) != numCount.end()) {
                        tempAns = min(r - l + 1, numCount[mode] + numOperations);
                  } else {
                        tempAns = min(r - l + 1, numOperations);
                  }
                  ans = max(ans, tempAns);
            }
            return ans;
      }

private:
      void addMode(int val, int k, const vector<int>& nums, unordered_map<int, int>& numCount) {
            if (val - k >= nums.front()) numCount[val - k];
            if (val + k <= nums.back()) numCount[val + k];
      }

      int leftBound(const vector<int>& nums, int val) {
            int left = 0, right = nums.size() - 1, res = nums.size();
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] >= val) {
                        res = mid;
                        right = mid - 1;
                  } else left = mid + 1;
            }
            return res;
      }

      int rightBound(const vector<int>& nums, int val) {
            int left = 0, right = nums.size() - 1, res = -1;
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] <= val) {
                        res = mid;
                        left = mid + 1;
                  } else right = mid - 1;
            }
            return res;
      }
};
