#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2914

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(a)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minChanges(self, s: str) -> int:
            # Calculate the number of adjacent pairs that differ, counting only at even indices
            return sum(1 for i in range(0, len(s), 2) if s[i] != s[i + 1])
