//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2523

//? ⌚ Time complexity ➺ O(n log log n + p) 👉🏻  n = right

//? 🧺 Space complexity ➺ O(n)  -> p = (right - left + 1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> closestPrimes(int left, int right) {
            // Step 1: Boolean array to mark prime status for each number up to 'right'.
            vector<bool> isPrime(right + 1, true);

            // 0 and 1 are not prime numbers.
            isPrime[0] = false;
            isPrime[1] = false;

            // Step 2: Sieve of Eratosthenes — marking non-primes.
            for (int n = 2; n * n <= right; n++) {
                  if (!isPrime[n]) {
                        continue;  // Skip already marked numbers.
                  }

                  // Mark multiples of 'n' as non-prime.
                  for (int m = n * 2; m <= right; m += n) {
                        isPrime[m] = false;
                  }
            }

            // Step 3: Collect primes within the range [left, right].
            vector<int> primes;
            for (int i = left; i <= right; i++) {
                  if (isPrime[i]) {
                        primes.push_back(i);
                  }
            }

            // Step 4: Find the pair of primes with the smallest gap.
            vector<int> closestPrime = {-1, -1};  // Default result if no pair found.
            int smallestDifference = right - left + 1;  // Max possible difference.

            for (size_t i = 1; i < primes.size(); i++) {
                  int difference = primes[i] - primes[i - 1];
                  if (difference < smallestDifference) {
                        smallestDifference = difference;
                        closestPrime[0] = primes[i - 1];
                        closestPrime[1] = primes[i];
                  }
            }

            return closestPrime;
      }
};
