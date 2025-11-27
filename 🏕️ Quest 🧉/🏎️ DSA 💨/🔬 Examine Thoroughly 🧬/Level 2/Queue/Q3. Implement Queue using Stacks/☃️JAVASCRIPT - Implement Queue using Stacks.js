//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q3

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class MyQueue {
      constructor() {
            this.s1 = []; // Stack for input
            this.s2 = []; // Stack for output
            this.front = null; // Variable to track front element
      }

      /**
       * Push element x to the back of queue.
       * If input stack is empty, front is set to x.
       * @param {number} x
       */
      push(x) {
            if (this.s1.length === 0) {
                  this.front = x; // Keep track of the front element
            }
            this.s1.push(x);
      }

      /**
       * Removes the element from in front of queue and returns that element.
       * If output stack is empty, reverse input stack into output stack.
       * @return {number}
       */
      pop() {
            if (this.s2.length === 0) {
                  while (this.s1.length) {
                        this.s2.push(this.s1.pop());
                  }
            }
            return this.s2.pop();
      }

      /**
       * Get the front element.
       * If output stack has elements, top of output stack is front.
       * Otherwise, front variable holds the front element.
       * @return {number}
       */
      peek() {
            if (this.s2.length > 0) {
                  return this.s2[this.s2.length - 1];
            }
            return this.front;
      }

      /**
       * Returns whether the queue is empty.
       * @return {boolean}
       */
      empty() {
            return this.s1.length === 0 && this.s2.length === 0;
      }
}
