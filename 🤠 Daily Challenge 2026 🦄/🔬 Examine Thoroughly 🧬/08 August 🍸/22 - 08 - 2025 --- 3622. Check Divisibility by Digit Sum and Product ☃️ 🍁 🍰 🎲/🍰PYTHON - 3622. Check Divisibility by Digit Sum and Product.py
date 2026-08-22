#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3622

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def checkDivisibility(self, n: int) -> bool:
            digit_sum = 0
            digit_product = 1 
            org = n

            # Extract digits one by one to compute the sum and product
            while n > 0:
                  digit = n % 10

                  digit_sum += digit
                  digit_product *= digit

                  n //= 10

            # Check if original number is divisible by (digit_sum + digit_product)
            return (org % (digit_sum + digit_product)) == 0