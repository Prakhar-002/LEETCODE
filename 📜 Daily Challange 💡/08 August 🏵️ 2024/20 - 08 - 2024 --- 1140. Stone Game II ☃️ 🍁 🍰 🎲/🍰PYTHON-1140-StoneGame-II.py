#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1640

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(piles)

#? 🧺 Space complexity ➺ O(n ^ n)

class Solution(object):
      def stoneGameII(self, piles):
            dp = {}  # Dictionary to store the results of subproblems for memoization

            def getStone(alice, idx, M):
                  # Base case: if we've reached the end of the piles, no more stones can be taken
                  if idx == len(piles):
                        return 0

                  # Check if the result for this state is already computed
                  if (alice, idx, M) in dp:
                        return dp[(alice, idx, M)]

                  # Initialize the result based on who's turn it is
                  aliceStone = 0 if alice else float("inf")

                  totalStone = 0  # Total number of stones taken in this turn

                  # Consider taking x piles where x ranges from 1 to 2 * M
                  for x in range(1, 2 * M + 1):
                        # If taking x piles exceeds available piles, stop
                        if idx + x > len(piles): 
                              break

                        # Add stones from the current pile to totalStone
                        totalStone += piles[idx + x - 1]  

                        # Recursively calculate the score for the next state
                        if alice:
                              aliceStone = max(aliceStone, totalStone + getStone(not alice, idx + x, max(M, x)))
                        else:
                              aliceStone = min(aliceStone, getStone(not alice, idx + x, max(M, x)))

                  # Store the result in the memoization dictionary
                  dp[(alice, idx, M)] = aliceStone

                  return aliceStone

            # Start the game with Alice's turn, starting at index 0, with M initially set to 1
            return getStone(True, 0, 1)
