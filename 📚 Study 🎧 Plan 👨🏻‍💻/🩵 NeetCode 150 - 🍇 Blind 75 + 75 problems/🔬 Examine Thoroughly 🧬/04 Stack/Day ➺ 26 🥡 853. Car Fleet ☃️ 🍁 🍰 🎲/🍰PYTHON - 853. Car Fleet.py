#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 853

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
            # Combine position and speed of each car into a tuple
            pairs = [(p, s) for p, s in zip(position, speed)]

            # Sort cars by position in descending order (from closest to target to farthest)
            pairs.sort(reverse=True)

            stack = []  # Stack to keep track of the time each fleet takes to reach the target

            for p, s in pairs:
                  # Time = distance / speed
                  time = (target - p) / s
                  stack.append(time)

                  # If current car reaches earlier or at the same time as the car ahead,
                  # it merges into the same fleet (so remove current from stack)
                  if len(stack) > 1 and stack[-1] <= stack[-2]:
                        stack.pop()

            # The number of fleets is the number of unique times in stack
            return len(stack)
