#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2379

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(blocks)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumRecolors(self, blocks: str, k: int) -> int:
            l = 0  # Left pointer for the sliding window
            curBlack = 0  # Count of black ('B') blocks in the current window
            maxBlack = 0  # Maximum black ('B') blocks found in any window of size k

            # Iterate over the string using right pointer 'r'
            for r in range(len(blocks)):
                  # If window size exceeds k, remove the leftmost element
                  if (r - l + 1) > k:
                        # If the leftmost element is 'B', decrease count
                        curBlack -= 1 if blocks[l] == 'B' else 0
                        l += 1  # Move the left pointer forward

                  # Add the current element to the window
                  curBlack += 1 if blocks[r] == 'B' else 0

                  # Update the maximum number of 'B' blocks seen in any window of size k
                  maxBlack = max(maxBlack, curBlack)

            # Minimum recolors needed = k - maxBlack (number of 'W' blocks in the best window)
            return k - maxBlack
