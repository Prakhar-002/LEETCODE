//! https://github.com/Prakhar-002/LEETCODE

import java.util.Arrays;

class Solution {
      public int minMovesToSeat(int[] seats, int[] students) {
            // Sort the both arrays
            Arrays.sort(seats);
            Arrays.sort(students);

            int moves = 0;

            for (int i = 0; i < students.length; i++) {
                  // Take the abs diff of every student[i] and seats[i]
                  moves += Math.abs(students[i] - seats[i]);
            }

            return moves; 
      }
}