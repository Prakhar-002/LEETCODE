//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1508

//? ⌚ Time complexity ➺ O(n^2 Log n) 👉🏻 n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2) 👉🏻 building array of sum of subArray

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int rangeSum(vector<int>& nums, int n, int left, int right) {
            // have a variable by which we've to mod 
            const int MOD = 1000000007;

            // construct an array which is sum of subArray
            vector<int> subArraySum;

            // take the sum of all subarray
            for (int i = 0; i < n; i++) {
                  int curSum = 0;
                  for (int j = i; j < n; j++) {
                        curSum = (curSum + nums[j]) % MOD;
                        subArraySum.push_back(curSum);
                  }
            }

            // sort our subarray sum array
            sort(subArraySum.begin(), subArraySum.end());

            int subArrayNumSum = 0;

            // value we wanted to sum are from left to right
            // index of those values will be left - 1 to right - 1
            for (int num = left - 1; num < right; num++) {
                  subArrayNumSum = (subArrayNumSum + subArraySum[num]) % MOD;
            }

            return subArrayNumSum;
      }
};