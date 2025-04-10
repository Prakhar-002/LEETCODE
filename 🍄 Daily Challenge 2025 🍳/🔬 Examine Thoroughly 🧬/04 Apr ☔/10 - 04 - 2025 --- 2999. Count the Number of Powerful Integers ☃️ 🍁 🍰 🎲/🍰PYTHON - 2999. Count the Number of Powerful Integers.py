#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2999

#? ⌚ Time complexity ➺ O(log(n)) 👉🏻  n = finish

#? 🧺 Space complexity ➺ O(log(n))

class Solution:
      def numberOfPowerfulInt(self, start: int, finish: int, limit: int, s: str) -> int:
            # Convert the start - 1 and finish values to strings
            start_ = str(start - 1)
            finish_ = str(finish)

            # Count powerful integers in [1, finish] minus [1, start - 1]
            return self.calculate(finish_, s, limit) - self.calculate(start_, s, limit)

      def calculate(self, x: str, s: str, limit: int) -> int:
            # If the number length is less than required suffix length, return 0
            if len(x) < len(s):
                  return 0

            # If number length equals suffix length, check if it satisfies suffix requirement
            if len(x) == len(s):
                  return 1 if x >= s else 0

            # Extract the suffix of the number to compare with given string 's'
            suffix = x[len(x) - len(s) :]

            # Count of valid numbers
            count = 0

            # Length of prefix before suffix
            pre_len = len(x) - len(s)

            # Iterate through each digit in the prefix
            for i in range(pre_len):
                  # If current digit is greater than limit, all combinations from here are valid
                  if limit < int(x[i]):
                        count += (limit + 1) ** (pre_len - i)
                        return count

                  # Add combinations based on current digit and remaining length
                  count += int(x[i]) * (limit + 1) ** (pre_len - 1 - i)

            # After prefix, check if suffix is valid (greater than or equal to s)
            if suffix >= s:
                  count += 1

            return count
