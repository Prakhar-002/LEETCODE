#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q3

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

class Solution:
      def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
            res = [0] * n  # List to hold exclusive execution times for each function
            stack = []     # Stack to track the function call hierarchy
            prev_time = 0  # Previous timestamp for calculating elapsed time

            for log in logs:
                  function_id, typ, timestamp = log.split(":")
                  function_id = int(function_id)
                  timestamp = int(timestamp)

                  if typ == "start":
                        # If a function is currently running, add elapsed time until now to it
                        if stack:
                              res[stack[-1]] += timestamp - prev_time
                        # Push the new function onto stack
                        stack.append(function_id)
                        # Update previous time to current timestamp
                        prev_time = timestamp
                  else:
                        # Function ends: add inclusive running time (+1)
                        res[stack.pop()] += timestamp - prev_time + 1
                        # Update previous time to the next timestamp after current
                        prev_time = timestamp + 1

            return res
