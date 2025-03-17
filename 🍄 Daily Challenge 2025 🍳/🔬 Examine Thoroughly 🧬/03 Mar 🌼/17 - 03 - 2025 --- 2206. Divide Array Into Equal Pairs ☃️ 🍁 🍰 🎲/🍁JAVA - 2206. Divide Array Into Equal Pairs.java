// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2206

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n) 

import java.util.*;

class Solution {
      public boolean divideArray(int[] nums) {
            // HashMap to store frequency of each number
            HashMap<Integer, Integer> freqMap = new HashMap<>();

            // Count occurrences of each number
            for (int num : nums) {
                  freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
            }

            // Check if every number appears an even number of times
            for (int count : freqMap.values()) {
                  if (count % 2 != 0) {
                        return false;
                  }
            }

            return true;
      }
}
