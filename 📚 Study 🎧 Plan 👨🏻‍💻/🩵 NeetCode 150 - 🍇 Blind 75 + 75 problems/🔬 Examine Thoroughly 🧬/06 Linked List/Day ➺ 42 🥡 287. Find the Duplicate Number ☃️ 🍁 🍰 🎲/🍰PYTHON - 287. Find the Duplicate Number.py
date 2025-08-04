#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 287

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findDuplicate(self, nums: List[int]) -> int:
            # `slow = 0` and `fast = 0` are two pointers 
            # initialized at the start of the list `nums`.
            slow, fast = 0, 0

            # loop continues until the slow and fast pointers meet
            while True:
                  # `slow` pointer moves one step at a time
                  slow = nums[slow]
                  # `fast` pointer moves two steps at a time
                  fast = nums[nums[fast]]
                  if slow == fast:
                        # loop breaks When `slow == fast` detected
                        break

            # `newSlow = 0` is initialized 
            # This pointer will be used to find the entrance to the cycle
            newSlow = 0

            #  continues until both pointers meet at the entrance of the cycle
            while newSlow != slow:
                  #  `slow` move one step at a time within the list
                  slow = nums[slow]
                  # `newSlow` move one step at a time within the list
                  newSlow = nums[newSlow]

            # the entrance to the cycle is  the duplicate number in the list
            return slow