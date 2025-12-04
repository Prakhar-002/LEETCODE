#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q3

#? ⌚ Time complexity ➺ O(n) 

#? 🧺 Space complexity ➺ O(n) 

class Solution(object):
      def magicalString(self, n):
            # Start the magical string with initial known pattern
            s = [1, 2, 2]
            i = 2           # Pointer to current position in magical string for count
            one = 1         # Count of '1's, initial count (first element)

            # Generate magical string until length >= n
            while len(s) < n:
                  # Append s[i] times the opposite of last element (3 - last element flips 1 <-> 2)
                  s += [3 - s[-1]] * s[i]
                  i += 1

            # Count number of '1's in first n characters
            return s[:n].count(1)
