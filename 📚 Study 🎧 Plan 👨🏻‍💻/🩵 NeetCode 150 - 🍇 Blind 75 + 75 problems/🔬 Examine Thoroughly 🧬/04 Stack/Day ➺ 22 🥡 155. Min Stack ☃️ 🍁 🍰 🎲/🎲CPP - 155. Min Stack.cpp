//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 155

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = stack size

#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
private:
      // Main stack to store all values
      vector<int> stack;
      // Stack to store the minimum values
      vector<int> min_stack;

public:
      MinStack() {}

      void push(int val) {
            // Push the value to the main stack
            stack.push_back(val);
            // Push the minimum value to the min_stack
            // If the min_stack is empty, push the value
            // Otherwise, push the minimum of the current value 
            // and the top of the min_stack
            if (min_stack.empty()) {
                  min_stack.push_back(val);
            } else {
                  min_stack.push_back(min(val, min_stack.back()));
            }
      }

      void pop() {
            // Pop the value from both the stack and the min_stack
            stack.pop_back();
            min_stack.pop_back();
      }

      int top() {
            // Return the top value from the main stack
            return stack.back();
      }

      int getMin() {
            // Return the top value from the min_stack (which is the minimum value)
            return min_stack.back();
      }
};

