#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2211

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countCollisions(self, directions: str) -> int:
            # Remove leading "L"s (cars moving left that never collide)
            # and trailing "R"s (cars moving right that never collide)
            dirs = directions.lstrip("L").rstrip("R")

            # All remaining cars will collide:
            # - "R" cars will hit stopped cars or turn left
            # - "L" cars will hit stopped cars or turn right  
            # - "S" cars are already stopped from previous collisions
            return len(dirs) - dirs.count("S")
