//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1994

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] canSeePersonsCount(int[] heights) {
            // Get total number of people (length of heights array)
            int N = heights.length;
            // Initialize result array to store visible count for each person
            int[] res = new int[N];

            // Use stack to track heights of people we can potentially see
            Stack<Integer> stack = new Stack();

            // Iterate from right to left (from back of line to front)
            for (int i = N - 1; i >= 0; i--) {
                  int height = heights[i];
                  int visible = 0;

                  // Pop people from stack who are shorter than current person
                  // Each popped person is visible to current person
                  while (!stack.isEmpty() && height > stack.peek()) {
                        visible++;
                        stack.pop();
                  }

                  // If stack not empty, tallest remaining person is also visible
                  if (!stack.isEmpty()) {
                        visible++;
                  }

                  // Store count of visible people for person at index i
                  res[i] = visible;
                  // Push current person's height onto stack for future comparisons
                  stack.push(height);
            }

            return res;
      }
}
