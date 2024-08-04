//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1508

//? ⌚ Time complexity ➺ O(n^2 Log n) 👉🏻 n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2) 👉🏻 building array of sum of subArray

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {
      public int rangeSum(int[] nums, int n, int left, int right) {
            // have a variable by which we've to mod
            int MOD = 1000000007;

            // construct an array which is sum of subArray
            List<Integer> subArraySum = new ArrayList<>();

            // take the sum of all subarray
            for (int i = 0; i < n; i++) {
                  int curSum = 0;
                  for (int j = i; j < n; j++) {
                        curSum = (curSum + nums[j]) % MOD;
                        subArraySum.add(curSum);
                  }
            }

            // sort our subarray sum array
            Collections.sort(subArraySum);

            int subArrayNumSum = 0;

            // value we wanted to sum are from left to right
            // index of those values will be left - 1 to right - 1
            for (int num = left - 1; num < right; num++) {
                  subArrayNumSum = (subArrayNumSum + subArraySum.get(num)) % MOD;
            }

            return subArrayNumSum;
      }
}