//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public int repeatedStringMatch(String A, String B) {
            // Minimum times A must be repeated so that its length is >= length of B
            int q = (B.length() - 1) / A.length() + 1;

            // Try q repetitions and q+1 repetitions of A
            for (int i = 0; i < 2; i++) {
                  String repeated = A.repeat(q + i); // Build A repeated (q + i) times
                  if (repeated.contains(B)) { // Check if B is a substring
                        return q + i; // Return repetition count
                  }
            }

            // If B is not found as a substring, return -1
            return -1;
      }
}
