//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 641

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) ➺ Capacity of Deque

import java.util.Arrays;

class MyCircularDeque {
      private int[] dequeArr;
      private int front;
      private int back;
      private int size;
      private int capacity;

      public MyCircularDeque(int n) {
            // Initialize the circular deque with a given capacity
            this.dequeArr = new int[n];
            Arrays.fill(this.dequeArr, -1); // Create an array filled with -1
            this.front = 0; // Index of the front element
            this.back = 0; // Index of the position after the last element
            this.size = 0; // Current number of elements in the deque
            this.capacity = n; // Maximum capacity of the deque
      }

      public boolean insertFront(int value) {
            // Insert an element at the front of the deque
            if (isFull()) {
                  return false; // Deque is full, cannot insert
            }

            if (front == 0) {
                  front = capacity - 1; // Wrap around to the end
            } else {
                  front--; // Move front pointer back
            }

            dequeArr[front] = value; // Insert the value
            size++; // Increase the size
            return true; // Insertion successful
      }

      public boolean insertLast(int value) {
            // Insert an element at the rear of the deque
            if (isFull()) {
                  return false; // Deque is full, cannot insert
            }

            dequeArr[back] = value; // Insert the value

            if (back == capacity - 1) {
                  back = 0; // Wrap around to the beginning
            } else {
                  back++; // Move back pointer forward
            }

            size++; // Increase the size
            return true; // Insertion successful
      }

      public boolean deleteFront() {
            // Delete the front element from the deque
            if (isEmpty()) {
                  return false; // Deque is empty, cannot delete
            }

            dequeArr[front] = -1; // Mark as deleted

            if (front == capacity - 1) {
                  front = 0; // Wrap around to the beginning
            } else {
                  front++; // Move front pointer forward
            }

            size--; // Decrease the size
            return true; // Deletion successful
      }

      public boolean deleteLast() {
            // Delete the last element from the deque
            if (isEmpty()) {
                  return false; // Deque is empty, cannot delete
            }

            if (back == 0) {
                  back = capacity - 1; // Wrap around to the end
            } else {
                  back--; // Move back pointer backward
            }

            dequeArr[back] = -1; // Mark as deleted

            size--; // Decrease the size
            return true; // Deletion successful
      }

      public int getFront() {
            // Get the front element of the deque
            if (isEmpty()) {
                  return -1; // Deque is empty
            }
            return dequeArr[front];
      }

      public int getRear() {
            // Get the last element of the deque
            if (isEmpty()) {
                  return -1; // Deque is empty
            }
            if (back == 0) {
                  return dequeArr[capacity - 1]; // Last element is at the end
            } else {
                  return dequeArr[back - 1]; // Last element is before back
            }
      }

      public boolean isEmpty() {
            // Check if the deque is empty
            return size == 0;
      }

      public boolean isFull() {
            // Check if the deque is full
            return size == capacity;
      }
}
