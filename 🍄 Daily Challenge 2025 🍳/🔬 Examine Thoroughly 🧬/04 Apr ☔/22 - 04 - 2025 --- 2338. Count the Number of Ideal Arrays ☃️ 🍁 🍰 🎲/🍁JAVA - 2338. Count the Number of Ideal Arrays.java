//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2338

//? ⌚ Time complexity ➺ O((n+ω(m))⋅ω(m)+mω(m)) 👉🏻  w(m) = No. of distinct factor (Log log m)

//? 🧺 Space complexity ➺ O((n+log(m))⋅log(m))

class Solution {

      // Define constants
      static int MOD = 1000000007; // Large prime for modulo operations
      static int MAX_N = 10010; // Maximum limit for 'n' and value processing
      static int MAX_P = 15; // Maximum number of prime factors considered

      static int[][] c = new int[MAX_N + MAX_P][MAX_P + 1]; // DP array for binomial coefficients
      static int[] sieve = new int[MAX_N]; // Sieve array to store smallest prime factors
      static List<Integer>[] ps = new List[MAX_N]; // Stores counts of prime exponents for each number

      // Constructor: Initializes static arrays only once
      public Solution() {
            // If already initialized, skip
            if (c[0][0] == 1) {
                  return;
            }

            // Initialize each list in 'ps' array
            for (int i = 0; i < MAX_N; i++) {
                  ps[i] = new ArrayList<>();
            }

            // Sieve of Eratosthenes to populate smallest prime factors
            for (int i = 2; i < MAX_N; i++) {
                  if (sieve[i] == 0) {
                        for (int j = i; j < MAX_N; j += i) {
                              if (sieve[j] == 0) {
                                    sieve[j] = i; // Mark smallest prime factor
                              }
                        }
                  }
            }

            // Generate prime exponent lists for all numbers up to MAX_N
            for (int i = 2; i < MAX_N; i++) {
                  int x = i;
                  while (x > 1) {
                        int p = sieve[x]; // Smallest prime factor
                        int cnt = 0;

                        // Count exponent of prime factor 'p' in number 'x'
                        while (x % p == 0) {
                              x /= p;
                              cnt++;
                        }

                        // Store the exponent count
                        ps[i].add(cnt);
                  }
            }

            // Compute binomial coefficients using DP
            c[0][0] = 1;
            for (int i = 1; i < MAX_N + MAX_P; i++) {
                  c[i][0] = 1; // Base case: C(i, 0) = 1
                  for (int j = 1; j <= Math.min(i, MAX_P); j++) {
                        c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD; // Pascal's Rule
                  }
            }
      }

      // Main function to calculate number of ideal arrays
      public int idealArrays(int n, int maxValue) {
            long ans = 0;

            // Iterate over each value from 1 to maxValue
            for (int x = 1; x <= maxValue; x++) {
                  long mul = 1;

                  // For each prime exponent in 'x', compute combinations
                  for (int p : ps[x]) {
                        // Multiply binomial(n + p - 1, p) for each exponent
                        mul = (mul * c[n + p - 1][p]) % MOD;
                  }

                  // Add result for this value of x
                  ans = (ans + mul) % MOD;
            }

            // Return the total number of ideal arrays
            return (int) ans;
      }
}
