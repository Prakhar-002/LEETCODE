//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public int[] dailyTemperatures(int[] temperatures) {
            int n = temperatures.length; // Get the length of the temperature array
            int[] answer = new int[n]; // Initialize the result array with zeros
            Stack<int[]> tempStack = new Stack<>(); // Stack to store (index, temperature)

            // Iterate through the temperatures array
            for (int i = 0; i < n; i++) {
                  int currTemp = temperatures[i]; // Current day's temperature

                  // Process stack while the current temperature is greater than the top of stack
                  while (!tempStack.isEmpty() && currTemp > tempStack.peek()[1]) {

                        int[] prev = tempStack.pop(); // Get the last stored temperature index

                        int prevIndex = prev[0];

                        answer[prevIndex] = i - prevIndex; // Calculate the days difference
                  }

                  // Push the current temperature with index onto the stack
                  tempStack.push(new int[] { i, currTemp });
            }

            return answer; // Return the result array
      }
}
