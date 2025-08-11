//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2438

//? ⌚ Time complexity ➺ O(log n) 👉🏻  Q = len(queries)

//? 🧺 Space complexity ➺ O(log n + Q log mod)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<int> productQueries(int n, vector<vector<int>>& queries) {
            const int mod = 1e9 + 7;

            // Step 1: Extract powers of two from n's binary representation.
            // Each set bit corresponds to a distinct 2^i factor in the decomposition of n.
            vector<long long> powers;
            int i = 0;
            int temp = n;
            while (temp > 0) {
                  if (temp & 1) {
                        powers.push_back(1LL << i); // store 2^i
                  }
                  temp >>= 1; // move to next bit
                  i++;
            }

            // Step 2: Build prefix product array.
            // prefix[j] holds product of first j powers, modulo mod.
            vector<long long> prefix(powers.size() + 1, 1);
            for (int j = 1; j <= powers.size(); j++) {
                  prefix[j] = (prefix[j - 1] * powers[j - 1]) % mod;
            }

            // Step 3: Answer queries with modular division.
            // For [l, r], product = prefix[r+1] × inv(prefix[l]) mod.
            // inv(x) = x^(mod-2) mod (using Fermat's Little Theorem)
            vector<int> res;
            for (auto &q : queries) {
                  int l = q[0];
                  int r = q[1];
                  long long total = prefix[r + 1] * modPow(prefix[l], mod - 2, mod) % mod;
                  res.push_back((int)total);
            }

            return res;
      }

private:
      // Utility: Fast modular exponentiation function (base^exp % mod)
      long long modPow(long long base, long long exp, long long mod) {
            long long ans = 1;
            base %= mod;
            while (exp > 0) {
                  if (exp & 1) ans = (ans * base) % mod;
                  base = (base * base) % mod;
                  exp >>= 1;
            }
            return ans;
      }
};
