#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 27

#? ⌚ Time complexity -> O(n) 👉 length of arr

#? 🧺 Space complexity -> O(1) 

class Solution:
      def removeElement(self, nums: list[int], val: int) -> int:
            # Initialize a pointer `j` to track the position where the next non-`val` element should be placed
            j = 0

            # Iterate through the array
            for i in range(len(nums)):
                  # If the current element is not equal to `val`, keep it
                  if nums[i] != val:
                        nums[j] = nums[i]  # Assign the element to the `j`-th position
                        j += 1  # Increment `j`

            # Return the new length of the array, which is the value of `j`
            return j
