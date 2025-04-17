//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 374

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1) 

public class Solution extends GuessGame {

      // Main function to find the correct number
      public int guessNumber(int n) {

            int left = 0; // Initialize the left boundary of the search range
            int right = n; // Initialize the right boundary of the search range

            // Perform binary search until left and right converge
            while (left < right) {

                  // Prevents overflow: mid = (left + right) / 2
                  int mid = left + (right - left) / 2;

                  // Call guess API to check if mid is correct, too high, or too low
                  if (guess(mid) == -1) {
                        // Target number is lower than mid, adjust right boundary
                        right = mid - 1;
                  } else if (guess(mid) == 1) {
                        // Target number is higher than mid, adjust left boundary
                        left = mid + 1;
                  } else {
                        // Correct guess
                        return mid;
                  }
            }

            // When loop ends, left == right, which is the correct number
            return left;
      }
}
