#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2200

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
            res = []        # Stores the result indices that are within distance k of any key
            r = 0           # `r` keeps track of the next index to check (to avoid duplicates)
            n = len(nums)   # Length of the input list

            # Traverse the array to find all key positions
            for j in range(n):
                  if nums[j] == key:
                        # Calculate the valid range: from max(r, j - k) to min(n - 1, j + k)
                        l = max(r, j - k)
                        r = min(n - 1, j + k) + 1  # Update r to avoid rechecking

                        # Add all valid indices in the range [l, r)
                        for i in range(l, r):
                              res.append(i)

            return res
