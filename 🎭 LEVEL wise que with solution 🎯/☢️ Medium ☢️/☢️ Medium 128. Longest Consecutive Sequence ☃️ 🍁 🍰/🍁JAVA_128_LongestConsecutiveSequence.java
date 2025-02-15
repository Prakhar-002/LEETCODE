//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 128

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(n) 👉 using a set of length n

import java.util.*;

class Solution {
      public int longestConsecutive(int[] nums) {
            // Edge case: if the array is empty, return 0
            if (nums.length == 0) {
                  return 0;
            }

            // Use a HashSet to store unique numbers for O(1) lookups
            Set<Integer> numSet = new HashSet<>();
            for (int num : nums) {
                  numSet.add(num);
            }

            int longestConsecutive = 0; // Variable to track the longest sequence length

            // Iterate through the set of unique numbers
            for (int num : numSet) {
                  // Only check if 'num' is the start of a sequence
                  if (!numSet.contains(num - 1)) {
                        int currentNum = num; // Start of the sequence
                        int length = 1; // Initialize length to 1

                        // Expand the sequence as long as the next number exists in the set
                        while (numSet.contains(currentNum + 1)) {
                              currentNum++; // Move to the next number in sequence
                              length++; // Increase the sequence length
                        }

                        // Update the longest sequence found so far
                        longestConsecutive = Math.max(longestConsecutive, length);
                  }
            }

            // Return the longest consecutive sequence length
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
