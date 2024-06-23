//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public boolean checkSubarraySum(int[] nums, int k) {

            Map<Integer, Integer> reminderMap = new HashMap<>();

            int total = 0;

            // Initialize Map with 0 to -1
            reminderMap.put(0, -1); 

            // Iterate whole array
            for (int i = 0; i < nums.length; i++) {
                  // Take total sum of el
                  total += nums[i];

                  // FInd rem if k > 0 
                  int rem = k == 0 ? total : total % k; 

                  // If our rem not exist in map assign it with index
                  if (!reminderMap.containsKey(rem)) {
                        reminderMap.put(rem, i);
                  } 

                  // if our index - value of rem is greater than 1 means >= 2 return true
                  else if ((i - reminderMap.get(rem)) > 1) {
                        return true;
                  }
            }

            // return false for all other case
            return false;
      }
}