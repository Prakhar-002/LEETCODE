//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2554

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = given 

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = len(banned)

import java.util.HashSet;
import java.util.Set;

class Solution {
      public int maxCount(int[] banned, int n, int maxSum) {
            // Initialize the current sum of selected numbers to zero
            int curSum = 0;

            // Initialize the counter for how many numbers have been selected
            int count = 0;

            // Convert the banned array into a Set for faster lookup
            Set<Integer> bannedSet = new HashSet<>();
            for (int num : banned) {
                  bannedSet.add(num);
            }

            // Iterate through numbers from 1 to n
            for (int num = 1; num <= n; num++) {
                  // Check if the current number is not banned and adding it will not exceed maxSum
                  if (!bannedSet.contains(num) && curSum + num <= maxSum) {
                        // Increment the count of selected numbers
                        count++;

                        // Add the current number to the running total sum
                        curSum += num;
                  }
            }

            // Return the count of numbers that meet the conditions
            return count;
      }
}