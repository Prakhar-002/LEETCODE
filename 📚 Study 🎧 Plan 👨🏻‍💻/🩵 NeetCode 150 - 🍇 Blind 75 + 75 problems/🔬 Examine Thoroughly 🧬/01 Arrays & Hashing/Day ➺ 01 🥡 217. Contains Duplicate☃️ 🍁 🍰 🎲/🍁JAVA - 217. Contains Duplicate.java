//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 217

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;
import java.util.Set;

class Solution {
      public boolean containsDuplicate(int[] nums) {
            // Initialize a HashSet to store unique elements.
            Set<Integer> seen = new HashSet<>();
            
            // Iterate through each number in the array.
            for (int num : nums) {
                  // If the current number is already in the set,
                  // it means we have found a duplicate.
                  if (seen.contains(num)) {
                        return true;
                  }

                  // Add the current number to the set to mark it as seen.
                  seen.add(num);
            }
            
            // If no duplicates are found, return false.
            return false;
      }
}
