#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1769

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(boxes)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minOperations(self, boxes: str) -> List[int]:
            n = len(boxes)  # Length of the string representing the boxes
            answer = [0] * n  # Initialize the answer array with zeros

            # First pass: Calculate the moves needed to gather all balls to the left side
            bolls, moves = 0, 0  # Initialize the number of balls and moves to zero
            for i in range(n):
                  # The answer for the current box is the total moves so far
                  answer[i] = bolls + moves
                  # Update moves and bolls for the next iteration
                  moves += bolls
                  bolls += int(boxes[i])  # Convert '1' to 1 if a ball exists, else add 0

            # Second pass: Calculate the moves needed to gather all balls to the right side
            bolls, moves = 0, 0  # Reset the number of balls and moves to zero
            for i in range(n - 1, -1, -1):
                  # Add the moves from the right side to the current box
                  answer[i] += bolls + moves
                  # Update moves and bolls for the next iteration
                  moves += bolls
                  bolls += int(boxes[i])  # Convert '1' to 1 if a ball exists, else add 0

            return answer  # Return the final answer array
