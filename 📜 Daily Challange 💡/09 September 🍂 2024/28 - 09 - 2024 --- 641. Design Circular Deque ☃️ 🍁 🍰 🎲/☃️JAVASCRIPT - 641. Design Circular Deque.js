//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 641

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) ➺ Capacity of Deque

class MyCircularDeque {
      constructor(n) {
            // Initialize the circular deque with a given capacity
            this.deque_arr = new Array(n).fill(-1);  // Create an array filled with -1
            this.front = 0;  // Index of the front element
            this.back = 0;  // Index of the position after the last element
            this.size = 0;  // Current number of elements in the deque
            this.capacity = n;  // Maximum capacity of the deque
      }

      insertFront(value) {
            // Insert an element at the front of the deque
            if (this.isFull()) {
                  return false;  // Deque is full, cannot insert
            }

            if (this.front === 0) {
                  this.front = this.capacity - 1;  // Wrap around to the end
            } else {
                  this.front--;  // Move front pointer back
            }

            this.deque_arr[this.front] = value;  // Insert the value
            this.size++;  // Increase the size
            return true;  // Insertion successful
      }

      insertLast(value) {
            // Insert an element at the rear of the deque
            if (this.isFull()) {
                  return false;  // Deque is full, cannot insert
            }

            this.deque_arr[this.back] = value;  // Insert the value

            if (this.back === this.capacity - 1) {
                  this.back = 0;  // Wrap around to the beginning
            } else {
                  this.back++;  // Move back pointer forward
            }

            this.size++;  // Increase the size
            return true;  // Insertion successful
      }

      deleteFront() {
            // Delete the front element from the deque
            if (this.isEmpty()) {
                  return false;  // Deque is empty, cannot delete
            }

            this.deque_arr[this.front] = -1;  // Mark as deleted

            if (this.front === this.capacity - 1) {
                  this.front = 0;  // Wrap around to the beginning
            } else {
                  this.front++;  // Move front pointer forward
            }

            this.size--;  // Decrease the size
            return true;  // Deletion successful
      }

      deleteLast() {
            // Delete the last element from the deque
            if (this.isEmpty()) {
                  return false;  // Deque is empty, cannot delete
            }

            if (this.back === 0) {
                  this.back = this.capacity - 1;  // Wrap around to the end
            } else {
                  this.back--;  // Move back pointer backward
            }

            this.deque_arr[this.back] = -1;  // Mark as deleted

            this.size--;  // Decrease the size
            return true;  // Deletion successful
      }

      getFront() {
            // Get the front element of the deque
            if (this.isEmpty()) {
                  return -1;  // Deque is empty
            }
            return this.deque_arr[this.front];
      }

      getRear() {
            // Get the last element of the deque
            if (this.isEmpty()) {
                  return -1;  // Deque is empty
            }
            if (this.back === 0) {
                  return this.deque_arr[this.capacity - 1];  // Last element is at the end
            } else {
                  return this.deque_arr[this.back - 1];  // Last element is before back
            }
      }

      isEmpty() {
            // Check if the deque is empty
            return this.size === 0;
      }

      isFull() {
            // Check if the deque is full
            return this.size === this.capacity;
      }
}

