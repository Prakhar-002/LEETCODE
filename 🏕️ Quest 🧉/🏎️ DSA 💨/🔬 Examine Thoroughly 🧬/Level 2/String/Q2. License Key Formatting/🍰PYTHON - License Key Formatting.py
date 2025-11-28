#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def licenseKeyFormatting(self, s: str, k: int) -> str:
            l = s.split("-")                               # Split the string by dashes
            cleaned = "".join(l)[::-1].upper()             # Join, reverse the string, and convert to uppercase

            res = []

            i = 0
            while i < len(cleaned):
                  res.append(cleaned[i:i + k])             # Append slices of size k
                  i += k                                   # Increment i by k each iteration

            return "-".join(res)[::-1]                      # Join with dash and reverse the string back
