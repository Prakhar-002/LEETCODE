#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2011

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def finalValueAfterOperations(self, operations: List[str]) -> int:
            #      Map each operation to its effect on the variable value
            opr = {
                  "--X" : -1,         #      Decrement operation
                  "X++" : 1,          #      Increment operation
                  "++X" : 1,          #      Increment operation
                  "X--" : -1          #      Decrement operation
            }

            finalVal = 0                 #      Initialize the final value to zero

            #      Apply the effect of each operation in the input list
            for operation in operations:
                  finalVal += opr[operation]  #      Add or subtract 1 based on operation type

            return finalVal               #      Return the final calculated value