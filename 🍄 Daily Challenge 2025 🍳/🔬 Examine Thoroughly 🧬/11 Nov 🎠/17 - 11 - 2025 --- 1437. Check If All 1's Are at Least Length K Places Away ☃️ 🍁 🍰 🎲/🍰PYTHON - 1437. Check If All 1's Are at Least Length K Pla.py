#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1437

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def kLengthApart(self, nums: List[int], k: int) -> bool:
            # Initialize last seen index of '1' as -1 (not found yet)
            l = -1

            # Iterate through the list with index r
            for r in range(len(nums)):
                  # When a '1' is found at index r
                  if nums[r] == 1:
                        # Check if this is not the first '1' found
                        # and if the gap between current and last '1' is less than k
                        if l != -1 and r - l - 1 < k:
                              # Return False if distance constraint is violated
                              return False
                        # Update last seen index of '1'
                        l = r

            # If no violations found throughout, return True
            return True
