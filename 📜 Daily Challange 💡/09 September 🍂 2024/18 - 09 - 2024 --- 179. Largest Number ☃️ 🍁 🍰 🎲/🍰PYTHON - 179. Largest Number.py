#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 179

#? ⌚ Time complexity ➺ O(NLogN) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from functools import cmp_to_key

class Solution:
      def largestNumber(self, nums: List[int]) -> str:
            #  iterates over each integer in the list `nums`
            for i, num in enumerate(nums):
                  # converts it to a string
                  nums[i] = str(num)

            # compare two strings (`n1` and `n2`)
            def compare(n1, n2):
                  # concatenated results of `n1` + `n2` and `n2` + `n1`
                  if n1 + n2 > n2 + n1:
                        # If `n1 + n2` is greater, it returns `-1`
                        return -1
                  else:
                        # otherwise, it returns `1`
                        return 1

            # `nums` list is sorted using the `compare` function as a key
            # `sorted` function sorts the `nums` list in such a way that 
            # when concatenated, it forms the largest possible number
            stringNum = sorted(nums, key=cmp_to_key(compare))

            # Joins the sorted list of strings into a single string
            # concatenated string to an integer to remove any leading zero
            #* `['0', '0']` should become `0`, not `00`
            return str(int("".join(stringNum))) # the integer back to a string