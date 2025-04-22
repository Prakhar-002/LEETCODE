#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2338

#? ⌚ Time complexity ➺ O((n+ω(m))⋅ω(m)+mω(m)) 👉🏻  w(m) = No. of distinct factor (Log log m)

#? 🧺 Space complexity ➺ O((n+log(m))⋅log(m))

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O((n+ω(m))⋅ω(m)+mω(m)) ->  w(m) = No. of distinct factor (Log log m)

#  Space complexity -> O((n+log(m))⋅log(m))

MOD = 10**9 + 7                             # Define the modulo constant for large number computations
MAX_N = 10**4 + 10                          # Upper limit for array size (plus buffer)
MAX_P = 15                                  # Max prime exponent needed (since 2^14 > 10^4)

# Create sieve array to store the smallest prime factor for each number
sieve = [0] * MAX_N

#  Sieve of Eratosthenes to fill smallest prime factor for each number
for i in range(2, MAX_N):
      if sieve[i] == 0:                     # i is prime
            for j in range(i, MAX_N, i):    # Mark all multiples of i
                  sieve[j] = i              # Set smallest prime factor

# ps[i] will store the list of exponent counts in prime factorization of i
ps = [[] for _ in range(MAX_N)]

# Preprocess each number to extract exponent counts in its prime factorization
for i in range(2, MAX_N):
      x = i
      while x > 1:
            p = sieve[x]                   # Get smallest prime factor of x
            cnt = 0
            while x % p == 0:              # Count how many times p divides x
                  x //= p
                  cnt += 1
            ps[i].append(cnt)              # Store count for this prime factor

# Precompute combinations C[n][k] using Pascal's Triangle
c = [[0] * (MAX_P + 1) for _ in range(MAX_N + MAX_P)]
c[0][0] = 1
for i in range(1, MAX_N + MAX_P):
      c[i][0] = 1
      for j in range(1, min(i, MAX_P) + 1):
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD

# Main Solution Class
class Solution:
      def idealArrays(self, n: int, maxValue: int) -> int:
            ans = 0                        # Initialize total number of ideal arrays

            # Loop over every possible ending value of the ideal array
            for x in range(1, maxValue + 1):
                  mul = 1                  # Multiplicative count for valid ways using x

                  # For each prime exponent count in x’s prime factorization
                  for p in ps[x]:
                        # Stars and Bars: number of ways to distribute p factors into n elements
                        mul = mul * c[n + p - 1][p] % MOD

                  ans = (ans + mul) % MOD  # Add valid count for this value x

            return ans                     # Return final result
