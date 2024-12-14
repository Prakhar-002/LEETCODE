#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 724

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def pivotIndex(self, nums: List[int]) -> int:
            # Calculate the total sum of the array
            totalSum = sum(nums)

            # Initialize the running sum for the left side
            leftSum = 0

            # Iterate through the array to find the pivot index
            for i in range(len(nums)):
                  # Right sum is totalSum minus leftSum minus the current element
                  rightSum = totalSum - leftSum - nums[i]

                  # Check if left sum equals right sum
                  if leftSum == rightSum:
                        return i

                  # Update left sum to include the current element
                  leftSum += nums[i]

            # If no pivot index is found, return -1
            return -1


#!-------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def pivotIndex(self, nums: List[int]) -> int:
            n = len(nums)

            # Arrays to store cumulative sums from the left and the right
            leftSum = [0] * n
            rightSum = [0] * n

            # Calculate the cumulative sum from the left
            for i in range(1, n):
                  leftSum[i] = leftSum[i - 1] + nums[i - 1]

            # Calculate the cumulative sum from the right
            for i in range(n - 2, -1, -1):
                  rightSum[i] = rightSum[i + 1] + nums[i + 1]

            # Check for the pivot index where leftSum equals rightSum
            for i in range(n):
                  if leftSum[i] == rightSum[i]:
                        return i  # Return the pivot index if found

            # If no pivot index is found, return -1
            return -1

