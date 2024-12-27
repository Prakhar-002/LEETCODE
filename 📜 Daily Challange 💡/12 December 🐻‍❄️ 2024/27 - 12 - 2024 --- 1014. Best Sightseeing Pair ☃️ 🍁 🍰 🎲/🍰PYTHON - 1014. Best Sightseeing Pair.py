#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1014

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(values)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxScoreSightseeingPair(self, values):
            res = 0 # Stores the maximum score found so far
            cur_max = values[0] # Tracks the current maximum value of values[i] + i

            # Iterate through the array starting from the second element
            for i in range(1, len(values)):
                  # Decrement cur_max by 1 as we move to the next index
                  cur_max -= 1

                  # Update the result with the maximum score found so far
                  res = max(res, cur_max + values[i])

                  # Update cur_max to the maximum value of cur_max or values[i] + i
                  cur_max = max(cur_max, values[i])

            # Return the maximum score
            return res
