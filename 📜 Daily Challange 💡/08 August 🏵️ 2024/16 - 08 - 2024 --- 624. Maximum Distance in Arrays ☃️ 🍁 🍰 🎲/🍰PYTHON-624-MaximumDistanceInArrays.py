#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 624

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arrays)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxDistance(self, arrays: List[List[int]]) -> int:
            # assigned the minimum and maximum values from the first array
            curMin, curMax = arrays[0][0], arrays[0][-1]

            # track of the maximum absolute difference found so far
            maxDifference = 0

            # loop from 2nd array
            for i in range(1, len(arrays)):
                  # extract the current array
                  arr = arrays[i]

                  # take the max of all possibility
                  maxDifference = max(
                        maxDifference, 
                        # diff btw the highest value of the cur arr - curMin
                        arr[-1] - curMin,
                        # diff btw the `curMax` and the lowest value of the cur arr
                        curMax - arr[0]
                  )

                  # update the cur min max
                  curMin = min(curMin, arr[0])  # `curMin` and the first element
                  curMax = max(curMax, arr[-1]) #  current `curMax` and the last element

            return maxDifference

