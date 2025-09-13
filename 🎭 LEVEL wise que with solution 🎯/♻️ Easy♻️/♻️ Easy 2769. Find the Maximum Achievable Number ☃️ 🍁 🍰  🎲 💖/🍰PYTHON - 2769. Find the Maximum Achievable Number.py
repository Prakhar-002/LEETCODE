#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2769

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def theMaximumAchievableX(self, num: int, t: int) -> int:
            #      Calculate the maximum achievable 'x' value
            #      Start from the initial value 'num'
            #      Each step increments by 2, so multiply t by 2
            #      Add the doubled steps to the initial number to get the maximum
            return num + 2 * t
