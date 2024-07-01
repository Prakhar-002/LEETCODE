//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 128

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(n) 👉 using a set of length n

import java.util.*;

class Solution {
      public int longestConsecutive(int[] nums) {
            Set<Integer> numSet = new HashSet<>();
            for (int n : nums) {
                  numSet.add(n);
            }

            int longestConsecutive = 0;

            for (int n : nums) {
                  // check if our sequence is starting from n
                  if (!numSet.contains(n - 1)) {
                        int length = 0;
                        // we'll check our sequence starting from n
                        while (numSet.contains(n + length)) {
                              // check the sequence
                              length++;
                        }

                        n = n + length;
                        longestConsecutive = Math.max(longestConsecutive, length);
                  }
            }

            return longestConsecutive;
      }
}

// ------------------------------------------------------------

// * This is wrong ans but better runTime cause we used sorting in our method which take NLogN

//? ⌚ Time complexity -> O(NLogN) 👉 length of nums 

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int longestConsecutive(int[] nums) {
            int n = nums.length;
            if (n == 0 || n == 1) {
                  return n;
            }

            // sort first
            Arrays.sort(nums);
            int i = 1;
            int count = 0;
            int longestConsecutive = 0;

            while (i < n) {
                  // for [0, 1, 1, 2] ans is 3
                  if (nums[i] - nums[i - 1] <= 1) {
                        // increase our count by difference so it can be 0 or 1
                        count += nums[i] - nums[i - 1];
                  } else {
                        // take the max
                        longestConsecutive = Math.max(longestConsecutive, count);
                        count = 0;
                  }
                  i++;
            }

            return Math.max(longestConsecutive, count) + 1;
      }
}
