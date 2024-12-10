//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1679

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int maxOperations(int[] nums, int k) {
            // Sort the array to apply two-pointer technique
            Arrays.sort(nums);

            int l = 0, r = nums.length - 1;
            int pairs = 0;

            // Use two pointers to find pairs
            while (l < r) {
                  // Check if the sum of the elements at the two pointers equals k
                  if (nums[l] + nums[r] == k) {
                        pairs++;  // A valid pair is found, so increment the pair count
                        l++;  // Move the left pointer to the right
                        r--;  // Move the right pointer to the left
                  } else if (nums[l] + nums[r] > k) {
                        r--;  // Move the right pointer to the left to decrease the sum
                  } else {
                        l++;  // Move the left pointer to the right to increase the sum
                  }
            }

            // Return the total number of pairs found
            return pairs;
      }
}



//* 2nd Solution  

//!-----------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxOperations(int[] nums, int k) {
            // Initialize a map to store the frequency of numbers
            HashMap<Integer, Integer> count = new HashMap<>();
            int pairs = 0;

            // Iterate through each number in the array
            for (int num : nums) {
                  // Calculate the complement that would sum up to k
                  int complement = k - num;

                  // If the complement exists in the map, form a pair
                  if (count.getOrDefault(complement, 0) > 0) {
                        pairs++;
                        count.put(complement, count.get(complement) - 1); // Decrease the count of the complement
                  } else {
                        // If no complement found, add the current number to the map
                        count.put(num, count.getOrDefault(num, 0) + 1);
                  }
            }

            // Return the total number of pairs found
            return pairs;
      }
}
