#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 22

#? ⌚ Time complexity ➺ O(4 ^ n / √n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def generateParenthesis(self, n: int) -> List[str]:
            stack = []           # Temporary stack to build current combination
            res = []             # Final result list to store all valid combinations

            # Helper function to perform backtracking
            def backtracking(openN, closeN):
                  # ✅ Base Case: If both open and close parentheses used up to n
                  if openN == closeN == n:
                        res.append("".join(stack))  # Join the current stack into a string and store it
                        return                      # Return to explore other paths

                  # ➕ Add an open parenthesis if we can still add more
                  if openN < n:
                        stack.append("(")           # Add '(' to the stack
                        backtracking(openN + 1, closeN)  # Recurse with increased open count
                        stack.pop()                 # Backtrack: remove the last added '('

                  # ➕ Add a close parenthesis if it won't invalidate the sequence
                  if closeN < openN:
                        stack.append(')')           # Add ')' to the stack
                        backtracking(openN, closeN + 1)  # Recurse with increased close count
                        stack.pop()                 # Backtrack: remove the last added ')'

            # 🔁 Start recursion with 0 open and close parentheses
            backtracking(0, 0)

            # 🟢 Return the result list of all valid combinations
            return res
