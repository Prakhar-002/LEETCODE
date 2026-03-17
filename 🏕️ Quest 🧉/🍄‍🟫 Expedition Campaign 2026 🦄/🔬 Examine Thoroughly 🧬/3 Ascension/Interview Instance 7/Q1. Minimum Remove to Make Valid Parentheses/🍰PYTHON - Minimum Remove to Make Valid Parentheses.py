#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1249

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def minRemoveToMakeValid(self, s: str) -> str:

            # ---------- First Pass (Left to Right): remove unmatched ')' ----------
            open_count = 0      # renamed from 'open' to avoid shadowing built-in
            res        = []

            for ch in s:
                  if ch == '(':
                        # Track unmatched opening brackets
                        open_count += 1
                  elif ch == ')':
                        # Skip this ')' if no unmatched '(' exists
                        if open_count == 0:
                              continue
                        # Otherwise consume one unmatched '('
                        open_count -= 1
                  res.append(ch)

            # ---------- Second Pass (Right to Left): remove unmatched '(' ----------
            close = 0
            final = []

            for ch in reversed(res):
                  if ch == ')':
                        # Track unmatched closing brackets
                        close += 1
                  elif ch == '(':
                        # Skip this '(' if no unmatched ')' exists
                        if close == 0:
                              continue
                        # Otherwise consume one unmatched ')'
                        close -= 1
                  final.append(ch)

            # Reverse since we built the list right to left
            return ''.join(reversed(final))