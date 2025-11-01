#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 45

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def jump(self, nums: List[int]) -> int:
            jump = 0      # Number of jumps taken
            l = r = 0     # Current range: [l, r]

            # Continue until the end of the array is within reach
            while r < len(nums) - 1:
                  farthest = 0   # Farthest index reachable in current range

                  # Compute the farthest reach from all positions in 'this jump's range'
                  for i in range(l, r + 1):
                        farthest = max(farthest, i + nums[i])

                  # Move the range for the next jump
                  l = r + 1
                  r = farthest    # Next jump covers from l to farthest
                  jump += 1       # Increase jump count

            return jump           # Return total jumps taken to reach the end
