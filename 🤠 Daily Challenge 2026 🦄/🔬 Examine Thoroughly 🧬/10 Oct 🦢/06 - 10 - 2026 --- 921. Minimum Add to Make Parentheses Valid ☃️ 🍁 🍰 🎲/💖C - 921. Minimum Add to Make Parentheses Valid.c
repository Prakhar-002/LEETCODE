//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 921

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minAddToMakeValid(const char* s) {
      // Initialize count of open parentheses and minimum additions needed
      int openCount = 0;
      int minAdditions = 0;

      // Iterate through each character in the input string
      for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '(') {
                  // Increment open parentheses count
                  openCount++;
            } else if (s[i] == ')') {
                  if (openCount > 0) {
                        // Matching pair found, decrement open count
                        openCount--;
                  } else {
                        // No matching open parenthesis, increment minimum additions
                        minAdditions++;
                  }
            }
      }

      // Add remaining open parentheses to minimum additions
      minAdditions += openCount;

      // Return the total minimum additions needed
      return minAdditions;
}

//!--------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

//? 🧺 Space complexity ➺ O(n)

int minAddToMakeValid(char* s) {
      // Initialize an empty stack to store parentheses
      int stack_size = 0;
      int len = strlen(s);
      char* stack = (char*)malloc(len * sizeof(char));

      // Iterate through each character in the input string
      for (int i = 0; i < len; i++) {
            // Check if stack is not empty and the current character forms a pair with the top of the stack
            if (stack_size > 0 && stack[stack_size - 1] == '(' && s[i] == ')') {
                  // Remove the matching pair by popping the top element
                  stack_size--;
            } else {
                  // Push the current character onto the stack
                  stack[stack_size++] = s[i];
            }
      }

      // Return the size of the remaining stack, which represents the minimum length
      int result = stack_size;
      free(stack);
      return result;
}
