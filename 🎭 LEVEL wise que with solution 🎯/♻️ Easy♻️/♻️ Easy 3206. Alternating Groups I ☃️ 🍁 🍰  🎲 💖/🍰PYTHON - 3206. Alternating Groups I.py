#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3206

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberOfAlternatingGroups(self, colors: List[int]) -> int:
            N = len(colors)

            altGrp = 0

            for i in range(N):
                  # Check if all three adjacent colors are different
                  if colors[i] != colors[(i + 1) % N] != colors[(i + 2) % N]:
                        altGrp += 1

            return altGrp