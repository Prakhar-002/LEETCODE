//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3272

//? ⌚ Time complexity ➺ O(n log n * (10 ^ m)) 👉🏻  m = (n + 1) / 2

//? 🧺 Space complexity ➺ O(n * (10 ^ m))

import java.util.*; 

class Solution {

      public long countGoodIntegers(int n, int k) {

            // Set to store unique sorted digit patterns of palindromes divisible by k
            Set<String> dict = new HashSet<>();

            // Calculate the base for the half part of the palindrome
            // e.g., for n = 4, base = 10^(1) = 10, so we loop from 10 to 99
            int base = (int) Math.pow(10, (n - 1) / 2);

            // Determine if n is odd using bitwise AND (n & 1 is 1 if n is odd)
            int skip = n & 1;

            // Enumerate all palindromes of length n
            for (int i = base; i < base * 10; i++) {

                  // Convert half to string
                  String s = Integer.toString(i);

                  // Mirror the half to form the full palindrome
                  // Skip the middle digit if n is odd to avoid duplicating the center
                  s += new StringBuilder(s).reverse().substring(skip);

                  // Convert the palindrome string into a long integer
                  long palindromicInteger = Long.parseLong(s);

                  // If this palindrome is divisible by k, it's a k-palindromic integer
                  if (palindromicInteger % k == 0) {

                        // Sort the digits to create a normalized digit pattern
                        char[] chars = s.toCharArray();
                        Arrays.sort(chars);

                        // Add the sorted digit pattern to the set
                        dict.add(new String(chars));
                  }
            }

            // Precompute factorials up to n for permutations
            long[] factorial = new long[n + 1];
            factorial[0] = 1;
            for (int i = 1; i <= n; i++) {
                  factorial[i] = factorial[i - 1] * i;
            }

            // Final answer: total count of good integers
            long ans = 0;

            // For each unique digit pattern (i.e., unique multiset of digits)
            for (String s : dict) {

                  // Count the frequency of each digit (0 through 9)
                  int[] cnt = new int[10];
                  for (char c : s.toCharArray()) {
                        cnt[c - '0']++;
                  }

                  // Calculate total permutations:
                  // First digit must not be 0, so subtract cnt[0] from choices for first digit
                  long tot = (n - cnt[0]) * factorial[n - 1];

                  // Divide by factorials of repeated digits to avoid overcounting
                  for (int x : cnt) {
                        tot /= factorial[x];
                  }

                  // Add to total answer
                  ans += tot;
            }

            // Return the total number of good integers
            return ans;
      }
}
