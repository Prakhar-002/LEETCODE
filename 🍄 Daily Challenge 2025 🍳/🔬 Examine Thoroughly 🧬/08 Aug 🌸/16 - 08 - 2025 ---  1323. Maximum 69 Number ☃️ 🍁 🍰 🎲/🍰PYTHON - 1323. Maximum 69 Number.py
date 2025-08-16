#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1323

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maximum69Number (self, num: int) -> int:
            # Convert the integer to a list of characters for easy modification
            s_list = list(str(num))

            # ----------------------------------------------------------
            # Iterate through the digits to find the first '6'
            # ----------------------------------------------------------
            for i in range(len(s_list)):
                  # If the current digit is '6'
                  if s_list[i] == '6':
                        # Change it to '9'
                        s_list[i] = '9'
                        # Since we want the maximum possible number,
                        # changing the leftmost '6' to '9' will yield the largest result.
                        # So, we can stop after the first replacement.
                        break

            # Join the list of characters back into a string and convert to an integer
            return int("".join(s_list))
