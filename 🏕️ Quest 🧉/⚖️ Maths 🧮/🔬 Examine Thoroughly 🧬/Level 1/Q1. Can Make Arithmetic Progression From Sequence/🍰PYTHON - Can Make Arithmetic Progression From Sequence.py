#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
            arr.sort()   # Sort the array to check consecutive differences

            diff = arr[1] - arr[0]   # Calculate initial difference

            # Check if all consecutive differences are equal to diff
            for i in range(2, len(arr)):
                  if arr[i] - arr[i - 1] != diff:
                        return False   # Found a pair that breaks arithmetic progression

            return True   # All differences match, it's an arithmetic progression
