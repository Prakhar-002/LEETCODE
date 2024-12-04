//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1346

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;

class Solution {
      public boolean checkIfExist(int[] arr) {
            // Create a HashSet to store numbers we've seen so far
            HashSet<Integer> seen = new HashSet<>();

            // Iterate through each number in the array
            for (int num : arr) {
                  // Check if the current number's double exists in the set
                  // OR if the current number is even and its half exists in the set
                  if (seen.contains(num * 2) || (num % 2 == 0 && seen.contains(num / 2))) {
                        return true; // If either condition is true, return true
                  }

                  // Add the current number to the set
                  seen.add(num);
            }

            // If no such pair exists, return false
            return false;
      }
}
