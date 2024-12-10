#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1679

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxOperations(self, nums: List[int], k: int) -> int:
            # Sort the input list to apply the two-pointer technique
            nums.sort()

            # Initialize two pointers: one at the beginning (left) and one at the end (right) of the sorted list
            l = 0
            r = len(nums) - 1

            # Initialize a variable to count the number of valid pairs
            pairs = 0

            # Loop until the two pointers cross each other
            while l < r:
                  # Check if the sum of the numbers at the two pointers equals the target k
                  if nums[l] + nums[r] == k:
                        pairs += 1  # A valid pair is found, so increment the pair count
                        l += 1  # Move the left pointer to the right to check for new pairs
                        r -= 1  # Move the right pointer to the left to check for new pairs

                  # If the sum is greater than k, move the right pointer to the left to decrease the sum
                  elif nums[l] + nums[r] > k:
                        r -= 1

                  # If the sum is less than k, move the left pointer to the right to increase the sum
                  else:
                        l += 1

            # Return the total number of pairs found
            return pairs



#* 2nd Solution

#!-----------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def maxOperations(self, nums: List[int], k: int) -> int:
            # Initialize a dictionary to store the frequency of numbers
            count = defaultdict(int)
            pairs = 0

            # Iterate through each number in the list
            for num in nums:
                  # Calculate the complement that would sum up to k
                  complement = k - num

                  # If the complement exists in the dictionary, form a pair
                  if count[complement] > 0:
                        pairs += 1
                        count[complement] -= 1  # Decrease the count of the complement
                  else:
                        # If no complement found, add the current number to the dictionary
                        count[num] += 1

            # Return the total number of pairs found
            return pairs
