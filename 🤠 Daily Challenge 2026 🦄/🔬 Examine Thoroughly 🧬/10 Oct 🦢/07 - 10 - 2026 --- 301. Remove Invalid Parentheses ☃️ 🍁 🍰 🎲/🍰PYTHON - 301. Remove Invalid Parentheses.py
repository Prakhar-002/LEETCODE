#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 301

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def removeInvalidParentheses(self, s: str) -> list[str]:
            # Set to store unique valid strings
            self.st = set()
            self.n = len(s)

            # Stores the maximum length of a valid string found
            self.maxLen = 0

            def solve(i: int, curr: list[str], count: int) -> None:
                  # If count becomes negative, we have more ')' than '('
                  if count < 0:
                        return

                  # Base case: processed the entire string
                  if i == self.n:
                        # A valid parentheses string must have zero unmatched '('
                        if count == 0:
                              curr_str = "".join(curr)
                              curr_len = len(curr_str)

                              # Found a longer valid string; clear previous shorter answers
                              if curr_len > self.maxLen:
                                    self.maxLen = curr_len
                                    self.st.clear()

                              # Store all valid strings having the maximum length
                              if curr_len == self.maxLen:
                                    self.st.add(curr_str)
                        return

                  c = s[i]

                  # Non-parenthesis characters are always included
                  if c != '(' and c != ')':
                        curr.append(c)
                        solve(i + 1, curr, count)
                        curr.pop()
                        return

                  # OPTION 1: Keep the current parenthesis
                  curr.append(c)
                  if c == '(':
                        solve(i + 1, curr, count + 1)
                  else:
                        solve(i + 1, curr, count - 1)
                  curr.pop()

                  # OPTION 2: Remove the current parenthesis
                  solve(i + 1, curr, count)

            solve(0, [], 0)
            return list(self.st)