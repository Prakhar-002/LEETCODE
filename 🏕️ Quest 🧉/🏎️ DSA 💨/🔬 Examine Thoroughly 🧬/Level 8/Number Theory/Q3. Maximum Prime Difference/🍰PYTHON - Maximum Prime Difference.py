#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isPrime(self, n: int) -> bool:
            # Numbers less than 2 are not prime
            if n < 2:
                  return False

            # Check divisibility from 2 to sqrt(n)
            i = 2
            while i * i <= n:
                  if n % i == 0:
                        # If divisible, n is not prime
                        return False
                  i += 1

            # If no divisor found, n is prime
            return True

      def maximumPrimeDifference(self, nums: List[int]) -> int:
            # Initialize small to a large value (first prime index)
            # and large to a small value (last prime index)
            small = float("inf")
            large = float("-inf")

            # Traverse the array with index i and value num
            for i, num in enumerate(nums):
                  # If current number is prime
                  if self.isPrime(num):
                        # Update the first (smallest) prime index
                        small = min(small, i)
                        # Update the last (largest) prime index
                        large = max(large, i)

            # Return the maximum difference between prime indices
            return large - small
