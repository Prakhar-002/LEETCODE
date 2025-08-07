#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 621

#? ⌚ Time complexity ➺ O(m) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def leastInterval(self, tasks: List[str], n: int) -> int:
            # Create a frequency array for 26 uppercase letters
            count = [0] * 26

            # Count frequency of each task
            for task in tasks:
                  count[ord(task) - ord('A')] += 1

            # Find the maximum frequency
            maxf = max(count)

            # Count how many tasks have this maximum frequency
            maxCount = 0
            for i in count:
                  maxCount += 1 if i == maxf else 0

            # Calculate minimum intervals using the formula
            # (maxf - 1) full rows, each with (n + 1) slots, plus maxCount for last row
            time = (maxf - 1) * (n + 1) + maxCount

            # Return the max between calculated time and total tasks
            return max(len(tasks), time)
