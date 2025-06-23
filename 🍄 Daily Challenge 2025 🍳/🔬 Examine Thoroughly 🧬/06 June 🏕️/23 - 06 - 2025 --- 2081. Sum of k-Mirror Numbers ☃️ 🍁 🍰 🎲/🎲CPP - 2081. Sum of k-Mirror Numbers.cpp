//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2081

//? ⌚ Time complexity ➺ O(n ^ 5) 👉🏻  n = 10

//? 🧺 Space complexity ➺ O(1)

class Solution {
      private:
            int digit[100];  // Used to store base-k digits during palindrome checking
      
      public:
            long long kMirror(int k, int n) {
                  // Lambda to check if number is a palindrome in base-k
                  auto isPalindrome = [&](long long x) -> bool {
                        int length = -1;
      
                        // Convert number x into base-k and store digits
                        while (x) {
                              ++length;
                              digit[length] = x % k;
                              x /= k;
                        }
      
                        // Check if digits are the same forward and backward
                        for (int i = 0, j = length; i < j; ++i, --j) {
                              if (digit[i] != digit[j]) {
                                    return false;
                              }
                        }
                        return true;
                  };
      
                  int left = 1;       // Lower bound for current digit group (e.g., 1-9, 10-99, etc.)
                  int count = 0;      // Count of valid k-mirror numbers found
                  long long ans = 0;  // Accumulator for the sum of valid numbers
      
                  // Keep generating palindromic numbers until n are found
                  while (count < n) {
                        int right = left * 10;  // Upper bound for current digit group
      
                        // Generate both odd and even-length base-10 palindromes
                        for (int op = 0; op < 2; ++op) {
                              for (int i = left; i < right && count < n; ++i) {
                                    long long combined = i;
      
                                    // To form full palindrome: mirror digits
                                    int x = (op == 0) ? i / 10 : i;  // Skip middle digit for odd-length
                                    while (x) {
                                          combined = combined * 10 + (x % 10);  // Append reversed digit
                                          x /= 10;
                                    }
      
                                    // If it's a palindrome in base-k, count and add to sum
                                    if (isPalindrome(combined)) {
                                          ++count;
                                          ans += combined;
                                    }
                              }
                        }
      
                        left = right;  // Move to next digit size (e.g., from 1 to 10)
                  }
      
                  return ans;
            }
      };
      