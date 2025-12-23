#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q3

#? ⌚ Time complexity ➺ O(n ^ 2 * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n + k) 

class Solution:
      def wordBreak(self, s: str, wordDict: List[str]) -> bool:
            n = len(s)
            # Convert wordDict to a set for O(1) lookup
            words = set(wordDict)
            # dp[i] = True if s[0:i] can be segmented into words from wordDict
            dp = [False] * (n + 1)
            dp[0] = True  # empty string can always be segmented

            # For each position i in the string
            for i in range(1, n + 1):
                  # Try all possible j where we split s[0:i] into s[0:j] and s[j:i]
                  for j in range(i):
                        # If s[0:j] can be segmented (dp[j] is True)
                        # and s[j:i] is a word in the dictionary
                        if dp[j] and s[j:i] in words:
                              # Then s[0:i] can be segmented
                              dp[i] = True
                              break  # no need to check other j for this i

            # Return whether the entire string s can be segmented
            return dp[-1]
