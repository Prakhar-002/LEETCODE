#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2438

#? ⌚ Time complexity ➺ O(log n) 👉🏻  Q = len(queries)

#? 🧺 Space complexity ➺ O(log n + Q log mod)

from typing import List 

class Solution:
      def productQueries(self, n: int, queries: List[List[int]]) -> List[int]:
            # Modulo for large number arithmetic as per problem constraints
            mod = 10 ** 9 + 7

            # Step 1: Extract all powers of 2 that make up n's binary representation.
            # Each set bit in n corresponds to a power of two in the decomposition.
            i = 0
            powers = []
            while n > 0:
                  if n & 1:
                        # Append the current power of 2 to the list
                        powers.append(2 ** i)
                  n >>= 1  # Move to the next bit
                  i += 1

            # Step 2: Build prefix product array.
            # prefix[i] will store the product of the first i powers (modulo mod)
            prefix = [1] * (len(powers) + 1)
            for i in range(1, len(powers) + 1):
                  prefix[i] = (prefix[i - 1] * powers[i - 1]) % mod

            # Step 3: Answer the queries using modular division.
            # For query [l, r], product = prefix[r+1] / prefix[l] mod mod
            # Modular division is done via Fermat's little theorem using pow(..., mod-2, mod)
            res = []
            for l, r in queries:
                  total = prefix[r + 1] * pow(prefix[l], mod - 2, mod) % mod
                  res.append(total)

            # Step 4: Return results for all queries
            return res
