#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3622

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def sumGame(self, num: str) -> bool:
            left_sum = right_sum = left_que = right_que = 0
            n = len(num)

            # Count the sum of digits and the number of '?' on both halves
            for i in range(n):
                  if i < n // 2:
                        if num[i] == '?':
                              left_que += 1
                        else:
                              left_sum += int(num[i])
                  else:
                        if num[i] == '?':
                              right_que += 1
                        else:
                              right_sum += int(num[i])

            # If the total number of question marks is odd, Alice always wins (returns True)
            if (left_que + right_que) % 2 == 1:
                  return True

            # In optimal play, Bob pairs up question mark choices such that each pair contributes 9.
            # Scaling both sides by 2 allows checking if 2 * diff == 9 * (right_que - left_que)
            left = 2 * left_sum + 9 * left_que
            right = 2 * right_sum + 9 * right_que

            # If the weighted totals differ, Alice can force a win (True); otherwise Bob wins (False)
            return left != right