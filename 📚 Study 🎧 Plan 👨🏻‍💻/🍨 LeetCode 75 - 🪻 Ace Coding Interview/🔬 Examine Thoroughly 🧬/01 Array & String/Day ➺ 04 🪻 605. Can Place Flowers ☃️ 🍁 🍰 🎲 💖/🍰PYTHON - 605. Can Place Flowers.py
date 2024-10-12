#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 605

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
            # empty set to `0` if first slot has flower(1) else 1
            empty = 0 if flowerbed[0] else 1

            # iterates over each slot in the flowerbed 
            for flower in flowerbed:
                  # If the current slot is taken by a flower
                  if flower:
                        # adjusts the count of `n` by decreasing it
                        # dec by new flowers can be planted in the sequence 
                        # of empty slots according to the planting rule
                        n -= int((empty - 1) / 2) # if (empty = 7) => (n -= 3)
                        #  resets `empty` to `0` because the sequence of empty slots has ended
                        empty = 0

                  # if encountering an empty slot 
                  else:
                        # increments the `empty` variable by `1`
                        empty += 1

            # if we sill have empty slots we dec the n by placing flower there
            n -= empty // 2
            # return if n is 0 or -ve
            return n <= 0

#!----------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
            # adds `0` at the beginning and end of the flowerbed to handle edge cases more smoothly 
            flowerbed = [0] + flowerbed + [0]
            # `left` and `mid` are indices initialized to 0 and 1 respectively
            # help navigate through the flowerbed list
            left, mid = 0, 1

            # `newFlowers`: A counter to track how many new flowers can be planted
            newFlowers = 0

            #  iterates over the indices starting from 2 to the end of the new flowerbed
            for right in range(2, len(flowerbed)):
                  #  For each triplet of positions (`left`, `mid`, `right`), it checks if all three are `0`
                  # If true, it means a flower can be planted at index `mid`
                  if not flowerbed[left] and not flowerbed[mid] and not flowerbed[right]:
                        # The counter `newFlowers` is incremented
                        newFlowers += 1
                        # a flower is placed by setting `flowerbed[mid]` to `1`
                        flowerbed[mid] = 1

                  # After checking a triplet, `left` and `mid` are incremented by 1 
                  # to move to the next set of indices
                  left += 1
                  mid += 1

            # Returns `True` if you can plant `n` or more flowers; otherwise, `False`
            return newFlowers >= n