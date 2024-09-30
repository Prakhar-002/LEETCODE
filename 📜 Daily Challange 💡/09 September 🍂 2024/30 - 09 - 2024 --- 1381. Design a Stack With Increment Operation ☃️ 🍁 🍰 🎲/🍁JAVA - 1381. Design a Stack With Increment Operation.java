//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Stack maxSize

//? 🧺 Space complexity ➺ O(n)

class CustomStack {
      // an integer array that serves as the underlying data structure for the stack
      int stackArr[];
      // This states how many elements are currently in the stack
      int size = -1;

      public CustomStack(int maxSize) {
            //  initializes the `stackArr` with a specified maximum size
            stackArr = new int[maxSize];
      }

      public void push(int x) {
            // ensures you don’t exceed the stack’s capacity
            if (size < stackArr.length) {
                  // Increments the `size` index and then stores the element `x`
                  stackArr[++size] = x;
            }
      }

      public int pop() {
            // Checks if there are elements in the stack
            if (size > -1) {
                  //  Returns the top element of the stack and then drc the `size
                  return stackArr[size--];
            }

            //  If the stack is empty (`size <= -1`), it returns `-1`
            return -1;
      }

      // increments the bottom `k` elements of the stack by `val`
      public void increment(int k, int val) {
            // Ensures `k` does not exceed the number of elements currently in the stack
            if (k > size){
                  // inc by one cause there are size + 1 elem in stack 
                  k = size + 1;
            }

            // Iterates from the bottom of the stack up to the `k`th element
            for (int i = 0; i < k; i++) {
                  // each of these `k` elements by `val`
                  stackArr[i] += val;
            }
      }
}
