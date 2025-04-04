#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2873

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maximumTripletValue(self, nums: List[int]) -> int:
            n = len(nums)
            maxTripletValue = 0   # Stores the maximum triplet value found so far
            maxSeen = 0           # Tracks the maximum value encountered
            maxDifference = 0     # Stores the maximum difference (imax - nums[k])

            for k in range(n):
                  # Compute the maximum possible value of (nums[i] - nums[j]) * nums[k]
                  maxTripletValue = max(maxTripletValue, maxDifference * nums[k])

                  # Update maxDifference to keep track of the highest (imax - nums[k]) encountered
                  maxDifference = max(maxDifference, maxSeen - nums[k])

                  # Update maxSeen to keep track of the highest value seen so far
                  maxSeen = max(maxSeen, nums[k])

            return maxTripletValue  # Return the maximum triplet value found


#!---------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

#* Greedy + Prefix Suffix Array  

class Solution:
      def maximumTripletValue(self, nums: List[int]) -> int:
            n = len(nums)  # Get the length of the list

            leftMax = [0] * n  # Array to store the maximum value to the left of each index
            rightMax = [0] * n  # Array to store the maximum value to the right of each index

            # Compute leftMax and rightMax arrays
            for i in range(1, n):
                  leftMax[i] = max(leftMax[i - 1], nums[i - 1])  # Maximum value from index 0 to i-1
                  rightMax[n - 1 - i] = max(rightMax[n - i], nums[n - i])  # Maximum value from i+1 to end

            maxTripletValue = 0  # Variable to store the maximum triplet value

            # Iterate over each possible middle element of the triplet
            for j in range(1, n - 1):
                  maxTripletValue = max(maxTripletValue, (leftMax[j] - nums[j]) * rightMax[j])

            return maxTripletValue  # Return the maximum triplet value

