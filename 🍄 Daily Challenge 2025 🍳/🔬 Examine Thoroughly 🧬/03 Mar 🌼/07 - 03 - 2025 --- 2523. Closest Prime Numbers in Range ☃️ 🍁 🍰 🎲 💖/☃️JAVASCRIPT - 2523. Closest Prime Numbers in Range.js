//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2523

//? ⌚ Time complexity ➺ O(n log log n + p) 👉🏻  n = right

//? 🧺 Space complexity ➺ O(n)  -> p = (right - left + 1)

var closestPrimes = function (left, right) {
      // Step 1: Array where isPrime[x] is true if 'x' is prime.
      let isPrime = Array(right + 1).fill(true);

      // 0 and 1 are not prime numbers.
      isPrime[0] = false;
      isPrime[1] = false;

      // Step 2: Use Sieve of Eratosthenes to mark non-primes.
      for (let n = 2; n * n <= right; n++) {
            if (!isPrime[n]) {
                  continue;  // Skip already marked numbers.
            }

            // Mark all multiples of 'n' as non-prime.
            for (let m = n * 2; m <= right; m += n) {
                  isPrime[m] = false;
            }
      }

      // Step 3: Collect all primes in range [left, right].
      let primes = [];
      for (let i = left; i <= right; i++) {
            if (isPrime[i]) {
                  primes.push(i);
            }
      }

      // Step 4: Find closest prime pair (smallest difference between consecutive primes).
      let closestPrime = [-1, -1];  // Default result if no pair found.
      let smallestDifference = right - left + 1;  // Max possible difference.

      for (let i = 1; i < primes.length; i++) {
            let difference = primes[i] - primes[i - 1];
            if (difference < smallestDifference) {
                  smallestDifference = difference;
                  closestPrime = [primes[i - 1], primes[i]];
            }
      }

      return closestPrime;
};
