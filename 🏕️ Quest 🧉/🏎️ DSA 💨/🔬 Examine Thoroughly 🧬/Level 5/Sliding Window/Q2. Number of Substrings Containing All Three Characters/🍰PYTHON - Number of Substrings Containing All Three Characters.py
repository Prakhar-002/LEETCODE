#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1358

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

from collections import defaultdict

class Solution:
      def numberOfSubstrings(self, s: str) -> int:
            # Dictionary to store the frequency of 'a', 'b', and 'c'
            abc_count = defaultdict(int)
            substring = 0  # Counter to store the number of valid substrings
            l = 0  # Left pointer for the sliding window

            # Iterate over the string with the right pointer `r`
            for r in range(len(s)):
                  abc_count[s[r]] += 1  # Add the current character to the frequency dictionary

                  # When all three characters ('a', 'b', 'c') are in the window
                  while len(abc_count) == 3:
                        # Every substring starting from index `l` to `r`
                        # contributes to (len(s) - r) valid substrings
                        substring += (len(s) - r)

                        # Shrink the window from the left
                        abc_count[s[l]] -= 1  # Reduce the frequency of the leftmost character

                        # If the character count becomes zero, remove it from the dictionary
                        if abc_count[s[l]] == 0:
                              abc_count.pop(s[l])

                        l += 1  # Move the left pointer forward

            return substring  # Return the total count of valid substrings

#!--------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def numberOfSubstrings(self, s: str) -> int:
            # Store the latest indices of 'a', 'b', and 'c'
            last_seen = {'a': -1, 'b': -1, 'c': -1}
            count = 0  # Total count of valid substrings

            # Iterate over the string
            for i, char in enumerate(s):
                  # Update the latest position of the current character
                  last_seen[char] = i

                  # If all three characters have been seen at least once
                  if -1 not in last_seen.values():
                        # Find the minimum index among 'a', 'b', and 'c'
                        min_index = min(last_seen.values())

                        # Every substring from index 0 to `min_index` is valid
                        count += (min_index + 1)

            return count  # Return the total number of substrings