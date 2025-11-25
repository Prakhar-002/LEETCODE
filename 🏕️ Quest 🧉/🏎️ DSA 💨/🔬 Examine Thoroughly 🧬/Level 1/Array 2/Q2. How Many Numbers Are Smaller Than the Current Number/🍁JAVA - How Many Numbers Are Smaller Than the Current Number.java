//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Java version
import java.util.*;

class Solution {
      public int[] smallerNumbersThanCurrent(int[] nums) {
            int n = nums.length;
            int[] sortedNums = nums.clone();
            Arrays.sort(sortedNums);

            // Map to store smallest index (rank) for each number
            Map<Integer, Integer> rank = new HashMap<>();
            for (int i = 0; i < n; i++) {
                  rank.putIfAbsent(sortedNums[i], i);
            }

            int[] result = new int[n];
            for (int i = 0; i < n; i++) {
                  result[i] = rank.get(nums[i]);
            }
            return result;
      }
}
