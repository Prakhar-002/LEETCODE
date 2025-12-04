
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 424

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from collections import defaultdict

class Solution:
      def characterReplacement(self, s: str, k: int) -> int:
            # Dictionary to store character frequencies in the current window
            char_count = defaultdict(int)

            left = 0  # Left pointer of the sliding window
            maxFreq = 0  # Maximum frequency of a single character in the window
            longestString = 0  # Stores the longest valid substring length

            # Iterate through the string with a right pointer
            for right in range(len(s)):
                  # Update the frequency count of the current character
                  char_count[s[right]] += 1

                  # Update maxFreq with the highest occurring character in the window
                  maxFreq = max(maxFreq, char_count[s[right]])

                  # If the window size minus the highest frequency character is greater than k, shrink the window
                  while (right - left + 1) - maxFreq > k:
                        char_count[s[left]] -= 1  # Decrease count of the leftmost character
                        left += 1  # Move the left pointer forward

                  # Update longestString with the current valid window size
                  longestString = max(longestString, right - left + 1)

            return longestString
