#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3723

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxSumOfSquares(self, num: int, sum: int) -> str:
            # Check feasibility:
            # An n-digit number must have sum >= 1 (cannot be 0) and sum <= num * 9
            if sum < 1 or sum > num * 9:
                  return ""

            # Single digit edge case
            if num == 1:
                  return str(sum)

            ans = ["0"] * num

            # Greedily place the largest possible digits ('9') from left to right
            # to maximize both the sum of squares and the integer's value
            for i in range(num):
                  if sum > 9:
                        ans[i] = "9"
                        sum -= 9
                  else:
                        ans[i] = str(sum)
                        sum = 0
                        break

            return "".join(ans) 