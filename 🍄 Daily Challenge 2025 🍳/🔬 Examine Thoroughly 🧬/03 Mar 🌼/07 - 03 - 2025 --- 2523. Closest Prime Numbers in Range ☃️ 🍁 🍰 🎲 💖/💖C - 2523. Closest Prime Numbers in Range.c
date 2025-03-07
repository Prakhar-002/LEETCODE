//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2523

//? ⌚ Time complexity ➺ O(n log log n + p) 👉🏻  n = right

//? 🧺 Space complexity ➺ O(n)  -> p = (right - left + 1)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* closestPrimes(int left, int right, int* returnSize) {
      // Step 1: Array to track prime status.
      bool* isPrime = (bool*)malloc((right + 1) * sizeof(bool));
      for (int i = 0; i <= right; i++) {
            isPrime[i] = true;
      }

      // 0 and 1 are not prime.
      isPrime[0] = false;
      isPrime[1] = false;

      // Step 2: Sieve of Eratosthenes - mark non-primes.
      for (int n = 2; n * n <= right; n++) {
            if (!isPrime[n]) continue;

            for (int m = n * 2; m <= right; m += n) {
                  isPrime[m] = false;
            }
      }

      // Step 3: Collect primes within [left, right].
      int* primes = (int*)malloc((right - left + 1) * sizeof(int));
      int primesCount = 0;
      for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                  primes[primesCount++] = i;
            }
      }

      // Step 4: Find closest prime pair.
      int* closestPrime = (int*)malloc(2 * sizeof(int));
      closestPrime[0] = -1;
      closestPrime[1] = -1;

      int smallestDifference = right - left + 1;  // Max possible gap.
      for (int i = 1; i < primesCount; i++) {
            int difference = primes[i] - primes[i - 1];
            if (difference < smallestDifference) {
                  smallestDifference = difference;
                  closestPrime[0] = primes[i - 1];
                  closestPrime[1] = primes[i];
            }
      }

      // Return array size is 2 (a pair of numbers).
      *returnSize = 2;

      // Cleanup
      free(isPrime);
      free(primes);

      return closestPrime;
}
