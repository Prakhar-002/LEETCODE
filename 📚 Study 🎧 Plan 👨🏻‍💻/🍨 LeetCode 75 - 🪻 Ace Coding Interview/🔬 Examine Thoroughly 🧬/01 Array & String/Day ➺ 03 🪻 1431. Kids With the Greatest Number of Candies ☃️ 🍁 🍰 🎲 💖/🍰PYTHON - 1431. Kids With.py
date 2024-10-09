#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1431

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(candies)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
            # list `result` where the outcome for each kid
            result = []

            # calculates the maximum number of candies any single kid currently has
            maxCandy = max(candies)

            # iterates over each count in the `candies` list
            for candy in candies:
                  # if a child has highest candy in hand after taking extra candies
                  if candy + extraCandies >= maxCandy:
                        # set True for that childe
                        result.append(True)
                  else:
                        # else set False for that child
                        result.append(False)

            # return res indicating whether each kid can or cannot have the most candies.
            return result

#!----------------------------------------------------------------------------------------------

#* One liner 

class Solution:
      def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
            return [candy + extraCandies >= max(candies) for candy in candies]

