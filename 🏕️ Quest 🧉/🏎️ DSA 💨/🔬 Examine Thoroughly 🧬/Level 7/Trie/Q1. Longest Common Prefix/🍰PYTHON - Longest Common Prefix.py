#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q1

#? ⌚ Time complexity ➺ O(n *) 👉🏻  n = len(strs)

#? 🧺 Space complexity ➺ O(1)  👉🏻  m = len(strs[0])

class Solution:
      def longestCommonPrefix(self, strs: List[str]) -> str:
            # If the input list is empty, return empty string
            if len(strs) == 0:
                  return ""

            # We use the first string as a reference
            # For each index i in the first string:
            for i in range(len(strs[0])):
                  # Check every other string in the list
                  for s in strs:
                        # If we have reached the end of current string OR
                        # the character at position i does not match strs[0][i],
                        # then the common prefix ends at index i
                        if i == len(s) or s[i] != strs[0][i]:
                              return strs[0][:i]

            # If we finish the loop, the entire first string is the common prefix
            return strs[0]
