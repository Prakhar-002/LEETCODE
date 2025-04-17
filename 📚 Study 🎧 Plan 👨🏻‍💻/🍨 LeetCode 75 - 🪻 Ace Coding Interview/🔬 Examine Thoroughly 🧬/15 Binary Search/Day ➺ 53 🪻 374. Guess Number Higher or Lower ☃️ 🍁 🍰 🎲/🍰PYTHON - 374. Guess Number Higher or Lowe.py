#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 374

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

class Solution():
      def guessNumber(self, n: int) -> int:
            left = 1                   # Initialize the left boundary to 1 (since guessing starts from 1)
            right = n                  # Set the right boundary to n

            while left <= right:       # Continue while the search space is valid
                  mid = left + (right - left) // 2  # Calculate the middle to avoid overflow

                  result = guess(mid)  # Call the guess API with mid value

                  if result == 0:
                        return mid     # If guess is correct, return mid
                  elif result < 0:
                        right = mid - 1  # Target number is smaller, move left
                  else:
                        left = mid + 1   # Target number is bigger, move right

            return -1  # Should not reach here if guess always returns correct result
