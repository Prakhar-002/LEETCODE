#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1900

#? ⌚ Time complexity ➺ O(n ^ 4) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(log n) 

class Solution:
      def earliestAndLatest(self, n: int, firstPlayer: int, secondPlayer: int) -> List[int]:
            from math import inf

            # Recursive function to compute the earliest and latest round
            # where player `left` and player `right` can meet
            def computeRound(left: int, right: int, totalPlayers: int) -> Tuple[int, int]:
                  # Base case: both players are the same
                  if left == right:
                        return (1, 1)

                  # Ensure left < right to reduce duplicate states
                  if left > right:
                        return computeRound(right, left, totalPlayers)

                  minRound, maxRound = inf, -inf

                  # Try all valid positions of the first and second player in the current round
                  for i in range(1, left + 1):  # i = number of players before `left`
                        for j in range(left - i + 1, right - i + 1):  # j = players between `left` and `right`
                              matchPosition = i + j  # relative position in the round
                              
                              # Check if players `left` and `right` can meet in this configuration
                              if (left + right - totalPlayers // 2) <= matchPosition <= (totalPlayers + 1) // 2:
                                    early, late = computeRound(i, j, (totalPlayers + 1) // 2)
                                    minRound = min(minRound, early + 1)
                                    maxRound = max(maxRound, late + 1)

                  return (minRound, maxRound)

            # Adjust secondPlayer to be its symmetric position from the right
            # This simplifies handling since all positions can be mirrored
            return list(computeRound(firstPlayer, n - secondPlayer + 1, n))
