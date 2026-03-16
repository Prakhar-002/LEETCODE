#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1209

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def removeDuplicates(self, s: str, k: int) -> str:
            # Stack stores pairs of [character, count]
            # Initialized with sentinel value '$' to avoid empty stack checks
            stack = [['$', 0]]

            for ch in s:
                  # If current char matches top of stack, increment its count
                  if stack[-1][0] == ch:
                        stack[-1][1] += 1

                        # If count reaches k, remove the group entirely
                        if stack[-1][1] == k:
                              stack.pop()

                  # Otherwise push new character with count 1
                  else:
                        stack.append([ch, 1])

            # Reconstruct string by repeating each char by its count
            # Skip sentinel '$' entry implicitly (it has count 0, adds nothing)
            return ''.join(ch * count for ch, count in stack)