#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 217

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def containsDuplicate(self, nums: List[int]) -> bool:
            # Initialize an empty set to store unique elements.
            seen = set()

            # Iterate through each number in the list.
            for num in nums:
                  # If the current number is already in the set, 
                  # it means we have found a duplicate.
                  if num in seen:
                        return True

                  # Add the current number to the set to mark it as seen.
                  seen.add(num)

            # If no duplicates are found, return False.
            return False 

#!------------------------------------------------------------------------ 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def hasDuplicate(self, nums: List[int]) -> bool:
            return len(set(nums)) < len(nums)