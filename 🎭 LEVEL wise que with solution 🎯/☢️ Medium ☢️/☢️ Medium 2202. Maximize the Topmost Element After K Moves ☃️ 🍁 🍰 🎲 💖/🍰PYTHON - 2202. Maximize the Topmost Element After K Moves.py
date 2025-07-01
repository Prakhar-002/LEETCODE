#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2202

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def maximumTop(self, nums: List[int], k: int) -> int:
            n = len(nums)

            # Case 1: Only one element and k is odd → cannot leave non-empty stack
            if n == 1 and k % 2 == 1:
                  return -1

            # Case 2: No operation allowed → return current top
            if k == 0:
                  return nums[0]

            # Case 3: k == 1 → remove top, return second element if exists
            if k == 1:
                  return nums[1] if n > 1 else -1

            # General case: take max from first (k - 1) elements
            maxVal = max(nums[:min(n, k - 1)])

            # If k < n, we can choose to push nums[k] as final top
            if k < n:
                  maxVal = max(maxVal, nums[k])

            return maxVal
