#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L7 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def grayCode(self, n: int) -> List[int]:
            result = []                 # List to store the Gray code numbers
            total_numbers = 1 << n      # Calculate total numbers = 2^n for n-bit Gray code

            for i in range(total_numbers):
                  # Generate Gray code by XORing number with its right-shifted value
                  result.append(i ^ (i >> 1))

            return result               # Return the complete list of Gray
