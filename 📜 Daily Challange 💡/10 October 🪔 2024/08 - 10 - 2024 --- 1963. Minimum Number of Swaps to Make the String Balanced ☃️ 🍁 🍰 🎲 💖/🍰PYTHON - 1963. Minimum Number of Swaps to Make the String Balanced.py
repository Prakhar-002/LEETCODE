#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1963

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minSwaps(self, s: str) -> int:
            # `extraClose` tracks the net number of extra closing brackets
            extraClose = 0 
            # `maxClose` keep track of the maximum imbalance of extra closing brackets
            maxClose = 0

            # iterates through each character `ch` in the string `s`
            for ch in s:
                  # If the character is an opening bracket `[`
                  if ch == "[":
                        # means that there is one less extra closing bracket needed
                        # so `extraClose` is decremented
                        extraClose -= 1
                  # If the character is a closing bracket `]`
                  else:
                        # increases the count of extra closing brackets, 
                        # so `extraClose` is incremented
                        extraClose += 1

                  # updates `maxClose` if the current `extraClose` value exceeds `maxClose`
                  maxClose = max(maxClose, extraClose)

            # Swapping two brackets fixes two imbalances at once. 
            # Therefore, the total number of swaps is half the maximum imbalance
            return (maxClose + 1) // 2
