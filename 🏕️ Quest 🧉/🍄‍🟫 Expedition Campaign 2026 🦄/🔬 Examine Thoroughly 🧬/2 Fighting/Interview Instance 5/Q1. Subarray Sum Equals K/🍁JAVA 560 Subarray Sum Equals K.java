//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public int subarraySum(int[] nums, int k) {
            int res = 0;
            int curSum = 0;

            Map<Integer, Integer> prefixMap = new HashMap<>();

            prefixMap.put(0, 1);

            for (int n : nums) {
                  curSum += n; 
                  int diff = curSum - k;

                  res += prefixMap.containsKey(diff) ? prefixMap.get(diff) : 0;
                  prefixMap.put(curSum, prefixMap.getOrDefault(curSum, 0) + 1);
            }

            return res;
      }
}