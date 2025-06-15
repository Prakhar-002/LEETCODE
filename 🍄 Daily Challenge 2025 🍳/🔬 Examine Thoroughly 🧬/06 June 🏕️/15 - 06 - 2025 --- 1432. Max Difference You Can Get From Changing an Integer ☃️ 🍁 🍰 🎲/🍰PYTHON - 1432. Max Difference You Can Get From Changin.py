#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1432

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(log n)

class Solution:
      def maxDiff(self, num: int) -> int:
            # Convert the number to string for easy manipulation
            max_num, min_num = str(num), str(num)

            # Create the maximum number by replacing the first digit that is not '9' with '9'
            for digit in max_num:
                  if digit != '9':
                        max_num = max_num.replace(digit, '9')
                        break

            # Create the minimum number
            for i, digit in enumerate(min_num):
                  if i == 0:
                        # For the first digit, replace it with '1' if it's not already '1'
                        if digit != '1':
                              min_num = min_num.replace(digit, '1')
                              break
                  else:
                        # For other digits, replace the first non-zero digit that's not same as min_num[0] with '0'
                        if digit != '0' and digit != min_num[0]:
                              min_num = min_num.replace(digit, '0')
                              break

            # Convert both strings back to integers and return their difference
            return int(max_num) - int(min_num)

