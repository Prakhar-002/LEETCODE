//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2780

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int minimumIndex(List<Integer> nums) {
            int n = nums.size();  // Get the size of the list
            int majority = 0;     // Variable to store the dominant element
            int count = 0;        // Count variable for Boyer-Moore Voting Algorithm

            // Step 1: Find the dominant element using Boyer-Moore Voting Algorithm
            for (int num : nums) {
                  if (count == 0) {
                        majority = num; // Set the current element as the dominant candidate
                  }
                  if (num == majority) {
                        count++;  // Increment count if same as current dominant
                  } else {
                        count--;  // Decrement count if different
                  }
            }

            // Step 2: Count occurrences of the dominant element
            int leftCnt = 0; // Frequency of majority in the left partition
            int rightCnt = Collections.frequency(nums, majority); // Total occurrences of majority

            // Step 3: Iterate to find the minimum valid index
            for (int i = 0; i < n; i++) {
                  if (nums.get(i) == majority) {
                        leftCnt++;  // Move `nums[i]` from right partition to left partition
                        rightCnt--;
                  }

                  // Compute partition sizes
                  int leftLen = i + 1;    // Length of left partition
                  int rightLen = n - i - 1; // Length of right partition

                  // Check if `majority` is dominant in both partitions
                  if (2 * leftCnt > leftLen && 2 * rightCnt > rightLen) {
                        return i; // Return the first valid index
                  }
            }

            return -1; // Return -1 if no valid index is found
      }
}


//!-------------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution { 
      public int minimumIndex(List<Integer> nums) {
            // HashMaps to store frequency of elements in left and right partitions
            Map<Integer, Integer> left = new HashMap<>();
            Map<Integer, Integer> right = new HashMap<>();

            // Populate the right frequency map initially
            for (int num : nums) {
                  right.put(num, right.getOrDefault(num, 0) + 1);
            }

            // Iterate through the list to determine the valid minimum index
            for (int i = 0; i < nums.size(); i++) {
                  int n = nums.get(i); // Current element

                  // Move current element `n` from right partition to left partition
                  left.put(n, left.getOrDefault(n, 0) + 1);
                  right.put(n, right.get(n) - 1);

                  // If `n` count in right partition is now zero, remove it
                  if (right.get(n) == 0) {
                        right.remove(n);
                  }

                  // Compute partition sizes
                  int left_len = i + 1; // Length of left partition
                  int right_len = nums.size() - i - 1; // Length of right partition

                  // Check if `n` is dominant in both partitions
                  // Condition: It should appear more than half of each partition
                  if (2 * left.get(n) > left_len && right.containsKey(n) && 2 * right.get(n) > right_len) {
                        return i; // Return the minimum valid index
                  }
            }

            return -1; // Return -1 if no valid index is found
      }
}
