//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Stack maxSize

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class CustomStack {
private:
      // a vector that serves as the underlying data structure for the stack
      vector<int> stackArr;
      // This states how many elements are currently in the stack
      int size;

public:
      CustomStack(int maxSize) : size(-1) {
            // initializes the `stackArr` with a specified maximum size
            stackArr.resize(maxSize);
      }

      void push(int x) {
            // ensures you don't exceed the stack's capacity
            if (size < static_cast<int>(stackArr.size()) - 1) {
                  // Increments the `size` index and then stores the element `x`
                  stackArr[++size] = x;
            }
      }

      int pop() {
            // Checks if there are elements in the stack
            if (size > -1) {
                  // Returns the top element of the stack and then decrements the `size`
                  return stackArr[size--];
            }

            // If the stack is empty (`size <= -1`), it returns `-1`
            return -1;
      }

      // increments the bottom `k` elements of the stack by `val`
      void increment(int k, int val) {
            // Ensures `k` does not exceed the number of elements currently in the stack
            int limit = min(k, size + 1);

            // Iterates from the bottom of the stack up to the `k`th element
            for (int i = 0; i < limit; i++) {
                  // increments each of these `k` elements by `val`
                  stackArr[i] += val;
            }
      }
};



