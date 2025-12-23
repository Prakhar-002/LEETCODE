//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int kthFactor(int n, int k) {
            // We'll iterate from 1 to n to find factors
            // factor is not actually used; we just need to count k
            int factor = 0;
            for (int i = 1; i <= n; ++i) {
                  // If i is a factor of n, then we have found one more factor
                  if (n % i == 0 && --k == 0) {
                        // When k becomes 0, i is the k-th factor → return i
                        return i;
                  }
            }

            // If we finish the loop and k > 0, there are fewer than k factors
            return k > 0 ? -1 : factor;
      }
}

//!----------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(sqrt(n)) 👉🏻  n

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int kthFactor(int n, int k) {
            // First pass: find factors from 1 to sqrt(n)
            for (int i = 1; i * i <= n; ++i) {
                  // If i is a factor and this is the k-th factor, return i
                  if (n % i == 0 && --k == 0) {
                        return i;
                  }
            }

            // Second pass: find factors from sqrt(n) down to 1
            // but return their pairs (n/i) in ascending order
            for (int i = (int) Math.sqrt(n); i >= 1; --i) {
                  // Skip if i is the perfect square root (already counted)
                  if (i * i == n)
                        continue;

                  // If i is a factor and this is the k-th factor, return n/i
                  if (n % i == 0 && --k == 0) {
                        return n / i;
                  }
            }

            // If we haven't found k factors, return -1
            return -1;
      }
}
