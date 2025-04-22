//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2338

//? ⌚ Time complexity ➺ O((n+ω(m))⋅ω(m)+mω(m)) 👉🏻  w(m) = No. of distinct factor (Log log m)

//? 🧺 Space complexity ➺ O((n+log(m))⋅log(m))

// Define constants for modulo and array limits
const int MOD = 1e9 + 7;               // Modulo for preventing overflow
const int MAX_N = 1e4 + 10;            // Max value for 'n'
const int MAX_P = 15;                  // Max number of prime exponents possible

// Declare combination table, sieve array, and prime factor count storage
int c[MAX_N + MAX_P][MAX_P + 1];       // Binomial coefficients: C(n + p - 1, p)
vector<int> ps[MAX_N];                 // Prime factor exponent counts for each number
int sieve[MAX_N];                      // Smallest prime factor of each number

class Solution {
public:
      // Constructor to initialize sieve, prime factors, and combinations
      Solution() {
            // Avoid re-initializing if already done
            if (c[0][0]) {
                  return;
            }

            // Sieve of Eratosthenes: fill smallest prime factors
            for (int i = 2; i < MAX_N; i++) {
                  if (sieve[i] == 0) {
                        for (int j = i; j < MAX_N; j += i) {
                              sieve[j] = i;       // Store smallest prime factor for 'j'
                        }
                  }
            }

            // Factorize each number and store prime exponent counts
            for (int i = 2; i < MAX_N; i++) {
                  int x = i;
                  while (x > 1) {
                        int p = sieve[x];        // Get smallest prime factor
                        int cnt = 0;

                        // Count how many times 'p' divides 'x'
                        while (x % p == 0) {
                              x /= p;
                              cnt++;
                        }

                        // Store count of this prime factor
                        ps[i].push_back(cnt);
                  }
            }

            // Precompute binomial coefficients using Pascal's Triangle
            c[0][0] = 1;
            for (int i = 1; i < MAX_N + MAX_P; i++) {
                  c[i][0] = 1;                    // Base case: C(i, 0) = 1
                  for (int j = 1; j <= min(i, MAX_P); j++) {
                        // Pascal's Rule: C(i, j) = C(i-1, j) + C(i-1, j-1)
                        c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
                  }
            }
      }

      // Main function to calculate the number of ideal arrays
      int idealArrays(int n, int maxValue) {
            long long ans = 0;

            // Loop through each possible end value of the ideal array
            for (int x = 1; x <= maxValue; x++) {
                  long long mul = 1;

                  // Multiply combination values for each prime exponent of 'x'
                  for (int p : ps[x]) {
                        // C(n + p - 1, p): choose positions to place multiplications
                        mul = mul * c[n + p - 1][p] % MOD;
                  }

                  // Add to the total answer
                  ans = (ans + mul) % MOD;
            }

            // Return final result
            return ans;
      }
};
