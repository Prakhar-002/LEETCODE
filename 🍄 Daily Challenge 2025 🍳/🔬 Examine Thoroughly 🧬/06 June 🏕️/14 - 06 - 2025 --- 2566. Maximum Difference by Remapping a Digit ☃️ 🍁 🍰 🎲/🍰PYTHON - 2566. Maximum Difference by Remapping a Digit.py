#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2566

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = log(num)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minMaxDifference(self, num: int) -> int:
            # Convert the number to string for easy manipulation
            s = str(num) 
            t = s

            pos = 0

            # Find the first digit from the left that is not '9'
            while pos < len(s) and s[pos] == '9':
                  pos += 1

            # If found, replace all occurrences of that digit with '9'
            if pos < len(s):
                  s = s.replace(s[pos], '9')

            # Replace all occurrences of the first digit with '0'
            t = t.replace(t[0], '0')

            # Convert both modified strings back to integers and return their difference
            return int(s) - int(t)
