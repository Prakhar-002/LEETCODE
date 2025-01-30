#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 271

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

#? 🧺 Space complexity ➺ O(1)

class Solution:

      def encode(self, strs: List[str]) -> str:
            # Initialize an empty string to store the encoded result
            res = ""
            # Loop through each string in the list
            for s in strs:
                  # Append the length of the string, a delimiter '#', and the string itself
                  res += str(len(s)) + "#" + s
            # Return the fully encoded string
            return res

      def decode(self, s: str) -> List[str]:
            # Initialize an empty list to store the decoded strings
            res = []
            # Pointer to traverse the encoded string
            i = 0

            while i < len(s):
                  # Find the position of the next delimiter '#'
                  j = i
                  while s[j] != '#':
                        j += 1

                  # Extract the length of the next string
                  length = int(s[i:j])

                  # Move the pointer past the delimiter
                  i = j + 1

                  # Extract the actual string using the length
                  j = i + length
                  res.append(s[i:j])

                  # Move the pointer to the next encoded part
                  i = j

            # Return the decoded list of strings
            return res
