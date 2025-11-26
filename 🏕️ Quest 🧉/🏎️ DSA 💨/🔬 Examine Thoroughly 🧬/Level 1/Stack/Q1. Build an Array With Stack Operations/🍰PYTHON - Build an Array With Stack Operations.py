#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q1

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def buildArray(self, target: List[int], n: int) -> List[str]:
            stack = []  # List to store operations
            cur = 0  # Pointer to track current index in target

            # Iterate from 1 to n
            for i in range(1, n + 1):
                  # If all elements in target are processed, break
                  if cur == len(target):
                        break
                  # If current number matches target element, push it
                  if target[cur] == i:
                        stack.append("Push")
                        cur += 1
                  else:
                        # Otherwise push and immediately pop to discard
                        stack.append("Push")
                        stack.append("Pop")

            return stack
