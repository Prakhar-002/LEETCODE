//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2523

//? ⌚ Time complexity ➺ O(n log log n + p) 👉🏻  n = right

//? 🧺 Space complexity ➺ O(n)  -> p = (right - left + 1)

class Solution {
      public int[] closestPrimes(int left, int right) {
            // Step 1: Create a boolean array to track prime numbers.
            // isPrime[x] will be true if 'x' is prime, otherwise false.
            boolean[] isPrime = new boolean[right + 1];

            // Initialize every number as prime (will correct later using Sieve).
            for (int i = 0; i <= right; i++) {
                  isPrime[i] = true;
            }

            // 0 and 1 are NOT prime numbers by definition.
            isPrime[0] = false;
            isPrime[1] = false;

            // Step 2: Apply Sieve of Eratosthenes to mark non-prime numbers.
            for (int n = 2; n * n <= right; n++) {
                  // If 'n' is already marked as not prime, skip it.
                  if (!isPrime[n]) {
                        continue;
                  }

                  // Mark all multiples of 'n' (starting from 2n, 3n, ...) as not prime.
                  for (int m = n * 2; m <= right; m += n) {
                        isPrime[m] = false;
                  }
            }

            // Step 3: Collect all prime numbers in the given range [left, right].
            List<Integer> primes = new ArrayList<>();
            for (int i = left; i <= right; i++) {
                  if (isPrime[i]) {
                        primes.add(i);
                  }
            }

            // Step 4: Find the closest prime pair (smallest difference between consecutive
            // primes).
            int[] closestPrime = { -1, -1 }; // Default result if no valid pair exists.
            int smallestDifference = right - left + 1; // Initialize with max possible diff.

            for (int i = 1; i < primes.size(); i++) {
                  int difference = primes.get(i) - primes.get(i - 1);
                  if (difference < smallestDifference) {
                        smallestDifference = difference;
                        closestPrime[0] = primes.get(i - 1);
                        closestPrime[1] = primes.get(i);
                  }
            }

            // Return the pair of closest primes (or [-1, -1] if no pair found).
            return closestPrime;
      }
}