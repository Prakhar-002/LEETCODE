#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2601

#? ⌚ Time complexity ➺ O(n + m * sqrt(m)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m) 👉🏻 m = max(nums)

from cmath import sqrt

class Solution:
      def primeSubOperation(self, nums: List[int]) -> bool:
            # Helper function to check if a number is prime
            def is_prime(n):
                  # Check for factors from 2 up to sqrt(n)
                  for f in range(2, int(sqrt(n)) + 1):
                        if n % f == 0:
                              return False
                  return True

            # Array to store the largest prime less than or equal to each index
            primes = [0, 0]  # primes[i] => largest prime <= i

            # Build the primes array for numbers up to max(nums)
            for i in range(2, max(nums)):
                  if is_prime(i):
                        primes.append(i)  # Append the prime number
                  else:
                        # If not prime, append the largest prime found so far
                        primes.append(primes[i - 1])

            prev = 0  # Initialize the previous value in the sequence to 0

            # Iterate over each number in the input list
            for n in nums:
                  # Find the largest prime that we can subtract from n to get a new value > prev
                  upper_bound = n - prev

                  # Get the largest prime less than or equal to upper_bound
                  largest_prime = primes[upper_bound - 1]
                  
                  # Check if the result of subtraction maintains the strictly increasing order
                  if n - largest_prime <= prev:
                        return False  # If not, return False immediately

                  # Update prev to the new number after subtraction
                  prev = n - largest_prime

            # If the loop completes, the sequence can be made strictly increasing
            return True
