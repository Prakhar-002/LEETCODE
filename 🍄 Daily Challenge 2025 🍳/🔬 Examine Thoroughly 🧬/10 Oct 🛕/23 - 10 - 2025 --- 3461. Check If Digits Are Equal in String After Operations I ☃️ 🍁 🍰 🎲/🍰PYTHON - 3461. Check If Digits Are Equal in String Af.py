#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3461

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def hasSameDigits(self, s: str) -> bool:
            # The algorithm reduces the string step by step by replacing each adjacent
            # pair of digits with their sum modulo 10, until only two digits remain.
            # If the final two digits are equal → return True; else → False.

            while len(s) > 2:
                  temp = []

                  # For each adjacent pair, take their sum mod 10
                  for i in range(len(s) - 1):
                        new_digit = (int(s[i]) + int(s[i + 1])) % 10
                        temp.append(str(new_digit))

                  # Form a new string from the reduced digits
                  s = "".join(temp)

            # After reductions, check if the remaining 2 digits are equal
            return int(s[0]) == int(s[1])
