//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3542

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // Computes the minimum number of operations required to build the heights in nums
      public int minOperations(int[] nums) {
            Stack<Integer> stack = new Stack<>();   // Stack to keep track of active height layers
            int res = 0;                            // Result to accumulate total operations

            // Iterate through each number in the array
            for (int n : nums) {
                  // Pop elements from the stack while the top is greater than current number n
                  // This represents removing layers that exceed the current height
                  while (!stack.isEmpty() && stack.peek() > n) {
                        stack.pop();
                  }

                  // If current number n is positive and either stack is empty or top element differs
                  // This means we need to add this new layer, so increment the operation count
                  if (n > 0 && (stack.isEmpty() || stack.peek() != n)) {
                        res += 1;
                        stack.push(n);  // Push the new height layer to the stack
                  }
            }
            return res;  // Return total count of operations needed
      }
}
