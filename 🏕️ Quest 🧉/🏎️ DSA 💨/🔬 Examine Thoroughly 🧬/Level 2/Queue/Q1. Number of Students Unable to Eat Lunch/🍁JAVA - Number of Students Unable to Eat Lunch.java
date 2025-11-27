//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(sandwiches)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int countStudents(int[] students, int[] sandwiches) {
            // Count students preferring type 0 and type 1
            int[] count = new int[2];
            for (int student : students) {
                  count[student]++;
            }

            // Process sandwiches in order
            for (int sandwich : sandwiches) {
                  // If no student wants this sandwich type, return remaining students
                  if (count[sandwich] == 0) {
                        return count[1 - sandwich];
                  }
                  // Decrement count for sandwich type taken
                  count[sandwich]--;
            }

            // All sandwiches served, no students left
            return 0;
      }
}
