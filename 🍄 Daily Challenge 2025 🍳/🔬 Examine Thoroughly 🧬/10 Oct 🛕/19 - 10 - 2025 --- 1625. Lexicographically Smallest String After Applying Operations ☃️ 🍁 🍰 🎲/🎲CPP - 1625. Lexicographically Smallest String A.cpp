//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1625

//? ⌚ Time complexity ➺ O(n^2 d^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <string>
using namespace std;

class Solution {
public:
      /**
       * Find the lexicographically smallest string after applying rotations and digit additions.
       *
       * @param s original string of digits
       * @param a increment to add to digits at odd or even indices
       * @param b rotation step size
       * @return lexicographically smallest string possible
       */
      string findLexSmallestString(string s, int a, int b) {
            int n = s.size();
            string res = s;    // Initialize result with original string
            s = s + s;         // Duplicate string for easy rotation substring extraction
            int g = gcd(b, n); // Compute gcd of rotation step and string length to optimize rotations

            // Lambda function 'add' to add multiples of 'a' to digits starting at index 'start' (0 or 1)
            auto add = [&](string &t, int start) {
                  int minVal = 10; // Track the minimal digit found
                  int times = 0;   // Times to add 'a' for minimal digit

                  // Find the minimum digit achievable by adding 'i' multiples of 'a' modulo 10
                  for (int i = 0; i < 10; i++) {
                        int added = ((t[start] - '0') + i * a) % 10;
                        if (added < minVal) {
                              minVal = added;
                              times = i; // Keep track of factor for minimal digit
                        }
                  }

                  // Add 'times * a' modulo 10 to every digit at positions start, start+2, ...
                  for (int i = start; i < n; i += 2) {
                        t[i] = '0' + ((t[i] - '0') + times * a) % 10;
                  }
            };

            // Iterate over rotation start indices by step 'g'
            for (int i = 0; i < n; i += g) {
                  string t = s.substr(i, n); // Rotate string by extracting substring of length n starting at i

                  add(t, 1); // Add to odd indices to minimize digits

                  if (b % 2) { // If rotation is odd, also add to even indices
                        add(t, 0);
                  }

                  // Update result to lexicographically smaller string
                  res = min(res, t);
            }
            return res;
      }

private:
      // Helper gcd function using Euclidean algorithm
      int gcd(int x, int y) {
            while (y != 0) {
                  int temp = y;
                  y = x % y;
                  x = temp;
            }
            return x;
      }
};
