//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

public class Solution {
      public int sumOfSqr(int num) {
            int total = 0;
            while (num > 0) {
                  int digit = num % 10;
                  total += digit * digit; // Square each digit
                  num /= 10; // Remove last digit
            }
            return total;
      }

      public boolean isHappy(int n) {
            Set<Integer> visit = new HashSet<>(); // Track visited numbers to detect cycles

            // Continue until we reach 1 (happy) or detect cycle (unhappy)
            while (n != 1 && !visit.contains(n)) {
                  visit.add(n); // Mark current number as visited
                  n = sumOfSqr(n); // Replace with sum of squares
            }

            // Return true if we reached 1 (happy number)
            return n == 1;
      }
}
