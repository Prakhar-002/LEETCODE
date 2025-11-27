#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q3

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class MyQueue:
      def __init__(self):
            self.s1 = []  # Input stack for enqueue operations
            self.s2 = []  # Output stack for dequeue operations
            self.front = None  # Track front element for efficient peek

      def push(self, x):
            """
            Push element x to the back of queue.
            If input stack is empty, update front element.
            """
            if not self.s1:
                  self.front = x  # Set front when first element added
            self.s1.append(x)

      def pop(self):
            """
            Remove front element from queue and return it.
            If output stack empty, transfer all from input to output (reverse order).
            """
            if not self.s2:
                  while self.s1:
                        self.s2.append(self.s1.pop())
            return self.s2.pop()

      def peek(self):
            """
            Get front element without removing it.
            Use output stack top if available, else use stored front.
            """
            if self.s2:
                  return self.s2[-1]
            return self.front

      def empty(self):
            """
            Check if queue is empty.
            Empty only when both stacks are empty.
            """
            return len(self.s1) == 0 and len(self.s2) == 0
