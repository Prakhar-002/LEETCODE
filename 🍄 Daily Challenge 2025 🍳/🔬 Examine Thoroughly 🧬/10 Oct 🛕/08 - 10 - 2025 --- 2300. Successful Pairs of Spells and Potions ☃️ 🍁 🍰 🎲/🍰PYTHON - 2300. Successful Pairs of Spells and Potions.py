#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2300

#? ⌚ Time complexity ➺ O(m log m + n log m) 👉🏻  n = len(spells)

#? 🧺 Space complexity ➺ O(1)  ->  m = n = len(potions)

class Solution: 
      def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
            # Get the number of spells and potions
            n = len(spells)
            pot_len = len(potions) 

            # Initialize the result list to store the number of successful pairs for each spell
            pairs = [0] * n

            # Sort the potions list to enable binary search
            potions.sort()

            # Iterate over each spell
            for i in range(n):
                  spell = spells[i]         # Get the current spell

                  l = 0                     # Initialize left pointer for binary search
                  r = pot_len - 1           # Initialize right pointer for binary search

                  # Binary search to find the first potion that makes the product >= success
                  while l <= r:
                        mid = l + (r - l) // 2      # Calculate mid index
                        product = spell * potions[mid]  # Calculate product of spell and potion

                        if product >= success:
                              # Move left to find smaller index with valid product
                              r = mid - 1
                        else:
                              # Move right to find larger values
                              l = mid + 1

                  # All potions from index l to end will form successful pairs
                  pairs[i] = pot_len - l

            # Return the list of successful pairs for each spell
            return pairs
