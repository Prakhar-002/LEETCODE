#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 641

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(n) ➺ Capacity of Deque

class MyCircularDeque:
      def __init__(self, n: int):
            # Initialize the circular deque with a given capacity
            self.deque_arr = [-1] * n  # Create an array filled with -1
            self.front = 0  # Index of the front element
            self.back = 0  # Index of the position after the last element
            self.size = 0  # Current number of elements in the deque
            self.capacity = n  # Maximum capacity of the deque

      def insertFront(self, value: int) -> bool:
            # Insert an element at the front of the deque
            if self.isFull():
                  return False  # Deque is full, cannot insert

            if self.front == 0:
                  self.front = self.capacity - 1  # Wrap around to the end
            else:
                  self.front -= 1  # Move front pointer back

            self.deque_arr[self.front] = value  # Insert the value
            self.size += 1  # Increase the size
            return True  # Insertion successful

      def insertLast(self, value: int) -> bool:
            # Insert an element at the rear of the deque
            if self.isFull():
                  return False  # Deque is full, cannot insert

            self.deque_arr[self.back] = value  # Insert the value

            if self.back == self.capacity - 1:
                  self.back = 0  # Wrap around to the beginning
            else:
                  self.back += 1  # Move back pointer forward

            self.size += 1  # Increase the size
            return True  # Insertion successful

      def deleteFront(self) -> bool:
            # Delete the front element from the deque
            if self.isEmpty():
                  return False  # Deque is empty, cannot delete

            self.deque_arr[self.front] = -1  # Mark as deleted

            if self.front == self.capacity - 1:
                  self.front = 0  # Wrap around to the beginning
            else:
                  self.front += 1  # Move front pointer forward

            self.size -= 1  # Decrease the size
            return True  # Deletion successful

      def deleteLast(self) -> bool:
            # Delete the last element from the deque
            if self.isEmpty():
                  return False  # Deque is empty, cannot delete

            if self.back == 0:
                  self.back = self.capacity - 1  # Wrap around to the end
            else:
                  self.back -= 1  # Move back pointer backward

            self.deque_arr[self.back] = -1  # Mark as deleted

            self.size -= 1  # Decrease the size
            return True  # Deletion successful

      def getFront(self) -> int:
            # Get the front element of the deque
            if self.isEmpty():
                  return -1  # Deque is empty
            return self.deque_arr[self.front]

      def getRear(self) -> int:
            # Get the last element of the deque
            if self.isEmpty():
                  return -1  # Deque is empty
            if self.back == 0:
                  return self.deque_arr[self.capacity - 1]  # Last element is at the end
            else:
                  return self.deque_arr[self.back - 1]  # Last element is before back

      def isEmpty(self) -> bool:
            # Check if the deque is empty
            return self.size == 0

      def isFull(self) -> bool:
            # Check if the deque is full
            return self.size == self.capacity

