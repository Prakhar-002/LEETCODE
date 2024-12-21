//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 735

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(asteroids)

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public int[] asteroidCollision(int[] asteroids) {
            // Create a stack to store surviving asteroids
            Stack<Integer> stack = new Stack<>();

            // Iterate through each asteroid in the input array
            for (int asteroid : asteroids) {
                  // If the asteroid is moving to the right (positive value)
                  if (asteroid > 0) {
                        // Push it onto the stack
                        stack.push(asteroid);
                  } else {
                        // While there is a collision scenario:
                        // - Stack is not empty
                        // - Top of the stack is a right-moving asteroid
                        // - The current asteroid has greater magnitude
                        while (!stack.isEmpty() && stack.peek() > 0 && stack.peek() < -asteroid) {
                              stack.pop(); // Remove the smaller right-moving asteroid
                        }

                        // If the stack is empty or the top of the stack is a left-moving asteroid
                        if (stack.isEmpty() || stack.peek() < 0) {
                              // Push the left-moving asteroid onto the stack
                              stack.push(asteroid);
                        }

                        // If the top of the stack has the same magnitude as the current asteroid
                        if (stack.peek() == -asteroid) {
                              stack.pop(); // Both asteroids are destroyed
                        }
                  }
            }

            // Convert the stack into the result array
            int[] res = new int[stack.size()];
            int i = stack.size() - 1;

            // Populate the result array in reverse order
            while (!stack.isEmpty()) {
                  res[i--] = stack.pop();
            }

            return res; // Return the surviving asteroids
      }
}

