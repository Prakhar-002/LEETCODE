//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1224

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public int maxEqualFreq(int[] nums) {
            // cnt[num] = how many times num has appeared so far
            Map<Integer, Integer> cnt = new HashMap<>();
            // freq[f] = how many distinct numbers currently have frequency f
            Map<Integer, Integer> freq = new HashMap<>();

            int maxF = 0; // Highest frequency seen so far
            int res = 0; // Longest valid prefix length

            for (int i = 0; i < nums.length; i++) {
                  int num = nums[i];

                  // ---------- Update count for current number ----------
                  int prevCnt = cnt.getOrDefault(num, 0);
                  cnt.put(num, prevCnt + 1);

                  // ---------- Update frequency map ----------
                  // Remove old frequency bucket
                  freq.put(prevCnt, freq.getOrDefault(prevCnt, 0) - 1);
                  // Add to new frequency bucket
                  freq.put(prevCnt + 1, freq.getOrDefault(prevCnt + 1, 0) + 1);

                  // ---------- Track max frequency ----------
                  maxF = Math.max(maxF, prevCnt + 1);

                  // ---------- Check 3 validity conditions ----------
                  // Condition 1: every number appears exactly maxF times
                  // and removing one still leaves equal freqs
                  // e.g. [1,1,2,2] -> maxF=2, freq[2]=2, i=3 => 2*2==3? No
                  boolean cond1 = (long) maxF * freq.getOrDefault(maxF, 0) == i;

                  // Condition 2: all but one number appear maxF-1 times,
                  // and that one number appears maxF times (remove it once)
                  // e.g. [1,1,1,2,2] -> can remove one '1'
                  boolean cond2 = (long) (maxF - 1) * (freq.getOrDefault(maxF - 1, 0) + 1) == i;

                  // Condition 3: every number appears exactly once (maxF == 1)
                  // removing any one element keeps the rest valid
                  boolean cond3 = maxF == 1;

                  if (cond1 || cond2 || cond3) {
                        res = i + 1;
                  }
            }

            return res;
      }
}