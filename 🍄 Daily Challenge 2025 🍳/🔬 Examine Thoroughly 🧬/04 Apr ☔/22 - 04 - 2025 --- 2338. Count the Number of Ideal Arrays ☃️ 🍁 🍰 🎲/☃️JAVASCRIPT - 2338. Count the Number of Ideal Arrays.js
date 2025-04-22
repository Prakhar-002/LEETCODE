//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2338

//? ⌚ Time complexity ➺ O((n+ω(m))⋅ω(m)+mω(m)) 👉🏻  w(m) = No. of distinct factor (Log log m)

//? 🧺 Space complexity ➺ O((n+log(m))⋅log(m))

// Constants
const MOD = 1e9 + 7;                                      // Modulo for large number handling
const MAX_N = 10010;                                      // Max possible value for 'n'
const MAX_P = 15;                                         // Max number of prime factors per number

// 2D array to store binomial coefficients: C(n + p - 1, p)
const c = Array.from({ length: MAX_N + MAX_P }, () =>
      Array(MAX_P + 1).fill(0)
);

// Array to store smallest prime factor for each number
const sieve = Array(MAX_N).fill(0);

// ps[i] = array of prime exponent counts in factorization of i
const ps = Array.from({ length: MAX_N }, () => []);

// Initialization IIFE (Immediately Invoked Function Expression)
(function init() {
      // Sieve of Eratosthenes to fill smallest prime factor for each number
      for (let i = 2; i < MAX_N; i++) {
            if (sieve[i] === 0) {
                  for (let j = i; j < MAX_N; j += i) {
                        if (sieve[j] === 0) {
                              sieve[j] = i; // Mark smallest prime factor
                        }
                  }
            }
      }

      // For every number, count the power of each prime in its factorization
      for (let i = 2; i < MAX_N; i++) {
            let x = i;
            while (x > 1) {
                  const p = sieve[x]; // Get smallest prime factor
                  let cnt = 0;
                  while (x % p === 0) {
                        x = Math.floor(x / p);
                        cnt++;
                  }
                  ps[i].push(cnt); // Store count of this prime factor
            }
      }

      // Build Pascal's Triangle to calculate combinations
      c[0][0] = 1;
      for (let i = 1; i < MAX_N + MAX_P; i++) {
            c[i][0] = 1; // Base case: C(i, 0) = 1
            for (let j = 1; j <= Math.min(i, MAX_P); j++) {
                  // Pascal's identity: C(i, j) = C(i-1, j) + C(i-1, j-1)
                  c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
            }
      }
})();

// Main function to compute number of ideal arrays
function idealArrays(n, maxValue) {
      let ans = 0n;

      // Try every number x as the last element of the array
      for (let x = 1; x <= maxValue; x++) {
            let mul = 1n;

            // For each prime factor exponent of x, multiply C(n + p - 1, p)
            for (const p of ps[x]) {
                  mul = (mul * BigInt(c[n + p - 1][p])) % BigInt(MOD);
            }

            // Accumulate the total result
            ans = (ans + mul) % BigInt(MOD);
      }

      return Number(ans); // Convert back to regular number
}
