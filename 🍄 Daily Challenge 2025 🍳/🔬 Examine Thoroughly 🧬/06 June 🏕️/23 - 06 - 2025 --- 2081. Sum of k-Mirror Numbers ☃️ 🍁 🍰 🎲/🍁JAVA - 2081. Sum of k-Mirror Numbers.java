//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2081

//? ⌚ Time complexity ➺ O(n ^ 5) 👉🏻  n = 10

//? 🧺 Space complexity ➺ O(1) 

class Solution {

      // Array to temporarily store base-k digits for palindrome check
      private int[] digit = new int[100];

      // Main function to find the sum of first `n` k-mirror numbers
      public long kMirror(int k, int n) {
            int left = 1; // Start of current length group (e.g., 1-digit, 2-digit...)
            int count = 0; // Number of valid k-mirror numbers found
            long ans = 0; // Sum of all valid k-mirror numbers

            // Keep generating palindromes until we find `n` valid ones
            while (count < n) {
                  int right = left * 10; // End boundary of current length group

                  // Try both even and odd length palindromes
                  for (int op = 0; op < 2; ++op) {
                        for (int i = left; i < right && count < n; ++i) {
                              // Build the full palindrome from half
                              long combined = i;
                              int x = (op == 0) ? (i / 10) : i;

                              // Append reversed digits to form a palindrome
                              while (x > 0) {
                                    combined = combined * 10 + (x % 10);
                                    x /= 10;
                              }

                              // Check if the number is also a palindrome in base-k
                              if (isPalindrome(combined, k)) {
                                    ++count;
                                    ans += combined;
                              }
                        }
                  }

                  // Move to the next group of numbers with more digits
                  left = right;
            }

            return ans;
      }

      // Helper function to check if number `x` is a palindrome in base `k`
      private boolean isPalindrome(long x, int k) {
            int length = -1;

            // Convert `x` to base-k and store digits in `digit[]`
            while (x > 0) {
                  ++length;
                  digit[length] = (int) (x % k);
                  x /= k;
            }

            // Compare digits from both ends
            for (int i = 0, j = length; i < j; ++i, --j) {
                  if (digit[i] != digit[j]) {
                        return false;
                  }
            }

            return true;
      }
}
