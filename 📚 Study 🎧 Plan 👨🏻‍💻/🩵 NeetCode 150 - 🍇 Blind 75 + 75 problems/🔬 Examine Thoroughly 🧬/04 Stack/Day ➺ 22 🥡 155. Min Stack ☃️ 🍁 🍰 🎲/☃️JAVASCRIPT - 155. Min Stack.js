//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 155

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = stack size

class MinStack {
      constructor() {
            // Main stack to store all values
            this.stack = [];
            // Stack to store the minimum values
            this.minStack = [];
      }

      push(val) {
            // Push the value to the main stack
            this.stack.push(val);
            // Push the minimum value to the minStack
            // If the minStack is empty, push the value
            // Otherwise, push the minimum of the current value 
            // and the top of the minStack
            if (this.minStack.length === 0) {
                  this.minStack.push(val);
            } else {
                  this.minStack.push(Math.min(val, this.minStack[this.minStack.length - 1]));
            }
      }

      pop() {
            // Pop the value from both the stack and the minStack
            this.stack.pop();
            this.minStack.pop();
      }

      top() {
            // Return the top value from the main stack
            return this.stack[this.stack.length - 1];
      }

      getMin() {
            // Return the top value from the minStack (which is the minimum value)
            return this.minStack[this.minStack.length - 1];
      }
}

