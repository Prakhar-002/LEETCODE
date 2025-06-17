//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3405

//? ⌚ Time complexity ➺ O(log(n − k)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Define constants
const MOD = BigInt(1e9 + 7);        // Large prime for modulo operations
const MX = 100000;                  // Maximum size for factorial precomputation

// Arrays to store factorials and inverse factorials as BigInt
const fact = Array(MX).fill(0n);
const invFact = Array(MX).fill(0n);

// Fast modular exponentiation:
// Computes (x^n) % MOD efficiently using binary exponentiation
function qpow(x, n) {
      x = BigInt(x);                // Ensure x is BigInt
      n = BigInt(n);                // Ensure n is BigInt
      let res = 1n;                 // Initialize result as 1

      while (n > 0n) {
            if (n & 1n) {           // If the current bit is 1 (i.e., n is odd)
                  res = (res * x) % MOD;  // Multiply result by x mod MOD
            }
            x = (x * x) % MOD;      // Square x for next bit
            n >>= 1n;               // Right shift n (divide by 2)
      }

      return res;                   // Final result: (x^n) % MOD
}

// Precompute factorials and their modular inverses
function init() {
      if (fact[0] != 0n) {
            return;                // Already initialized
      }

      fact[0] = 1n;                // Base case: 0! = 1
      for (let i = 1; i < MX; i++) {
            fact[i] = (fact[i - 1] * BigInt(i)) % MOD;  // Compute i! % MOD
      }

      // Compute inverse of fact[MX - 1] using Fermat’s Little Theorem
      invFact[MX - 1] = qpow(fact[MX - 1], MOD - 2n);

      // Compute inverse factorials from MX-1 down to 0
      for (let i = MX - 2; i >= 0; i--) {
            invFact[i] = (invFact[i + 1] * BigInt(i + 1)) % MOD;
      }
}

// Compute combination: C(n, m) % MOD
function comb(n, m) {
      if (m < 0 || m > n) {
            return 0n;             // Invalid case
      }

      // Apply formula: C(n, m) = fact[n] / (fact[m] * fact[n - m]) % MOD
      return (((fact[n] * invFact[m]) % MOD) * invFact[n - m]) % MOD;
}

// Count good arrays according to the given constraints
function countGoodArrays(n, m, k) {
      init(); // Initialize factorials and inverse factorials

      // Step 1: Choose k positions out of (n - 1)
      let res = comb(n - 1, k);

      // Step 2: One of the values can be any number from 1 to m
      res = (res * BigInt(m)) % MOD;

      // Step 3: The rest (n - k - 1) elements must be from (m - 1) choices
      res = (res * qpow(m - 1, n - k - 1)) % MOD;

      // Convert result from BigInt to regular number
      return Number(res);
}
