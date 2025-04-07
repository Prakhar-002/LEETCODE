#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 416

#? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

#? 🧺 Space complexity ➺ O(1)    👉🏻   s = sum(nums) // 2

class Solution: 
      def canPartition(self, nums: list[int]) -> bool:
            # Step 1: Find the total sum of the array
            total = sum(nums)

            # If the total is odd, it cannot be split evenly into two subsets
            if total % 2 != 0:
                  return False

            # Target is half of the total sum
            target = total // 2

            # Initialize a bitmask where only 0th bit is set (sum 0 is possible)
            dp = 1 << 0

            # Iterate over each number
            for num in nums:
                  # Update bitmask: shift left by num and OR with original
                  # This marks all new sums that can be achieved including this num
                  dp |= dp << num

            # Check if the target sum bit is set in the final mask
            return (dp & (1 << target)) != 0


#!------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

#? 🧺 Space complexity ➺ O(s)    👉🏻   s = sum(nums) // 2

class Solution:
      def canPartition(self, nums: List[int]) -> bool:
            totalSum = sum(nums)  # Calculate total sum of all numbers

            if totalSum % 2:  # If total sum is odd, can't split into two equal subsets
                  return False 

            possible_sums = set([0])  # Initialize set with sum 0

            target = totalSum // 2  # Target each subset should sum to

            for num in nums:
                  next_sums = set()  # Temporary set to store new sums

                  for s in possible_sums:
                        if s + num == target:  # If we can reach target, return True
                              return True

                        next_sums.add(s + num)  # Add new possible sum
                        next_sums.add(s)        # Retain current sum

                  possible_sums = next_sums  # Update possible sums for next iteration

            return False  # If no subset found with target sum
