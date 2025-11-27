//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q3

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

// Java implementation of a queue using two stacks
import java.util.Stack;

public class MyQueue {
      private Stack<Integer> s1; // Stack to store incoming elements
      private Stack<Integer> s2; // Stack to reverse order for dequeuing
      private int front; // Variable to track the front element

      // Constructor initializes both stacks
      public MyQueue() {
            s1 = new Stack<>();
            s2 = new Stack<>();
      }

      /**
       * Push element x to the back of the queue.
       * If s1 is empty, update front to the new element.
       * 
       * @param x the element to be pushed
       */
      public void push(int x) {
            if (s1.isEmpty())
                  front = x; // Keep track of the front element
            s1.push(x);
      }

      /**
       * Removes the element from the front of the queue and returns it.
       * If s2 is empty, transfer all elements from s1 to s2 to reverse order.
       * Then pop from s2 for the FIFO behavior.
       * 
       * @return the front element
       */
      public int pop() {
            if (s2.isEmpty()) {
                  while (!s1.isEmpty())
                        s2.push(s1.pop());
            }
            return s2.pop();
      }

      /**
       * Gets the front element without removing it.
       * If s2 is not empty, the top of s2 is the front.
       * Otherwise, front variable holds the front element.
       * 
       * @return the front element
       */
      public int peek() {
            if (!s2.isEmpty()) {
                  return s2.peek();
            }
            return front;
      }

      /**
       * Returns whether the queue is empty.
       * The queue is empty only if both stacks are empty.
       * 
       * @return true if empty, false otherwise
       */
      public boolean empty() {
            return s1.isEmpty() && s2.isEmpty();
      }
}
