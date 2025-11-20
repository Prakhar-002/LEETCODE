#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L7 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countDigitOne(self, n: int) -> int:
            count = 0  # Initialize the total count of digit '1's
            i = 1      # Start counting at the ones place (1, 10, 100, ...)

            # Loop through each digit place while i <= n
            while i <= n:
                  divider = i * 10
                  # Count how many full cycles of 'i' fit into n
                  count += (n // divider) * i
                  # Add the extra '1's in the current digit position if any
                  count += min(max(n % divider - i + 1, 0), i)
                  i *= 10  # Move to next higher digit place

            return count
