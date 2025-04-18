#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 38

#? ⌚ Time complexity ➺ O(n * 2 ^ n) 

#? 🧺 Space complexity ➺ O(2 ^ n)

class Solution:
      # Helper method to generate the next term in the Count and Say sequence
      def cntStr(self, s: str) -> str:
            nextStr = []  # List to build the next sequence
            left = 0
            right = 0

            # Traverse through the current sequence
            while right < len(s):
                  # Move right pointer while characters at left and right are the same
                  while right < len(s) and s[left] == s[right]:
                        right += 1

                  # Append count of repeated digits
                  nextStr.append(str(right - left))
                  # Append the actual digit
                  nextStr.append(s[left])

                  # Move left to next group
                  left = right

            return ''.join(nextStr)  # Join and return the built string

      # Main method to return the nth term of the sequence
      def countAndSay(self, n: int) -> str:
            s = "1"  # Start with the first sequence term

            # Generate sequence up to nth term
            while n > 1:
                  s = self.cntStr(s)  # Get next term
                  n -= 1

            return s  # Return the final term
