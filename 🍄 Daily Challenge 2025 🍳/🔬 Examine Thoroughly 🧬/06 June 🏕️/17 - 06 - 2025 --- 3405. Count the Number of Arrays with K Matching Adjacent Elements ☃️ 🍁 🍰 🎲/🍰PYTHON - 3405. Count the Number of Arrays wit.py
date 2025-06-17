#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3405

#? ⌚ Time complexity ➺ O(log(n − k)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

MOD = 10**9 + 7           # Large prime for modulo operations
MAX = 10**5               # Maximum size for factorial precomputation

# Arrays to store factorials and inverse factorials
fact = [0] * MAX
inv_fact = [0] * MAX

# Fast modular exponentiation:
# Computes (x^n) % MOD efficiently using the binary method.
def qpow(x, n):
      result = 1                 # Initialize result as 1 (neutral element for multiplication)

      while n:                  # Loop while exponent n > 0
            if n % 2 == 1:      # If the current bit of n is 1 (i.e., n is odd)
                  result = (result * x) % MOD  # Multiply result with current x (mod MOD)

            x = (x * x) % MOD   # Square x for the next bit (i.e., x = x^2)
            n //= 2             # Divide exponent by 2 (shift bits to the right)

      return result             # Return final result: (x^n) % MOD


# Precompute factorials and their modular inverses
def init():
      if fact[0] != 0:
            return  # Already initialized

      fact[0] = 1
      for i in range(1, MAX):
            fact[i] = (fact[i - 1] * i) % MOD

      # Compute inverse of factorial[MAX-1] using Fermat's Little Theorem
      inv_fact[MAX - 1] = qpow(fact[MAX - 1], MOD - 2)

      # Compute inverse factorials from MAX-1 down to 1
      for i in range(MAX - 1, 0, -1):
            inv_fact[i - 1] = (inv_fact[i] * i) % MOD

# Compute n choose m: C(n, m) % MOD
def comb(n, m):
      if m < 0 or m > n:
            return 0
      return (fact[n] * inv_fact[m] % MOD) * inv_fact[n - m] % MOD

class Solution:
      def countGoodArrays(self, n: int, m: int, k: int) -> int:
            init()  # Initialize factorials and inverse factorials

            # Formula:
            # Choose k positions out of (n - 1) -> comb(n - 1, k)
            # One element can be any value from 1 to m
            # Remaining (n - k - 1) positions use (m - 1) choices
            return comb(n - 1, k) * m % MOD * qpow(m - 1, n - k - 1) % MOD
