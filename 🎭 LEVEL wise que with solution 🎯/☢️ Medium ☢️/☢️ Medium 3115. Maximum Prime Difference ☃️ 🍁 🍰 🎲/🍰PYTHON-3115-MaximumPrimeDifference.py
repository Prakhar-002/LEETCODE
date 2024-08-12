#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3115

#? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from cmath import sqrt

class Solution:
      # Function for checking if a number is prime
      def isPrime(self, num):
            # 1 is not prime
            if num == 1:
                  return False

            # 2 is prime
            if num == 2:
                  return True

            # Even numbers greater than 2 are not prime
            if num % 2 == 0:
                  return False

            # Check odd numbers up to the square root of num
            for i in range(3, int(num ** 0.5) + 1, 2):
                  if num % i == 0:
                        return False

            return True

      def maximumPrimeDifference(self, nums):
            minIdx, maxIdx = 0, len(nums) - 1

            # Find the first prime number from the start
            while not self.isPrime(nums[minIdx]):
                  minIdx += 1

            # Find the first prime number from the end
            while not self.isPrime(nums[maxIdx]):
                  maxIdx -= 1

            # Return the difference between the indices
            return maxIdx - minIdx

