#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 135

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution(object):
      def candy(self, ratings):
            # Get the number of children
            n = len(ratings)

            # Initialize the total candy counter
            cnt = 0

            # Every child gets at least 1 candy initially
            candies = [1] * n

            # Pass 1: Left to right
            # If a child has a higher rating than the one before,
            # give them one more candy than the previous child
            for i in range(1, n):
                  if ratings[i] > ratings[i - 1]:
                        candies[i] = candies[i - 1] + 1

            # Pass 2: Right to left
            # If a child has a higher rating than the next one,
            # and their current candy count is not already more,
            # update it to be one more than the next child's candy count
            for i in range(n - 1, 0, -1):
                  if ratings[i - 1] > ratings[i]:
                        candies[i - 1] = max(candies[i] + 1, candies[i - 1])

                  # Add the candy count to the total during the backward pass
                  cnt += candies[i - 1]

            # Add the last child's candy count (not included in loop above)
            return cnt + candies[n - 1]