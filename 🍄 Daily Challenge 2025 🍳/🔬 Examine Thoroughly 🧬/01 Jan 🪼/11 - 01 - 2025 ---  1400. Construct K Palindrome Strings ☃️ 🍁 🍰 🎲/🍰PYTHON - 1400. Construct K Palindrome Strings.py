#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1400

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canConstruct(self, s: str, k: int) -> bool:
            # If the string length is less than k, constructing k palindromes is impossible.
            if len(s) < k:
                  return False

            # If the string length equals k, each character can form a single-character palindrome.
            if len(s) == k:
                  return True

            # Count the frequency of each character in the string.
            charCount = [0] * 26
            for ch in s:
                  charCount[ord(ch) - ord('a')] += 1

            # Count the number of characters with odd frequencies.
            oddCount = sum(1 for freq in charCount if freq % 2 != 0)

            # We can construct k palindromes if the odd frequencies are less than or equal to k.
            return oddCount <= k
