#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1513

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def numSub(self, s: str) -> int:
            # 'one' keeps track of the current count of consecutive '1's
            one = 0
            # 'res' stores the total count of substrings consisting only of '1's
            res = 0
            # Modulo value to prevent integer overflow and keep results in bounds
            mod = 10**9 + 7

            # Iterate through each character in the input string
            for ch in s:
                  if ch == "1":
                        # If current char is '1', increase the count of consecutive ones
                        one += 1
                  else:
                        # Reset to 0 if current char is '0' since substring breaks here
                        one = 0

                  # Add the count of consecutive ones to the result modulo mod
                  # This counts new substrings ending at this position
                  res = (res + one) % mod

            # Return the total count of substrings containing only '1's
            return res
