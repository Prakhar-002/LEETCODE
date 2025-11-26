#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q3

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

class Solution:
      def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
            time = 0

            stack = []

            res = [0] * n 

            for log in logs:
                  log = log.split(":")
                  if stack[-1][1] == "start" and log[1] == "start":
                        res[int(stack[-1][0])] += int(stack[-1][2]) - time
                        time = int(stack[-1][2])
                        stack.append(log)
                  else:
                        res[int(stack[-1][0])] += int(log[2]) - time
                        time = int(log[2])
                        stack.pop()

            return res