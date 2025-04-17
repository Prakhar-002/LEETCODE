#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2176

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countPairs(self, nums: List[int], k: int) -> int:
            pairs = 0  # Initialize count of valid pairs

            # Iterate over all pairs (i, j) such that i < j
            for i in range(len(nums)):
                  for j in range(i + 1, len(nums)):
                        # Check both conditions:
                        # 1. Values at index i and j are equal
                        # 2. Product of indices is divisible by k
                        if nums[i] == nums[j] and (i * j) % k == 0:
                              pairs += 1  # Increment count if both conditions met

            return pairs  # Return the total count of valid pairs
