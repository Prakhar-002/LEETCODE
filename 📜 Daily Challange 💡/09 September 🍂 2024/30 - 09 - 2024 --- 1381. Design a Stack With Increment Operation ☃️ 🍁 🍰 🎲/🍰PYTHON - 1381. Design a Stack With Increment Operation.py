#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1381

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Stack maxSize

#? 🧺 Space complexity ➺ O(n)

class CustomStack:
      def __init__(self, maxSize):
            # Initialize the stack array with a specified maximum size
            self.stackArr = [0] * maxSize
            # This states how many elements are currently in the stack
            self.size = -1

      def push(self, x):
            # Ensures you don't exceed the stack's capacity
            if self.size < len(self.stackArr) - 1:
                  # Increments the size index and then stores the element x
                  self.size += 1
                  self.stackArr[self.size] = x

      def pop(self):
            # Checks if there are elements in the stack
            if self.size > -1:
                  # Returns the top element of the stack and then decrements the size
                  self.size -= 1
                  return self.stackArr[self.size + 1]

            # If the stack is empty (size <= -1), it returns -1
            return -1

      def increment(self, k, val):
            # Ensures k does not exceed the number of elements currently in the stack
            if k > self.size + 1:
                  # Increment by one cause there are size + 1 elements in stack
                  k = self.size + 1

            # Iterates from the bottom of the stack up to the kth element
            for i in range(k):
                  # Increment each of these k elements by val
                  self.stackArr[i] += val