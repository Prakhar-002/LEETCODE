#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1423

#? ⌚ Time complexity ➺ O(k) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxScore(self, cardPoints: List[int], k: int) -> int:
            n = len(cardPoints)  # Total number of cards

            # Step 1: Compute the sum of the first k elements (taking from the left)
            leftSum = sum(cardPoints[:k])

            maxPoints = leftSum  # Initial max sum when taking only from the left
            rightSum = 0  # Sum of elements taken from the right

            # Step 2: Move the window by removing cards from the left and adding from the right
            for i in range(k):
                  leftSum -= cardPoints[k - 1 - i]  # Remove leftmost selected card
                  rightSum += cardPoints[n - 1 - i]  # Add rightmost card to the sum
                  maxPoints = max(maxPoints, leftSum + rightSum)  # Update max score

            return maxPoints  # Return the maximum score possible
