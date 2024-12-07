#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 283

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def moveZeroes(self, nums: List[int]) -> None:
            i = j = 0
            n = len(nums)

            # Iterate through the array using two pointers
            while j < n:

                  # Skip over zero elements
                  while j < n and nums[j] == 0:
                        j += 1

                  # If no non-zero element is found, exit the loop
                  if j == n:
                        break

                  # Move the non-zero element to position i
                  num = nums[j]
                  nums[j] = 0
                  nums[i] = num

                  # Update pointers
                  i += 1
                  j += 1
