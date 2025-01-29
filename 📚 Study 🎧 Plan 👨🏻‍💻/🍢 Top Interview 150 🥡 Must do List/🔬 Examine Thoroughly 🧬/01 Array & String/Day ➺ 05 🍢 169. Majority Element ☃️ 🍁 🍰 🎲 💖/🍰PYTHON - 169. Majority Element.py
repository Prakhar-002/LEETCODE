#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 169

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def majorityElement(self, num: list[int]) -> int:
            # Initialize `major` as the first element, with a count of 1
            major = num[0]
            count = 1

            # Iterate through the array starting from the second element
            for i in range(1, len(num)):
                  if count == 0:
                        # If count is 0, reset `major` to the current element
                        major = num[i]
                        count += 1
                  elif major == num[i]:
                        # Increment count if the current element matches `major`
                        count += 1
                  else:
                        # Decrement count if the current element does not match `major`
                        count -= 1

            # Return the majority element (guaranteed by problem constraints)
            return major

#!---------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def majorityElement(self, nums: List[int]) -> int:
            return sorted(nums)[len(nums) // 2]