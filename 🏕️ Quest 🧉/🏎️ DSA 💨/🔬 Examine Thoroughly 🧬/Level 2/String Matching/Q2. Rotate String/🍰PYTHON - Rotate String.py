#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def rotateString(self, s: str, goal: str) -> bool:
            # Check if the lengths are different
            if len(s) != len(goal):
                  return False

            # Create a new string by concatenating 's' with itself
            doubled_string = s + s

            # Use find to search for 'goal' in 'doubledString'
            # If find returns an index that is not -1
            # then 'goal' is a substring
            return doubled_string.find(goal) != -1