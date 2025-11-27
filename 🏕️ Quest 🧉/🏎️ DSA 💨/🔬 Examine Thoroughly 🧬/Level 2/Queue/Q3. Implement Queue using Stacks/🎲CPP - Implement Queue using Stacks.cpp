//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q3

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#include <stack>
using namespace std;

class MyQueue {
private:
      stack<int> s1; // Stack for enqueue operations
      stack<int> s2; // Stack for dequeue operations
      int frontElem; // Track the front element

public:
      // Constructor
      MyQueue() {
      }

      /**
       * Push element x to back of queue.
       * Update front element if s1 is empty.
       */
      void push(int x) {
            if (s1.empty()) {
                  frontElem = x; // update the front element
            }
            s1.push(x);
      }

      /**
       * Removes the element from in front of queue and returns it.
       * If s2 is empty, transfer all elements from s1 to s2.
       */
      int pop() {
            if (s2.empty()) {
                  while (!s1.empty()) {
                        s2.push(s1.top());
                        s1.pop();
                  }
            }
            int top = s2.top();
            s2.pop();
            return top;
      }

      /**
       * Get the front element.
       * If s2 not empty, top of s2 is front, else use stored frontElem.
       */
      int peek() {
            if (!s2.empty()) {
                  return s2.top();
            }
            return frontElem;
      }

      /**
       * Returns whether the queue is empty.
       */
      bool empty() {
            return s1.empty() && s2.empty();
      }
};
