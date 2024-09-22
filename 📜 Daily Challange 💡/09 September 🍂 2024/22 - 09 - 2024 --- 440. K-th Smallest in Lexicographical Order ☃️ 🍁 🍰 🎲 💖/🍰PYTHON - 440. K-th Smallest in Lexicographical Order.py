#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 440

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) 

#  Space complexity -> O(1)

class Solution:
      def findKthNumber(self, n: int, k: int) -> int:
            # to count current sequence of numbers in lexicographical order
            count = 1

            # used to generate the next number in lexicographical order
            cur = 1

            # until the count is less than `n`
            # ensures that exactly `n` numbers are added to the list
            while count < n:
                  # checking the lexicographical order current elem's number
                  if k == count:
                        # return current lexicographical element
                        return cur

                  # inc count per next lexicographical number
                  count += 1

                  # `cur * 10` is less than or equal to `n`
                  if cur * 10 <= n:
                        # `cur` is multiplied by 10
                        # moves to the next level of depth in the lexicographical tree 
                        # (e.g., from 1 to 10, from 2 to 20, etc.)
                        cur *= 10
                  else:
                        # `cur * 10` is greater than `n`, the code enters another while loop
                        while cur == n or cur % 10 == 9:
                              # as long as `cur` equals `n` or the last digit of `cur` is 9. 
                              # In each iteration of this loop, `cur` is integer-divided by 10
                              # moves back to check previous numbers for possible lexicographical increments
                              cur //= 10
                        # `cur` is incremented by 1. This is akin to moving to the next sibling in a tree structure 
                        # (e.g., from 19 to 20).
                        cur += 1

            # Return the list
            return cur