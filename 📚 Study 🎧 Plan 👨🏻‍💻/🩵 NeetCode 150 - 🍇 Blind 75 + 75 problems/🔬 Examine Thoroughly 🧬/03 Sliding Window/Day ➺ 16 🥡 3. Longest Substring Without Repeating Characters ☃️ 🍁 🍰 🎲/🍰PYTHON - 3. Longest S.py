#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m) 👉🏻 m = maxLength

class Solution:
      def lengthOfLongestSubstring(self, s: str) -> int:
            # HashSet to store unique characters
            char_set = set()
            left = 0  # Left pointer of the sliding window
            max_length = 0  # Maximum length of substring

            # Iterate through the string with a right pointer
            for right in range(len(s)):
                  while s[right] in char_set:
                        # Remove leftmost character to maintain uniqueness
                        char_set.remove(s[left])
                        left += 1

                  # Add current character to the set
                  char_set.add(s[right])

                  # Update max_length with the current window size
                  max_length = max(max_length, right - left + 1)

            return max_length
