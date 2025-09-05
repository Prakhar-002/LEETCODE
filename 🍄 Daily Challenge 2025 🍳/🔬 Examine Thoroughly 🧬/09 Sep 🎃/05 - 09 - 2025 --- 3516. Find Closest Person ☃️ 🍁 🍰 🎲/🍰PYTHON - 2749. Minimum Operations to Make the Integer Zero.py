#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2749

#? ⌚ Time complexity ➺ O(k)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def makeTheIntegerZero(self, num1: int, num2: int) -> int:
            k = 1
            # ------ Try increasing k stepwise; each k is an attempt
            while True:
                  # ------ Calculate what remains after subtracting k * num2
                  x = num1 - num2 * k

                  # ------ If x is less than k, impossible to represent x as sum of k distinct powers of two
                  if x < k:
                        return -1

                  # ------ If k is at least the Hamming weight (number of 1s in binary representation of x), it's possible
                  # x.bit_count() returns number of bits set to 1, i.e., minimum powers of two needed for x
                  if k >= x.bit_count():
                        return k

                  # ------ Next trial with more powers of two
                  k += 1
