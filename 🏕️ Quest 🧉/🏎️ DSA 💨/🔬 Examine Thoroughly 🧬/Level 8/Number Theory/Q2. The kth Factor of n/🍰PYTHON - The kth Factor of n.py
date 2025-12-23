#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def kthFactor(self, n: int, k: int) -> int:
            # We'll iterate from 1 to n to find factors
            # factor is not actually used; we just need to count k
            factor = 0
            for i in range(1, n + 1):
                  # If i is a factor of n, then we have found one more factor
                  if n % i == 0 and (k := k - 1) == 0:
                        # When k becomes 0, i is the k-th factor → return i
                        return i

            # If we finish the loop and k > 0, there are fewer than k factors
            return -1 if k > 0 else factor

#!----------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(sqrt(n)) 👉🏻  n

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def kthFactor(self, n: int, k: int) -> int:
            # First pass: find factors from 1 to sqrt(n)
            i = 1
            while i * i <= n:
                  # If i is a factor and this is the k-th factor, return i
                  if n % i == 0 and (k := k - 1) == 0:
                        return i
                  i += 1

            # Second pass: find factors from sqrt(n) down to 1
            # but return their pairs (n//i) in ascending order
            i = int(n**0.5)
            while i >= 1:
                  # Skip if i is the perfect square root (already counted)
                  if i * i == n:
                        i -= 1
                        continue

                  # If i is a factor and this is the k-th factor, return n//i
                  if n % i == 0 and (k := k - 1) == 0:
                        return n // i
                  i -= 1

            # If we haven't found k factors, return -1
            return -1
