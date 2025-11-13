//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Q1

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String getPermutation(int n, int k) {
            List<String> nums = new ArrayList<>();
            for (int i = 1; i <= n; i++) {
                  nums.add(String.valueOf(i));  // Initialize list of numbers as strings
            }

            int[] fact = new int[n + 1];     // Factorial lookup array
            fact[0] = 1;
            for (int i = 1; i <= n; i++) {
                  fact[i] = fact[i - 1] * i;  // Precompute factorials
            }

            k -= 1;  // Convert k to zero-based index for calculation

            StringBuilder ans = new StringBuilder();  // Store resulting permutation

            for (int i = n; i >= 1; i--) {
                  int idx = k / fact[i - 1];         // Calculate index to pick
                  ans.append(nums.get(idx));         // Append chosen number
                  nums.remove(idx);                  // Remove chosen number
                  k %= fact[i - 1];                  // Update k with remainder
            }

            return ans.toString();  // Return permutation string
      }
}
