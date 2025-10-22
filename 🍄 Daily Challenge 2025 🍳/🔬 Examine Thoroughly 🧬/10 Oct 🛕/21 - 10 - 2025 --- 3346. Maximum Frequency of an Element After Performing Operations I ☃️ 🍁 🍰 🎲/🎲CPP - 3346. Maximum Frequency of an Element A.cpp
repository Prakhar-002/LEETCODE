//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3346

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxFrequency(vector<int>& nums, int k, int numOperations) {
            sort(nums.begin(), nums.end());    // Sort input
            int ans = 0;
            unordered_map<int, int> numCount;  // Frequency map of distinct elements
            int lastIndex = 0;

            // Count frequencies of distinct numbers
            for (int i = 0; i < (int)nums.size(); ++i) {
                  if (nums[i] != nums[lastIndex]) {
                        int count = i - lastIndex;
                        numCount[nums[lastIndex]] = count;
                        ans = max(ans, count);
                        lastIndex = i;
                  }
            }

            int count = nums.size() - lastIndex;
            numCount[nums[lastIndex]] = count;
            ans = max(ans, count);

            // Iterate over range from min to max numbers
            for (int i = nums[0]; i <= nums.back(); i++) {
                  int left = leftBound(nums, i - k);
                  int right = rightBound(nums, i + k);
                  if (right < left) continue;

                  int tempAns;
                  if (numCount.find(i) != numCount.end()) {
                        tempAns = min(right - left + 1, numCount[i] + numOperations);
                  } else {
                        tempAns = min(right - left + 1, numOperations);
                  }

                  ans = max(ans, tempAns);
            }
            return ans;
      }

private:
      // Binary search left bound (first index >= val)
      int leftBound(const vector<int>& nums, int val) {
            int left = 0, right = nums.size() - 1, res = nums.size();
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] >= val) {
                        res = mid;
                        right = mid - 1;
                  } else {
                        left = mid + 1;
                  }
            }
            return res;
      }

      // Binary search right bound (last index <= val)
      int rightBound(const vector<int>& nums, int val) {
            int left = 0, right = nums.size() - 1, res = -1;
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] <= val) {
                        res = mid;
                        left = mid + 1;
                  } else {
                        right = mid - 1;
                  }
            }
            return res;
      }
};
