#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2294

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def partitionArray(self, nums: List[int], k: int) -> int:
            # Sort the array to process elements in non-decreasing order
            nums.sort()

            # Pointer to traverse the array
            i = 0

            # Counter for the number of subsequences
            subsequence = 0

            # Iterate through the array to form subsequences
            while i < len(nums):
                  # Start a new subsequence from the current index
                  index = i

                  # Extend the subsequence as long as the difference between
                  # the current element and the first element in the subsequence is <= k
                  while i < len(nums) and nums[index] + k >= nums[i]:
                        i += 1

                  # Increment the count of subsequences
                  subsequence += 1

            return subsequence