//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3405

//? ⌚ Time complexity ➺ O(log(n − k)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      // Define a large prime for modulo operations
      static final int MOD = (int) 1e9 + 7;

      // Maximum size for factorial precomputation
      static final int MX = 100000;

      // Arrays to store factorials and inverse factorials
      static long[] fact = new long[MX];
      static long[] invFact = new long[MX];

      // Fast modular exponentiation using binary method
      // Computes (x^n) % MOD efficiently
      static long qpow(long x, int n) {
            long res = 1; // Start with result = 1
            while (n > 0) {
                  if ((n & 1) == 1) { // If current bit of n is 1 (i.e., n is odd)
                        res = (res * x) % MOD; // Multiply result by x (mod MOD)
                  }
                  x = (x * x) % MOD; // Square x for the next bit
                  n >>= 1; // Shift bits to the right (n = n / 2)
            }
            return res; // Final result (x^n) % MOD
      }

      // Static initializer block: runs once to fill fact and invFact arrays
      static {
            fact[0] = 1; // 0! = 1
            for (int i = 1; i < MX; i++) {
                  fact[i] = (fact[i - 1] * i) % MOD; // fact[i] = i! % MOD
            }

            // Compute inverse of fact[MAX-1] using Fermat's Little Theorem
            invFact[MX - 1] = qpow(fact[MX - 1], MOD - 2);

            // Compute inverse factorials from MAX-1 down to 1
            for (int i = MX - 1; i > 0; i--) {
                  invFact[i - 1] = (invFact[i] * i) % MOD;
            }
      }

      // Compute n choose m: C(n, m) % MOD
      long comb(int n, int m) {
            if (m < 0 || m > n)
                  return 0; // Invalid case
            return (((fact[n] * invFact[m]) % MOD) * invFact[n - m]) % MOD;
      }

      public int countGoodArrays(int n, int m, int k) {
            // Formula:
            // Choose k positions out of (n - 1) → comb(n - 1, k)
            // One element can be any value from 1 to m
            // Remaining (n - k - 1) positions use (m - 1) values
            long res = (comb(n - 1, k) * m) % MOD;
            res = (res * qpow(m - 1, n - k - 1)) % MOD;
            return (int) res; // Return final result as integer
      }
}
