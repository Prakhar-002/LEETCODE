//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2311

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution { 
      public int longestSubsequence(String s, int k) {
            long sum = 0; // Stores current binary value of selected subsequence
            int count = 0; // Count of characters included in the subsequence
            int bits = Long.toBinaryString(k).length(); // Max bits needed to represent any number ≤ k

            int n = s.length();
            for (int i = 0; i < n; i++) {
                  char ch = s.charAt(n - 1 - i); // Traverse from right to left

                  if (ch == '1') {
                        // If adding 2^i does not exceed k and within bit limit
                        if (i < bits && sum + (1L << i) <= k) {
                              sum += (1L << i); // Add value 2^i to the sum
                              count++; // Include this '1' in subsequence
                        }
                  } else {
                        count++; // Always safe to include '0'
                  }
            }

            return count;
      }
}
