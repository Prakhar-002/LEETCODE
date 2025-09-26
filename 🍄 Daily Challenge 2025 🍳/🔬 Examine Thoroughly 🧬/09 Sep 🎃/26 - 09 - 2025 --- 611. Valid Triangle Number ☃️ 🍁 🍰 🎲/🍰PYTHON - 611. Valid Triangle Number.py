#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 611

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def triangleNumber(self, nums: list[int]) -> int:
            count = 0

            # Sort so we can use the triangle inequality efficiently
            nums.sort()
            n = len(nums)

            for i in range(n - 2):
                  if nums[i] == 0: continue  # Skip impossible triangles
                  k = i + 2

                  for j in range(i + 1, n - 1):

                        # Move k as far as possible where nums[i] + nums[j] > nums[k]
                        while k < n and nums[i] + nums[j] > nums[k]:
                              k += 1

                        # All nums[j+1]..nums[k-1] form triangles with i & j
                        count += k - j - 1

            return count
