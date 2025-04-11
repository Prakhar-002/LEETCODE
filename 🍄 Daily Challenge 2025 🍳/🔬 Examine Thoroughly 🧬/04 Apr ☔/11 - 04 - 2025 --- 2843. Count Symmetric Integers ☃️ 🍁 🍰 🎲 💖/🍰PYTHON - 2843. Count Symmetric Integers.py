#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2843

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = hight - low + 1

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSymmetricIntegers(self, low: int, high: int) -> int:
            count = 0  # Initialize counter for symmetric integers

            for num in range(low, high + 1):  # Iterate from low to high (inclusive)
                  # Check for 2-digit symmetric numbers divisible by 11 (like 11, 22, 33, ...)
                  if num < 100 and num % 11 == 0:
                        count += 1
                  # Check for 4-digit symmetric numbers where sum of outer digits == inner digits
                  elif 1000 <= num < 10000:
                        # Extract and sum first two digits
                        left = num // 1000 + (num % 1000) // 100
                        # Extract and sum last two digits
                        right = (num % 100) // 10 + (num % 10)

                        if left == right:  # If both halves are equal
                              count += 1

            return count  # Return final count

