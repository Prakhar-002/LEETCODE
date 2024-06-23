//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public int subarraysDivByK(int[] nums, int k) {
            int prefixSum = 0;
            int res = 0;

            Map<Integer, Integer> prefixCntMap = new HashMap<>();

            prefixCntMap.put(0, 1); 

            for (int n : nums) {
                  prefixSum += n;
                  int reminder = prefixSum % k;

                  if (reminder < 0) {
                        reminder += k;
                  }

                  res += prefixCntMap.containsKey(reminder) ? prefixCntMap.get(reminder) : 0;
                  prefixCntMap.put(reminder, prefixCntMap.getOrDefault(reminder, 0) + 1);
            }

            return res;
      }
}