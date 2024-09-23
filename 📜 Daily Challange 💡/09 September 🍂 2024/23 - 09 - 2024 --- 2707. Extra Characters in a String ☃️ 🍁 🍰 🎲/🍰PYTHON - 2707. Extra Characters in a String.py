#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2707

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minExtraChar(self, s: str, dictionary: List[str]) -> int:
            # A set created from the `dictionary`
            # for faster membership tests to check if a substring is a valid word
            words = set(dictionary)
            # dictionary stores the results of subProblems
            dp = { len(s) : 0 }

            # function computes the minimal number of additional 
            # characters needed starting from index `i`
            def dfs(i):
                  # If `i` is already in `dp`
                  # it means we have computed the needed extra chars for substring `s[i:]`
                  if i in dp:
                        # return this stored value
                        return dp[i]

                  # function considers two cases for each position `i`

                  # Skipping the current character: `(1 + dfs(i + 1))`
                  # assumes that if the char at index `i` is not part of any valid word
                  # skip it, hence adding 1 to the count and moving forward
                  extraChars = 1 + dfs(i + 1) # skip cur char

                  # Form words using the current character and extend to subsequent characters
                  for j in range(i, len(s)):
                        # If substring `s[i:j+1]` from the current index `i` 
                        # to another index `j` is in the dictionary (`words`)
                        if s[i : j + 1] in words:
                              # call recursively to solve for the remaining string `s[j+1:]`
                              extraChars = min(extraChars, dfs(j + 1))

                  # `dp[i]` is updated 
                  dp[i] = extraChars
                  # return the result
                  return extraChars

            # execution starts with `dfs(0)`
            return dfs(0)