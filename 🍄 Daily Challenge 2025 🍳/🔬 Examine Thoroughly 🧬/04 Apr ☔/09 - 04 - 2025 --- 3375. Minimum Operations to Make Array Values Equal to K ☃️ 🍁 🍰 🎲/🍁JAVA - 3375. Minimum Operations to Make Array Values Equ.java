//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public int minOperations(int[] nums, int k) {
            Set<Integer> unique_set = new HashSet<>(); // Set to store unique numbers

            for (int num : nums) {
                  if (num < k) {
                        return -1; // Return -1 if any number is less than k
                  }
                  unique_set.add(num); // Add number to set
            }

            // If k is in the set, subtract 1; otherwise return size as is
            return unique_set.contains(k) ? unique_set.size() - 1 : unique_set.size();
      }
}
