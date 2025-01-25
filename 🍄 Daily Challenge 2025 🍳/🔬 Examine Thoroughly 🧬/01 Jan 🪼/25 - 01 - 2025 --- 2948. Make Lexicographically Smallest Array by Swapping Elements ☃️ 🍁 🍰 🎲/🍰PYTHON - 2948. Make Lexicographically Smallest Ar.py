#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2948

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import deque

class Solution:
      def lexicographicallySmallestArray(self, nums: List[int], limit: int) -> List[int]:
            # List of queues to group elements
            groups = [] 

            # Dictionary to map each number to its group index
            num_to_group = {} 

            # Iterate through the sorted list of numbers
            for n in sorted(nums):
                  # If no groups exist or the difference between the current
                  # number and the last number in the last group exceeds the limit,
                  # create a new group
                  if not groups or abs(n - groups[-1][-1]) > limit:
                        groups.append(deque()) 

                  # Add the number to the current group
                  groups[-1].append(n) 
                  
                  # Store the group index for the number
                  num_to_group[n] = len(groups) - 1 

            # Initialize the result array
            lexArr = [] 

            # Iterate through the original list of numbers
            for n in nums:
                  # Get the group index for the number
                  idx = num_to_group[n]

                  # Append the smallest available number from the group to the result
                  lexArr.append(groups[idx].popleft()) 

            # Return the lexicographically smallest array
            return lexArr
