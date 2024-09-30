//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Stack maxSize

//? 🧺 Space complexity ➺ O(n)

class CustomStack {
      constructor(maxSize) {
            // Initialize the stack array with a specified maximum size
            this.stackArr = new Array(maxSize);
            // This states how many elements are currently in the stack
            this.size = -1;
      }

      push(x) {
            // Ensures you don't exceed the stack's capacity
            if (this.size < this.stackArr.length - 1) {
                  // Increments the `size` index and then stores the element `x`
                  this.stackArr[++this.size] = x;
            }
      }

      pop() {
            // Checks if there are elements in the stack
            if (this.size > -1) {
                  // Returns the top element of the stack and then decrements the `size`
                  return this.stackArr[this.size--];
            }

            // If the stack is empty (`size <= -1`), it returns `-1`
            return -1;
      }

      // Increments the bottom `k` elements of the stack by `val`
      increment(k, val) {
            // Ensures `k` does not exceed the number of elements currently in the stack
            if (k > this.size) {
                  // Increment by one because there are size + 1 elements in stack 
                  k = this.size + 1;
            }

            // Iterates from the bottom of the stack up to the `k`th element
            for (let i = 0; i < k; i++) {
                  // Increment each of these `k` elements by `val`
                  this.stackArr[i] += val;
            }
      }
}

