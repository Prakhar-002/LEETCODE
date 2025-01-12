//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1400

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean canConstruct(String s, int k) {
            // If the string length is less than k, constructing k palindromes is impossible.
            if (s.length() < k) {
                  return false;
            }

            // If the string length equals k, each character can form a single-character palindrome.
            if (s.length() == k) {
                  return true;
            }

            // Count the frequency of each character in the string.
            int[] charCount = new int[26];
            for (char ch : s.toCharArray()) {
                  charCount[ch - 'a']++;
            }

            // Count the number of characters with odd frequencies.
            int oddCount = 0;
            for (int freq : charCount) {
                  if (freq % 2 != 0) {
                        oddCount++;
                  }
            }

            // We can construct k palindromes if the odd frequencies are less than or equal to k.
            return oddCount <= k;
      }
}
