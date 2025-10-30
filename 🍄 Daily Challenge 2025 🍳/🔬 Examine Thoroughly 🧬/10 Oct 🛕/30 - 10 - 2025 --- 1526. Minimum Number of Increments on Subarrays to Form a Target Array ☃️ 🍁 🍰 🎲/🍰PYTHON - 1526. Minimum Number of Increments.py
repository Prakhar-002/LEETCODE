#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1526

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minNumberOperations(self, target: List[int]) -> int:
            # Start with first bar as initial operations
            opr = target[0]

            # For each subsequent bar, add operations only if it needs to be higher than previous
            for i in range(1, len(target)):
                  # Add the difference if current is higher than the previous (no ops if lower/same)
                  opr += max(target[i] - target[i - 1], 0)

            # Total minimum operations required
            return opr
