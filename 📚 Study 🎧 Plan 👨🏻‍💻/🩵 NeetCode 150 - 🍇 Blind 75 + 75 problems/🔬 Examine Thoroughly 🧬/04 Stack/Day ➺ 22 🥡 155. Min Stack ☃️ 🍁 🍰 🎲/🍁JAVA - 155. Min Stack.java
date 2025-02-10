//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 155

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = stack size

import java.util.Stack;

class MinStack {
      private Stack<Integer> stack;
      private Stack<Integer> minStack;

      public MinStack() {
            // Main stack to store all values
            stack = new Stack<>();
            // Stack to store the minimum values
            minStack = new Stack<>();
      }

      public void push(int val) {
            // Push the value to the main stack
            stack.push(val);
            // Push the minimum value to the minStack
            // If the minStack is empty, push the value
            // Otherwise, push the minimum of the current value
            // and the top of the minStack
            if (minStack.isEmpty()) {
                  minStack.push(val);
            } else {
                  minStack.push(Math.min(val, minStack.peek()));
            }
      }

      public void pop() {
            // Pop the value from both the stack and the minStack
            stack.pop();
            minStack.pop();
      }

      public int top() {
            // Return the top value from the main stack
            return stack.peek();
      }

      public int getMin() {
            // Return the top value from the minStack (which is the minimum value)
            return minStack.peek();
      }
}
