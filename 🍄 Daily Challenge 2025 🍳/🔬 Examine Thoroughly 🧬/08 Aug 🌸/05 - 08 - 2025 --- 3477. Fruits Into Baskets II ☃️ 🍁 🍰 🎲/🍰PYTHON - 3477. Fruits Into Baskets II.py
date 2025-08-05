#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3477

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(fruits)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
            # Initialize a counter to track fruits that couldn't be placed in any basket
            unplacedFruits = 0

            # Loop over each fruit in the fruits list
            for fruit in fruits:
                  # Assume this fruit is unplaced until we find a suitable basket
                  unplug = 1

                  # Loop through each basket to check if this fruit can be placed
                  for i in range(len(baskets)):
                        # If the fruit can fit into the basket
                        if fruit <= baskets[i]:
                              # Mark the basket as used (set capacity to 0)
                              baskets[i] = 0
                              # Set flag to 0 since the fruit is placed
                              unplug = 0
                              # No need to check further baskets
                              break

                  # Add the fruit to unplaced count if it couldn't be placed
                  unplacedFruits += unplug

            # Return total number of unplaced fruits
            return unplacedFruits
