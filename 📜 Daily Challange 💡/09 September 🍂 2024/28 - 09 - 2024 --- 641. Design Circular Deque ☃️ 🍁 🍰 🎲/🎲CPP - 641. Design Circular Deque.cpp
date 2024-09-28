//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 641

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) ➺ Capacity of Deque

#include <vector>
using namespace std;

class MyCircularDeque {
private:
      vector<int> deque_arr;
      int front;
      int back;
      int size;
      int capacity;

public:
      MyCircularDeque(int n) {
            // Initialize the circular deque with a given capacity
            deque_arr = vector<int>(n, -1);  // Create a vector filled with -1
            front = 0;  // Index of the front element
            back = 0;   // Index of the position after the last element
            size = 0;   // Current number of elements in the deque
            capacity = n;  // Maximum capacity of the deque
      }

      bool insertFront(int value) {
            // Insert an element at the front of the deque
            if (isFull()) {
                  return false;  // Deque is full, cannot insert
            }

            if (front == 0) {
                  front = capacity - 1;  // Wrap around to the end
            } else {
                  front--;  // Move front pointer back
            }

            deque_arr[front] = value;  // Insert the value
            size++;  // Increase the size
            return true;  // Insertion successful
      }

      bool insertLast(int value) {
            // Insert an element at the rear of the deque
            if (isFull()) {
                  return false;  // Deque is full, cannot insert
            }

            deque_arr[back] = value;  // Insert the value

            if (back == capacity - 1) {
                  back = 0;  // Wrap around to the beginning
            } else {
                  back++;  // Move back pointer forward
            }

            size++;  // Increase the size
            return true;  // Insertion successful
      }

      bool deleteFront() {
            // Delete the front element from the deque
            if (isEmpty()) {
                  return false;  // Deque is empty, cannot delete
            }

            deque_arr[front] = -1;  // Mark as deleted

            if (front == capacity - 1) {
                  front = 0;  // Wrap around to the beginning
            } else {
                  front++;  // Move front pointer forward
            }

            size--;  // Decrease the size
            return true;  // Deletion successful
      }

      bool deleteLast() {
            // Delete the last element from the deque
            if (isEmpty()) {
                  return false;  // Deque is empty, cannot delete
            }

            if (back == 0) {
                  back = capacity - 1;  // Wrap around to the end
            } else {
                  back--;  // Move back pointer backward
            }

            deque_arr[back] = -1;  // Mark as deleted

            size--;  // Decrease the size
            return true;  // Deletion successful
      }

      int getFront() {
            // Get the front element of the deque
            if (isEmpty()) {
                  return -1;  // Deque is empty
            }
            return deque_arr[front];
      }

      int getRear() {
            // Get the last element of the deque
            if (isEmpty()) {
                  return -1;  // Deque is empty
            }
            if (back == 0) {
                  return deque_arr[capacity - 1];  // Last element is at the end
            } else {
                  return deque_arr[back - 1];  // Last element is before back
            }
      }

      bool isEmpty() {
            // Check if the deque is empty
            return size == 0;
      }

      bool isFull() {
            // Check if the deque is full
            return size == capacity;
      }
};

