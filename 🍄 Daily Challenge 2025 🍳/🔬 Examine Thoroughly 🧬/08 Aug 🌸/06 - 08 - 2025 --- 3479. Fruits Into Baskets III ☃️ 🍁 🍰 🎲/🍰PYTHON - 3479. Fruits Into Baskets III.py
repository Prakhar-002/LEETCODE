#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3479

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket)

#? 🧺 Space complexity ➺ O(n)

class Solution: 
      def numOfUnplacedFruits(self, fruits: list[int], baskets: list[int]) -> int:
            n = len(baskets)

            # Find the smallest power of 2 greater than or equal to n for segment tree size
            N = 1
            while N <= n:
                  N <<= 1  # same as N *= 2

            # Initialize the segment tree with size 2 * N
            segTree = [0] * (2 * N)

            # Copy basket capacities to the leaf nodes of the segment tree
            for i in range(n):
                  segTree[N + i] = baskets[i]

            # Build the segment tree by computing max of children
            for i in range(N - 1, 0, -1):
                  segTree[i] = max(segTree[2 * i], segTree[2 * i + 1])

            count = 0  # Count of unplaced fruits

            for x in fruits:
                  index = 1  # Start from root

                  # If no basket can hold the fruit, increase count
                  if segTree[index] < x:
                        count += 1
                        continue

                  # Traverse the segment tree to find the leftmost suitable basket
                  while index < N:
                        if segTree[2 * index] >= x:
                              index = 2 * index  # Move to left child
                        else:
                              index = 2 * index + 1  # Move to right child

                  # Mark the basket as used
                  segTree[index] = -1

                  # Update segment tree upwards
                  while index > 1:
                        index >>= 1  # Move to parent
                        segTree[index] = max(segTree[2 * index], segTree[2 * index + 1])

            return count  # Return total unplaced fruits
