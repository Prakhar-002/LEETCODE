#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2410

#? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(players)

#? 🧺 Space complexity ➺ O(1)  -> m = len(trainers)

class Solution:
      def matchPlayersAndTrainers(self, players: List[int], trainers: List[int]) -> int:
            # Sort both players and trainers by their strength/capacity
            players.sort()
            trainers.sort()

            numPlayers = len(players)
            numTrainers = len(trainers)

            playerIdx = 0       # Pointer for players list
            trainerIdx = 0      # Pointer for trainers list
            matches = 0           # Count of successful matches

            # Loop while both player and trainer lists are not exhausted
            while playerIdx < numPlayers and trainerIdx < numTrainers:

                  # Skip trainers who are too weak to train the current player
                  while trainerIdx < numTrainers and players[playerIdx] > trainers[trainerIdx]:
                        trainerIdx += 1

                  # If a valid trainer is found
                  if trainerIdx < numTrainers:
                        matches += 1               # Match player with trainer
                        trainerIdx += 1          # Move to the next trainer

                  playerIdx += 1                 # Move to the next player

            return matches
