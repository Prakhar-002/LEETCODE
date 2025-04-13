//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3272

//? ⌚ Time complexity ➺ O(n log n * (10 ^ m)) 👉🏻  m = (n + 1) / 2

//? 🧺 Space complexity ➺ O(n * (10 ^ m))

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      long long countGoodIntegers(int n, int k) {
            // Set to store unique sorted digit patterns of palindromes divisible by k
            unordered_set<string> dict;

            // Calculate base for generating half of the palindrome
            int base = pow(10, (n - 1) / 2);

            // Determine if length is odd (1 if odd, 0 if even)
            int skip = n & 1;

            // Generate all n-digit palindromic numbers
            for (int i = base; i < base * 10; i++) {

                  // Convert the half to string
                  string s = to_string(i);

                  // Append reverse of half (skip 1 char if n is odd)
                  s += string(s.rbegin() + skip, s.rend());

                  // Convert the full palindrome string to integer
                  long long palindromicInteger = stoll(s);

                  // Check if the number is divisible by k
                  if (palindromicInteger % k == 0) {

                        // Sort digits to normalize pattern
                        sort(s.begin(), s.end());

                        // Add to set to ensure uniqueness
                        dict.emplace(s);
                  }
            }

            // Precompute factorials for permutation calculation
            vector<long long> factorial(n + 1, 1);
            for (int i = 1; i <= n; i++) {
                  factorial[i] = factorial[i - 1] * i;
            }

            long long ans = 0;  // Store final result

            // For each unique digit pattern
            for (const string &s : dict) {

                  // Count digit frequency
                  vector<int> cnt(10);
                  for (char c : s) {
                        cnt[c - '0']++;
                  }

                  // Calculate permutations avoiding leading zeros
                  long long tot = (n - cnt[0]) * factorial[n - 1];

                  // Divide by factorials of repeated digits
                  for (int x : cnt) {
                        tot /= factorial[x];
                  }

                  // Add to total count
                  ans += tot;
            }

            // Return final result
            return ans;
      }
};
