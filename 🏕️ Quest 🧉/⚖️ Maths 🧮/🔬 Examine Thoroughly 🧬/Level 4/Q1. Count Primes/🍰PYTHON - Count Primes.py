#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L4 Q1

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def countPrimes(self, n: int) -> int:
            if n < 2:
                  return 0  # No primes less than 2

            primes = [True] * n  # Initialize list assuming all numbers are prime
            primes[0] = primes[1] = False  # 0 and 1 are not prime numbers

            i = 0  # Start from the first prime candidate

            # Iterate while square of i is less than n
            while i * i < n:
                  if primes[i]:
                        # Mark multiples of i starting from i^2 as not prime
                        for j in range(i * i, n, i):
                              primes[j] = False
                  i += 1  # Move to the next number

            return sum(primes)  # Sum of True values gives count of primes less than n
