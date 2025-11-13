#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2523

#? ⌚ Time complexity ➺ O(n log log n + p) 👉🏻  n = right

#? 🧺 Space complexity ➺ O(n)  -> p = (right - left + 1)

from cmath import sqrt

class Solution:
      def closestPrimes(self, left: int, right: int) -> List[int]:
            # Helper function to generate prime numbers within the range [left, right]
            def get_primes():
                  # Step 1: Create a boolean array to mark all numbers as prime initially
                  is_prime = [True] * (right + 1)

                  # 0 and 1 are not prime numbers
                  is_prime[0] = is_prime[1] = False

                  # Step 2: Use Sieve of Eratosthenes to find all primes up to `right`
                  for n in range(2, int(sqrt(right)) + 1):
                        # If n is not prime, skip it
                        if not is_prime[n]:
                              continue

                        # Mark multiples of n as not prime
                        for m in range(n + n, right + 1, n):
                              is_prime[m] = False

                  # Step 3: Collect all primes within the range [left, right]
                  primes = []
                  for i in range(len(is_prime)):
                        if is_prime[i] and i >= left:
                              primes.append(i)

                  # Return the list of primes within the desired range
                  return primes

            # Step 4: Find all primes in range [left, right]
            primes = get_primes()

            # Initialize result variables
            closestPrime = [-1, -1]    # Default case if no pairs exist
            primeDiff = right - left + 1  # Start with maximum possible difference

            # Step 5: Compare consecutive primes to find the closest pair
            for i in range(1, len(primes)):
                  if primes[i] - primes[i - 1] < primeDiff:
                        # Update closest pair and their difference
                        primeDiff = primes[i] - primes[i - 1]
                        closestPrime = [primes[i - 1], primes[i]]

            # Return the closest pair of primes
            return closestPrime