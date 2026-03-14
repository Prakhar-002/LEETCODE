//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1386

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {

      // Helper function to check if 4 consecutive seats are free
      // start = 2 → checks seats 2,3,4,5
      // start = 4 → checks seats 4,5,6,7
      // start = 6 → checks seats 6,7,8,9
      private boolean blockFree(Set<Integer> seats, int start) {

            // Check 4 seats starting from 'start'
            for (int i = start; i < start + 4; i++) {

                  // If any seat is reserved → block not available
                  if (seats.contains(i))
                        return false;
            }

            // All seats are free
            return true;
      }

      public int maxNumberOfFamilies(int n, int[][] reservedSeats) {

            // Map row → reserved seat numbers
            Map<Integer, Set<Integer>> rows = new HashMap<>();

            // Store reserved seats row-wise
            for (int[] s : reservedSeats) {
                  rows.putIfAbsent(s[0], new HashSet<>());
                  rows.get(s[0]).add(s[1]);
            }

            // Rows without reservations can seat 2 families
            int res = (n - rows.size()) * 2;

            // Process rows that contain reservations
            for (Set<Integer> seats : rows.values()) {

                  // Check three possible seating blocks
                  boolean left = blockFree(seats, 2); // seats 2-5
                  boolean middle = blockFree(seats, 4); // seats 4-7
                  boolean right = blockFree(seats, 6); // seats 6-9

                  // If both left and right blocks free → 2 families
                  if (left && right)
                        res += 2;

                  // Otherwise if any one block free → 1 family
                  else if (left || middle || right)
                        res += 1;
            }

            return res;
      }
}