#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3069

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def resultArray(self, nums: list[int]) -> list[int]:
            # Step 1: Initialize arr1 with the first element and arr2 with the second element
            arr1 = [nums[0]]
            arr2 = [nums[1]]

            # Step 2: Distribute the remaining elements based on the last elements of arr1 and arr2
            for i in range(2, len(nums)):
                  if arr1[-1] > arr2[-1]:
                        arr1.append(nums[i])
                  else:
                        arr2.append(nums[i])

            # Step 3: Return the concatenated result of arr1 and arr2
            return arr1 + arr2