#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3234

#? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def numberOfSubstrings(self, s: str) -> int:
            # Length of the input string
            n = len(s)
            # Array pre stores the index of previous '0' or the current index if first or previous char is '0'
            pre = [-1] * (n + 1)
            for i in range(n):
                  # If first char or previous char is '0', record current index in pre
                  if i == 0 or s[i - 1] == "0":
                        pre[i + 1] = i
                  else:
                        # Otherwise, inherit the previous index from pre
                        pre[i + 1] = pre[i]

            # Initialize result to 0
            res = 0
            # Iterate over the string using 1-based index i
            for i in range(1, n + 1):
                  # Count of zeros starting with current character
                  cnt0 = 1 if s[i - 1] == "0" else 0
                  j = i
                  # Iterate back while cnt0^2 <= n to analyze substrings
                  while j > 0 and cnt0 * cnt0 <= n:
                        # Count of ones in the current substring segment
                        cnt1 = (i - pre[j]) - cnt0
                        # Condition to add valid substrings based on counts of zero and ones
                        if cnt0 * cnt0 <= cnt1:
                              res += min(j - pre[j], cnt1 - cnt0 * cnt0 + 1)
                        # Move to previous segment
                        j = pre[j]
                        # Increase zero count for next iteration
                        cnt0 += 1

            # Return total valid substrings count
            return res
