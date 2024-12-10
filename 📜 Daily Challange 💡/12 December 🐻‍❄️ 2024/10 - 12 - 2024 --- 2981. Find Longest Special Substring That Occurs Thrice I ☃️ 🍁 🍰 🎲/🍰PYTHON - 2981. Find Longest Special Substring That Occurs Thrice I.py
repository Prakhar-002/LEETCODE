#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2981

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n ^ 2)

class Solution:
      def maximumLength(self, s: str) -> int:
            # Create a dictionary to store the count of substrings.
            subStringCount = {}

            # Initialize a variable to store the maximum length of a substring
            # that appears at least 3 times.
            max_len = -1

            # Iterate over each character in the input string.
            for i in range(len(s)):
                  index = i

                  # Generate all substrings starting at index `i` with consecutive identical characters.
                  while index < len(s) and s[index] == s[i]:
                        # Extract the substring from `i` to `index + 1`.
                        sub = s[i: index + 1]
                        index += 1

                        # Increment the count of the substring in the dictionary.
                        subStringCount[sub] = subStringCount.get(sub, 0) + 1

                        # If the substring appears at least 3 times and has a length greater than
                        # the current maximum, update the maximum length.
                        if subStringCount[sub] >= 3 and len(sub) > max_len:
                              max_len = len(sub)

            # Return the maximum length found, or -1 if no such substring exists.
            return max_len
