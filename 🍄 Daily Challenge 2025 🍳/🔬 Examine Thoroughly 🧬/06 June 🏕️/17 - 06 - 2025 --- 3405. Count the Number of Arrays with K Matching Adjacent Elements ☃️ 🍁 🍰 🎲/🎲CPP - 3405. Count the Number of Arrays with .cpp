//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3405

//? ⌚ Time complexity ➺ O(log(n − k)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Define a large prime for modulo operations
const int MOD = 1e9 + 7;

// Maximum size for factorial precomputation
const int MX = 1e5;

// Arrays to store factorials and inverse factorials
long long fact[MX];
long long inv_fact[MX];

class Solution {
      // Fast modular exponentiation:
      // Computes (x^n) % MOD efficiently using binary exponentiation
      long long qpow(long long x, int n) {
            long long res = 1;  // Initialize result as 1
            while (n) {
                  if (n & 1) {
                        res = res * x % MOD; // If n is odd, multiply current x
                  }
                  x = x * x % MOD;           // Square x for next bit
                  n >>= 1;                   // Divide n by 2
            }
            return res;                      // Final result (x^n) % MOD
      }

      // Compute combination: C(n, m) % MOD
      long long comb(int n, int m) {
            // Use precomputed factorial and inverse factorial
            return fact[n] * inv_fact[m] % MOD * inv_fact[n - m] % MOD;
      }

      // Precompute factorials and their modular inverses
      void init() {
            if (fact[0]) {
                  return; // Already initialized
            }

            fact[0] = 1; // Base case: 0! = 1
            for (int i = 1; i < MX; i++) {
                  fact[i] = fact[i - 1] * i % MOD; // Compute i! % MOD
            }

            // Compute inverse of fact[MX-1] using Fermat’s Little Theorem
            inv_fact[MX - 1] = qpow(fact[MX - 1], MOD - 2);

            // Compute inverse factorials in reverse
            for (int i = MX - 1; i > 0; i--) {
                  inv_fact[i - 1] = inv_fact[i] * i % MOD;
            }
      }

public:
      // Count good arrays as per given conditions
      int countGoodArrays(int n, int m, int k) {
            init(); // Ensure factorials and inverse factorials are initialized

            // Formula:
            // - Choose k positions out of (n - 1) → comb(n - 1, k)
            // - One element can be any value from 1 to m
            // - Remaining (n - k - 1) positions use (m - 1) choices
            return comb(n - 1, k) * m % MOD * qpow(m - 1, n - k - 1) % MOD;
      }
};
