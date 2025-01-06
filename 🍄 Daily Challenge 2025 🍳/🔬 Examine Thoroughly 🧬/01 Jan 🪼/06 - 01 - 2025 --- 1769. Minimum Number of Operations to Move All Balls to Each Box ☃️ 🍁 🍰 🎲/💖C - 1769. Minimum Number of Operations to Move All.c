//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1769

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(boxes)

//? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>
#include <string.h>

int* minOperations(char* boxes, int* returnSize) {
      int n = strlen(boxes);  // Length of the string representing the boxes
      *returnSize = n;        // Set the return size
      int* answer = (int*)malloc(n * sizeof(int));  // Allocate memory for the result array
      if (!answer) return NULL;  // Handle memory allocation failure

      // First pass: Calculate the moves needed to gather all balls to the left side
      int bolls = 0, moves = 0;  // Initialize the number of balls and moves to zero
      for (int i = 0; i < n; i++) {
            answer[i] = bolls + moves;  // The answer for the current box is the total moves so far
            moves += bolls;  // Update moves for the next iteration
            bolls += boxes[i] - '0';  // Convert '1' to 1 if a ball exists, else add 0
      }

      // Second pass: Calculate the moves needed to gather all balls to the right side
      bolls = 0;
      moves = 0;  // Reset the number of balls and moves to zero
      for (int i = n - 1; i >= 0; i--) {
            answer[i] += bolls + moves;  // Add the moves from the right side to the current box
            moves += bolls;  // Update moves for the next iteration
            bolls += boxes[i] - '0';  // Convert '1' to 1 if a ball exists, else add 0
      }

      return answer;  // Return the result array
}
