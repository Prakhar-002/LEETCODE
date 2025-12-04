//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1590

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int minSubarray(int[] nums, int p) {
            // Calculates the total sum of elements in the `nums` array
            long total = 0;
            for (int num : nums) {
                  total += num;
            }

            // remainder when `total` is divided by `p`
            int remain = (int) (total % p);

            // If `remain` is `0`, sum is already divisible by `p`
            if (remain == 0) {
                  // no elements need to be removed
                  return 0;
            }

            // keep track of the minimum subarray length found
            int subArrLen = nums.length;
            // used in calculating the dynamic prefix sums
            int cur_sum = 0;

            // HashMap to map remainders of prefix sums to their corresponding indices
            Map<Integer, Integer> remainToIdx = new HashMap<>();
            // `{0: -1}` to handle cases where a prefix sum is exactly divisible by `p`
            remainToIdx.put(0, -1);

            for (int i = 0; i < nums.length; i++) {
                  // Updated with the addition of the current number, `% p`
                  cur_sum = (cur_sum + nums[i]) % p;
                  // Calculates a modified prefix sum needed to find
                  // a matching subarray whose sum's remainder is `remain`
                  int prefix = (cur_sum - remain + p) % p;

                  // Checks if `prefix` is in `remainToIdx`. If it is
                  if (remainToIdx.containsKey(prefix)) {
                        // Calculates length of current subarray that ends at current index
                        // and whose sum's remainder equals to what's required (`remain`)
                        int length = i - remainToIdx.get(prefix);
                        // Updates the (`subArrLen`) if a shorter valid subarray is found
                        subArrLen = Math.min(subArrLen, length);
                  }

                  // The current `cur_sum` is mapped to the current index in `remainToIdx`
                  remainToIdx.put(cur_sum, i);
            }

            // if `subArrLen` remains equal to the length of `nums`,
            // it means no valid subarray was found, and thus `-1`
            // Otherwise, it returns the length of the minimum subarray found
            return subArrLen == nums.length ? -1 : subArrLen;
      }
}