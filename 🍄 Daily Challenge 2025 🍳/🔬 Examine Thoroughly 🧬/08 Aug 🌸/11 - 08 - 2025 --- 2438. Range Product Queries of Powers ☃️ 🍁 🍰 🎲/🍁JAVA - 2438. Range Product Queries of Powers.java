//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2438

//? ⌚ Time complexity ➺ O(log n) 👉🏻  Q = len(queries)

//? 🧺 Space complexity ➺ O(log n + Q log mod)

import java.util.*;

class Solution {
      public int[] productQueries(int n, int[][] queries) {
            int mod = (int) 1e9 + 7;

            // Step 1: Extract all powers of two from n's binary representation.
            // For each bit that is set in n, record the corresponding 2^i value.
            List<Integer> powers = new ArrayList<>();
            int i = 0;
            int temp = n;
            while (temp > 0) {
                  if ((temp & 1) == 1) {
                        powers.add(1 << i); // store 2^i
                  }
                  temp >>= 1; // Move to next bit
                  i++;
            }

            // Step 2: Build prefix product array where
            // prefix[j] = (product of first j values in powers) % mod.
            long[] prefix = new long[powers.size() + 1];
            prefix[0] = 1;
            for (int j = 1; j <= powers.size(); j++) {
                  prefix[j] = (prefix[j - 1] * powers.get(j - 1)) % mod;
            }

            // Step 3: Answer queries using modular division.
            // For query [l, r], product = prefix[r+1] / prefix[l] under modulus.
            // Use Fermat's Little Theorem to compute the modular inverse of prefix[l].
            int[] res = new int[queries.length];
            for (int q = 0; q < queries.length; q++) {
                  int l = queries[q][0];
                  int r = queries[q][1];
                  long val = prefix[r + 1] * modPow(prefix[l], mod - 2, mod) % mod;
                  res[q] = (int) val;
            }

            // Step 4: Return list of results
            return res;
      }

      // Utility: Fast modular exponentiation (base^exp % mod)
      private long modPow(long base, long exp, long mod) {
            long ans = 1;
            base %= mod;
            while (exp > 0) {
                  if ((exp & 1) == 1) {
                        ans = (ans * base) % mod;
                  }
                  base = (base * base) % mod;
                  exp >>= 1;
            }
            return ans;
      }
}
