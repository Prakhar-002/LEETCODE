//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 374

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int guessNumber(int n) {
            int left = 1;        // Set left bound to 1
            int right = n;       // Set right bound to n

            while (left <= right) {              // Keep searching until bounds meet
                  int mid = left + (right - left) / 2;  // Safe way to calculate middle
                  int result = guess(mid);       // Call provided guess API

                  if (result == 0) {
                        return mid;              // Found the correct number
                  } else if (result < 0) {
                        right = mid - 1;         // The number is smaller, go left
                  } else {
                        left = mid + 1;          // The number is larger, go right
                  }
            }

            return -1; // Just a fallback
      }
};
