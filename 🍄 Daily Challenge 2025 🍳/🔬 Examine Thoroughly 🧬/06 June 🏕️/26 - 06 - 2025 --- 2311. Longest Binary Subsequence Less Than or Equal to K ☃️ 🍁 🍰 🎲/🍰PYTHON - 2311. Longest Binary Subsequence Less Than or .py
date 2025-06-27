#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2311

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestSubsequence(self, s: str, k: int) -> int:
            sm = 0  # Stores current binary value of selected subsequence
            cnt = 0  # Count of characters included in the subsequence
            bits = k.bit_length()  # Max bits needed to represent any number ≤ k

            # Traverse the string in reverse (i.e., from least significant bit)
            for i, ch in enumerate(s[::-1]):
                  if ch == "1":
                        # If adding 2^i does not exceed k and within bit limit
                        if i < bits and sm + (1 << i) <= k:
                              sm += 1 << i  # Add the value 2^i to the sum
                              cnt += 1  # Include this '1' in subsequence
                  else:
                        # Always safe to include '0' as it adds no value
                        cnt += 1

            return cnt
