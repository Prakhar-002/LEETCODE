#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 43

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def multiply(self, num1: str, num2: str) -> str:
            # Convert both input strings to integers
            # Python's int() function automatically handles string-to-integer conversion
            integer1 = int(num1)
            integer2 = int(num2)

            # Multiply the two integer values
            product = integer1 * integer2

            # Convert the resulting product back to a string before returning,
            # since the expected output type is a string
            return str(product)
