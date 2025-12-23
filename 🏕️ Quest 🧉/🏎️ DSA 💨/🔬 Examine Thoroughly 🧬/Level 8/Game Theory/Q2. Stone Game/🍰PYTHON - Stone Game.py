#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q2

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def stoneGame(self, piles: List[int]) -> bool:
            # In the Stone Game (LeetCode 877):
            # - There are an even number of piles.
            # - The total number of stones is odd (so no ties).
            # - Alice starts first, and both players play optimally.

            # Key observation:
            # - Because the number of piles is even, Alice can always choose
            #   to take all the piles at even indices OR all the piles at odd indices.
            # - Since the total sum is odd, one of these two sets (even or odd) must have more stones.
            # - Alice can always force the game so that she gets the set with more stones.

            # Therefore, Alice can always win, so we simply return True.
            return True
