#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 264

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def nthUglyNumber(self, n: int) -> int:
            # initialized with `1` cause `1` is considered as the first ugly
            ugliNum = [1]

            # pointers keep track of where we are in the list for the multiples of `2`, `3`, and `5` respectively
            twoPointer, threePointer, fivePointer = 0, 0, 0

            # loop runs from `1` to `n-1`, meant to generate the next `n-1` ugly numbers.
            for _ in range(1, n):
                  # minimum value among
                  nextUgli = min(
                        # cur smallest ugly number multiplied by `2`
                        ugliNum[twoPointer] * 2,
                        # # cur smallest ugly number multiplied by `3`
                        ugliNum[threePointer] * 3,
                        # # cur smallest ugly number multiplied by `5`
                        ugliNum[fivePointer] * 5
                  )

                  ugliNum.append(nextUgli)

                  #  If `nextUgli` was derived from multiplying by `2`, the `twoPointer` is incremented
                  if nextUgli == ugliNum[twoPointer ] * 2:
                        twoPointer += 1

                  #  If `nextUgli` was derived from multiplying by `3`, the `threePointer` is incremented
                  if nextUgli == ugliNum[threePointer ] * 3:
                        threePointer += 1

                  #  If `nextUgli` was derived from multiplying by `5`, the `fivePointer` is incremented
                  if nextUgli == ugliNum[fivePointer ] * 5:
                        fivePointer += 1

            # returns the `n`th ugly number, which is at the `n-1` index
            return ugliNum[n - 1]